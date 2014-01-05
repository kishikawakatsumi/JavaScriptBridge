var TwitterViewController = JSB.define('TwitterViewController : UITableViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Twitter';

    self.view.backGroundColor = UIColor.whiteColor();

    var accountStore = ACAccountStore.new();
    var accountType = accountStore.accountTypeWithAccountTypeIdentifier('com.apple.twitter');
    JSB.dump(accountType);
    // accountStore.requestAccessToAccountsWithTypeOptionsCompletion(accountType, null, function(granted, error) {
    //   if (granted) {
    //     var accountType = accountStore.accountTypeWithAccountTypeIdentifier('com.apple.twitter');
    //     var accounts = accountStore.accountsWithAccountType(accountType);
    //          if (accounts.length > 0) {
    //              var account = accounts[0];
    //              [self getHomeTimlineWithAccount:account];
    //          } else {
    //              // [self showAlertOnError:[NSError errorWithDomain:@"SECoreTextViewErrorDomain" code:0 userInfo:@{NSLocalizedDescriptionKey: @"No Twitter account."}]];
    //          }
    //      } else {
    //          // [self showAlertOnError:[NSError errorWithDomain:@"SECoreTextViewErrorDomain" code:0 userInfo:@{NSLocalizedDescriptionKey: @"Twitter account access denied."}]];
    //      }
    // });

    // self.collectionView.registerClassForCellWithReuseIdentifier(UICollectionViewCell, 'Cell');
  }
});

JSB.exports = TwitterViewController;
