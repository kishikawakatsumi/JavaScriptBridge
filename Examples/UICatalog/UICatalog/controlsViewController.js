var ControlsViewController = JSB.define('ControlsViewController : UITableViewController', {
  viewDidLoad: function() {
    self.switchCtl = function() {
      var frame = {x: 0, y: 12, width: 94, height: 27};
      var switchCtl = UISwitch.alloc().initWithFrame(frame);
      switchCtl.addTargetActionForControlEvents(self, 'switchAction:', 1 << 12);
      switchCtl.backgroundColor = UIColor.clearColor();

      switchCtl.tag = 1;

      return switchCtl;
    };

    self.sliderCtl = function() {
      var frame = {x: 0, y: 12, width: 120, height: 7};
      var sliderCtl = UISlider.alloc().initWithFrame(frame);
      sliderCtl.addTargetActionForControlEvents(self, 'sliderAction:', 1 << 12);
      sliderCtl.backgroundColor = UIColor.clearColor();
      sliderCtl.minimumValue = 0.0;
      sliderCtl.maximumValue = 100.0;
      sliderCtl.continuous = true;
      sliderCtl.value = 50.0;

      sliderCtl.tag = 1;

      return sliderCtl;
    }

    self.navigationItem.title = 'Controls';

    self.dataSourceArray = [{
      sectionTitleKey: 'UISwitch',
      labelKey: 'Standard Switch',
      sourceKey: 'ControlsViewController.m:\r-(UISwitch *)switchCtl',
      viewKey: self.switchCtl()
    },
    {
      sectionTitleKey: 'UISlider',
      labelKey: 'Standard Slider',
      sourceKey: 'ControlsViewController.m:\r-(UISlider *)sliderCtl',
      viewKey: self.sliderCtl()
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
  switchAction: function(sender) {
    JSB.dump(sender.on);
  },
  sliderAction: function(sender) {
    JSB.dump(sender.value);
  }
});

JSB.exports = ControlsViewController;
