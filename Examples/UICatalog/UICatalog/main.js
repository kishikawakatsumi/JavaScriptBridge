JSB.Class.define('MainViewController : UITableViewController',
{
 numberOfSectionsInTableView: function (tableView) {
   return 2;
 },
 tableViewNumberOfRowsInSection: function (tableView, section) {
   return 10;
 },
 tableViewCellForRowAtIndexPath: function (tableView, indexPath) {
   var cell = UITableViewCell.new();
   return cell;
 }
},
{

});

var window = UIWindow.alloc().initWithFrame(UIScreen.mainScreen().bounds);
window.backgroundColor = UIColor.whiteColor();

var navigationController = UINavigationController.new();

var mainViewController = MainViewController.new();
navigationController.viewControllers = [mainViewController];

window.rootViewController = navigationController;

window.makeKeyAndVisible();
