var ButtonsViewController = JSB.require('buttonsViewController');

var MainViewController = JSB.define('MainViewController : UITableViewController', {
  viewDidLoad: function() {
    this.menuList = [];

    self.navigationItem.title = 'UICatalog';

    var viewController = ButtonsViewController.new();
    menuList.push({
      title: 'Buttons',
      explanation: 'Various uses of UIButton',
      viewController: viewController
    });
  },
  tableViewNumberOfRowsInSection: function(tableView, section) {
    return menuList.length;
  },
  tableViewCellForRowAtIndexPath: function(tableView, indexPath) {
    var cell = UITableViewCell.alloc().initWithStyleReuseIdentifier(3, 'Cell');
    cell.accessoryType = 1;
    cell.textLabel.text = menuList[indexPath.row]['title'];
    cell.detailTextLabel.text = menuList[indexPath.row]['explanation'];

    return cell;
  },
  tableViewDidSelectRowAtIndexPath: function(tableView, indexPath) {
    var targetViewController = menuList[indexPath.row]['viewController'];
    self.navigationController.pushViewControllerAnimated(targetViewController, true);
  }
});

JSB.exports = MainViewController;
