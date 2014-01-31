var TwitterCell = JSB.defineClass('TwitterCell : UITableViewCell', {
  initWithStyleReuseIdentifier: function(style, reuseIdentifier) {
    self.iconImageView = UIImageView.alloc().initWithFrame({x: 8, y: 8, width: 40, height: 40});
    self.iconImageView.tag = 1;
    self.contentView.addSubview(self.iconImageView);

    self.usernameLabel = UILabel.new();
    self.usernameLabel.frame = {x: 56, y: 2, width: 254, height: 18};
    self.usernameLabel.font = UIFont.systemFontOfSize(12);
    self.usernameLabel.textColor = UIColor.lightGrayColor();
    self.usernameLabel.tag = 2;
    self.contentView.addSubview(self.usernameLabel);

    self.tweetLabel = UILabel.new();
    self.tweetLabel.frame = {x: 56, y: 20, width: 254, height: 40};
    self.tweetLabel.font = UIFont.systemFontOfSize(14);
    self.tweetLabel.textColor = UIColor.blackColor();
    self.tweetLabel.numberOfLines = -1;
    self.tweetLabel.tag = 3;
    self.contentView.addSubview(self.tweetLabel);

    return self;
  }
});

var TwitterViewController = JSB.defineClass('TwitterViewController : UITableViewController', {
  viewDidLoad: function() {
    self.timeline = [];

    self.sizeLabel = UILabel.alloc().initWithFrame({x: 0, y: 0, width: 268, height: 0});
    self.sizeLabel.font = UIFont.systemFontOfSize(14);
    self.sizeLabel.numberOfLines = -1;

    self.getHomeTimlineWithAccount = function(account) {
      UIApplication.sharedApplication().networkActivityIndicatorVisible = true;

      var requestURL = NSURL.URLWithString('https://api.twitter.com/1.1/statuses/home_timeline.json');
      var params = {'count': '200', 'include_entities': 'true'};

      var request = SLRequest.requestForServiceTypeRequestMethodURLParameters('com.apple.social.twitter', 0, requestURL, params);
      request.account = account;

      request.performRequestWithHandler(function(responseData, urlResponse, error) {
        UIApplication.sharedApplication().networkActivityIndicatorVisible = false;
        var result = NSJSONSerialization.JSONObjectWithDataOptionsError(responseData, 0, null);

        self.timeline = result;
        JSB.dispatch_async(JSB.dispatch_get_main_queue(), function() {
          self.tableView.reloadData();
        });
      });
    }

    self.navigationItem.title = 'Twitter';
    self.view.backGroundColor = UIColor.whiteColor();

    self.tableView.registerClassForCellReuseIdentifier(TwitterCell, 'Cell');

    var accountStore = ACAccountStore.new();
    var accountType = accountStore.accountTypeWithAccountTypeIdentifier('com.apple.twitter');

    accountStore.requestAccessToAccountsWithTypeOptionsCompletion(accountType, null, function(granted, error) {
      if (granted) {
        var accountType = accountStore.accountTypeWithAccountTypeIdentifier('com.apple.twitter');
        var accounts = accountStore.accountsWithAccountType(accountType);
        if (accounts.length > 0) {
          var account = accounts[0];
          self.getHomeTimlineWithAccount(account);
        } else {
          JSB.dispatch_async(JSB.dispatch_get_main_queue(), function() {
            var alertView = UIAlertView.new();
            alertView.message = 'No Twitter account.';
            alertView.addButtonWithTitle('OK');
            alertView.show();
          });
        }
      } else {
        JSB.dispatch_async(JSB.dispatch_get_main_queue(), function() {
          var alertView = UIAlertView.new();
          alertView.message = 'Twitter account access denied.';
          alertView.addButtonWithTitle('OK');
          alertView.show();
        });
      }
    });
  },
  shouldAutorotate: function() {
    return false;
  },
  supportedInterfaceOrientations: function() {
    return 1 << 1;
  },
  numberOfSectionsInTableView: function(tableView) {
    return 1;
  },
  tableViewNumberOfRowsInSection: function(tableView, section) {
    return self.timeline.length;
  },
  tableViewHeightForRowAtIndexPath: function(tableView, indexPath) {
    var tweet = self.timeline[indexPath.row];

    self.sizeLabel.text = tweet['text'];
    var size = self.sizeLabel.sizeThatFits({width: 254, height: 0});

    return Math.max(size.height + 24, 80);
  },
  tableViewCellForRowAtIndexPath: function(tableView, indexPath) {
    var cell = tableView.dequeueReusableCellWithIdentifierForIndexPath('Cell', indexPath);

    var tweet = self.timeline[indexPath.row];
    var user = tweet['user'];

    var usernameLabel = cell.contentView.viewWithTag(2);
    usernameLabel.text = user['name'];
    
    var tweetLabel = cell.contentView.viewWithTag(3);
    tweetLabel.text = tweet['text'];
    var frame = tweetLabel.frame;
    frame.width = 254;
    tweetLabel.frame = frame;
    tweetLabel.sizeToFit();

    var profileImageURL = user['profile_image_url_https'];
    var imageURL = NSURLRequest.requestWithURL(NSURL.URLWithString(profileImageURL));

    self[profileImageURL] = cell;

    NSURLConnection.sendAsynchronousRequestQueueCompletionHandler(imageURL, NSOperationQueue.mainQueue(), function(response, data, connectionError) {
      var image = UIImage.imageWithData(data);

      var profileImageURL = response.URL().absoluteString();
      cell = self[profileImageURL];

      var iconImageView = cell.contentView.viewWithTag(1);
      iconImageView.image = image;
    });

    return cell;
  }
});

JSB.exports = TwitterViewController;
