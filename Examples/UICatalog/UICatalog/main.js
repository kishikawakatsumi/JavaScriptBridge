
JSB.Module.require('buttonsViewController');

var MainViewController = JSB.Class.define('MainViewController : UITableViewController', {
	viewDidLoad: function() {
		self.navigationItem.title = 'UICatalog';

		this.menuList = [];

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

var window = UIWindow.alloc().initWithFrame(UIScreen.mainScreen().bounds);
window.backgroundColor = UIColor.whiteColor();

var navigationController = UINavigationController.new();

var mainViewController = MainViewController.new();
navigationController.viewControllers = [mainViewController];

window.rootViewController = navigationController;

window.makeKeyAndVisible();
