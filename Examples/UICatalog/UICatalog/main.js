// var window = UIWindow.alloc().initWithFrame(UIScreen.mainScreen().bounds);
// window.backgroundColor = UIColor.whiteColor();

// var navigationController = UINavigationController.new();
// window.rootViewController = navigationController;

// window.makeKeyAndVisible();

JSB.Class.define('JSBTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>',
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

var dataSource = JSBTableViewDataSource.new();

var window = UIWindow.new();
window.frame = UIScreen.mainScreen().bounds;
window.backgroundColor = UIColor.whiteColor();

var tableView = UITableView.new();
tableView.frame = window.bounds;
tableView.rowHeight = 44;
tableView.dataSource = dataSource;

window.addSubview(tableView);

window.makeKeyAndVisible();
