(function() {
	var ButtonsViewController = JSB.Class.define('ButtonsViewController : UITableViewController', {
		viewDidLoad: function() {
			self.navigationItem.title = 'Buttons';

			this.dataSourceArray = [];

			var buttonBackground = UIImage.imageNamed('whiteButton');
			var buttonBackgroundPressed = UIImage.imageNamed('blueButton');

			var frame = {x: 0, y: 5, width: 106, height: 40};

			var button = UIButton.alloc().initWithFrame(frame);

			button.contentVerticalAlignment = 0;
			button.contentHorizontalAlignment = 0;
			button.setTitleForState('Gray', 0);
			button.setTitleColorForState(UIColor.blackColor(), 0);

			var newImage = buttonBackground.stretchableImageWithLeftCapWidthTopCapHeight(12, 0);
			button.setBackgroundImageForState(newImage, 0);

			var newPressedImage = buttonBackgroundPressed.stretchableImageWithLeftCapWidthTopCapHeight(12, 0);
			button.setBackgroundImageForState(newPressedImage, 1 << 0);

			button.backgroundColor = UIColor.clearColor();
			button.tag = 1;

			dataSourceArray.push({
				sectionTitleKey: 'UIButton',
				labelKey: 'Background Image',
				sourceKey: 'ButtonsViewController.m:\r(UIButton *)grayButton',
				viewKey: button
			});
		},
		numberOfSectionsInTableView: function(tableView) {
			return dataSourceArray.length;
		},
		tableViewNumberOfRowsInSection: function(tableView, section) {
			return 2;
		},
		tableViewTitleForHeaderInSection: function(tableView, section) {
			return dataSourceArray[section]['sectionTitleKey'];
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

				cell.textLabel.text = dataSourceArray[indexPath.section]['labelKey'];
				var button = dataSourceArray[indexPath.section]['viewKey'];

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
				cell.textLabel.text = menuList[indexPath.section]['sourceKey'];

				return cell;
			}
		}
	});
})();

