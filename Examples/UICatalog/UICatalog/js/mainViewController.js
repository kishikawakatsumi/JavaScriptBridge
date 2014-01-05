var ButtonsViewController = JSB.require('buttonsViewController');
var ControlsViewController = JSB.require('controlsViewController');
var CollectionViewController = JSB.require('collectionViewController');
var WebViewController = JSB.require('webViewController');
var MapViewController = JSB.require('mapViewController');

var MainViewController = JSB.define('MainViewController : UITableViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'UICatalog';

    self.menuList = [{
      title: 'Buttons',
      explanation: 'Various uses of UIButton',
      viewController: ButtonsViewController.alloc().initWithStyle(1)
    },
    {
      title: 'Controls',
      explanation: 'Various uses of UIControl',
      viewController: ControlsViewController.alloc().initWithStyle(1)
    },
    {
      title: 'Collection View',
      explanation: 'Use of UICollectionView',
      viewController: CollectionViewController.alloc().initWithCollectionViewLayout(UICollectionViewFlowLayout.new())
    },
    {
      title: 'Web',
      explanation: 'Use of UIWebView',
      viewController: WebViewController.alloc().init()
    },
    {
      title: 'Map',
      explanation: 'Use of MKMapView',
      viewController: MapViewController.alloc().init()
    }]
  },
  tableViewNumberOfRowsInSection: function(tableView, section) {
    return self.menuList.length;
  },
  tableViewCellForRowAtIndexPath: function(tableView, indexPath) {
    var cell = UITableViewCell.alloc().initWithStyleReuseIdentifier(3, 'Cell');
    cell.accessoryType = 1;
    cell.textLabel.text = self.menuList[indexPath.row]['title'];
    cell.detailTextLabel.text = self.menuList[indexPath.row]['explanation'];

    return cell;
  },
  tableViewDidSelectRowAtIndexPath: function(tableView, indexPath) {
    var targetViewController = self.menuList[indexPath.row]['viewController'];
    self.navigationController.pushViewControllerAnimated(targetViewController, true);
  }
});

JSB.exports = MainViewController;
