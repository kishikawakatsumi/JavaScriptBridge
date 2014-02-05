var ButtonsViewController = JSB.defineClass('ButtonsViewController : UITableViewController', {
  viewDidLoad: function() {
    self.newButton = function(title, target, selector, frame, image, imagePressed, darkTextColor) {
      var button = UIButton.alloc().initWithFrame(frame);

      button.contentVerticalAlignment = 0;
      button.contentHorizontalAlignment = 0;

      button.setTitleForState(title, 0);
      if (darkTextColor) {
        button.setTitleColorForState(UIColor.blackColor(), 0);
      } else {
        button.setTitleColorForState(UIColor.whiteColor(), 0);
      }

      var newImage = image.stretchableImageWithLeftCapWidthTopCapHeight(12, 0);
      button.setBackgroundImageForState(newImage, 0);

      var newPressedImage = imagePressed.stretchableImageWithLeftCapWidthTopCapHeight(12, 0);
      button.setBackgroundImageForState(newPressedImage, 1 << 0);

      button.backgroundColor = UIColor.clearColor();

      button.addTargetActionForControlEvents(target, selector, 1 << 6);

      return button;
    };

    self.grayButton = function() {
      var buttonBackground = UIImage.imageNamed('whiteButton');
      var buttonBackgroundPressed = UIImage.imageNamed('blueButton');

      var frame = {x: 0, y: 5, width: 106, height: 40};
      var button = self.newButton('Gray', self, 'action:', frame, buttonBackground, buttonBackgroundPressed, true);

      button.tag = 1;

      return button;
    };

    self.imageButton = function() {
      var buttonBackground = UIImage.imageNamed('whiteButton');
      var buttonBackgroundPressed = UIImage.imageNamed('blueButton');

      var frame = {x: 0, y: 5, width: 106, height: 40};
      
      var button = self.newButton('', self, 'action:', frame, buttonBackground, buttonBackgroundPressed, true);
      button.setImageForState(UIImage.imageNamed('UIButton_custom'), 0);

      return button;
    }

    self.navigationItem.title = 'Buttons';

    self.dataSourceArray = [{
      sectionTitleKey: 'UIButton',
      labelKey: 'Background Image',
      sourceKey: 'ButtonsViewController.m:\r(UIButton *)grayButton',
      viewKey: self.grayButton()
    },
    {
      sectionTitleKey: 'UIButton',
      labelKey: 'Button with Image',
      sourceKey: 'ButtonsViewController.m:\r(UIButton *)imageButton',
      viewKey: self.imageButton()
    }];
  },
  numberOfSectionsInTableView: function(tableView) {
    return self.dataSourceArray.length;
  },
  tableViewNumberOfRowsInSection: function(tableView, section) {
    return 2;
  },
  tableViewTitleForHeaderInSection: function(tableView, section) {
    return self.dataSourceArray[section]['sectionTitleKey'];
  },
  tableViewHeightForRowAtIndexPath: function(tableView, indexPath) {
    return (indexPath.row == 0) ? 50 : 38;
  },
  tableViewCellForRowAtIndexPath: function(tableView, indexPath) {
    if (indexPath.row == 0) {
      var cell = UITableViewCell.alloc().initWithStyleReuseIdentifier(0, 'DisplayCellID');
      cell.selectionStyle = 0;

      var viewToRemove = null;
      viewToRemove = cell.contentView.viewWithTag(1);
      if (viewToRemove) {
        viewToRemove.removeFromSuperview();
      }

      cell.textLabel.text = self.dataSourceArray[indexPath.section]['labelKey'];
      var button = self.dataSourceArray[indexPath.section]['viewKey'];

      var newFrame = button.frame;
      newFrame.x = cell.contentView.frame.width - newFrame.width - 10;
      button.frame = newFrame;

      button.autoresizingMask = 1 << 0;

      cell.contentView.addSubview(button);

      return cell;
    } else {
      var cell = UITableViewCell.alloc().initWithStyleReuseIdentifier(0, 'SourceCellID');
      cell.selectionStyle = 0;

      cell.textLabel.opaque = false;
      cell.textLabel.textAlignment = 1;
      cell.textLabel.textColor = UIColor.grayColor();
      cell.textLabel.numberOfLines = 2;
      cell.textLabel.highlightedTextColor = UIColor.blackColor();
      cell.textLabel.font = UIFont.systemFontOfSize(12);
      cell.textLabel.text = self.dataSourceArray[indexPath.section]['sourceKey'];

      return cell;
    }
  },
  action: function(sender) {
    var alertView = UIAlertView.alloc().initWithTitleMessageDelegateCancelButtonTitleOtherButtonTitles('Alert', 'Button pushed.', null, 'Cancel', ['OK']);
    alertView.show();
  }
});

JSB.exports = ButtonsViewController;
