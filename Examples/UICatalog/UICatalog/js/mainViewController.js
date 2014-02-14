var ButtonsViewController = JSB.require('buttonsViewController');
var ControlsViewController = JSB.require('controlsViewController');
var TwitterViewController = JSB.require('twitterViewController');
var CollectionViewController = JSB.require('collectionViewController');
var WebViewController = JSB.require('webViewController');
var MapViewController = JSB.require('mapViewController');
var GestureViewController = JSB.require('gestureViewController');
var GradientViewController = JSB.require('gradientViewController');
var SpritesViewController = JSB.require('spritesViewController');

var MainViewController = JSB.defineClass('MainViewController : UITableViewController', {
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
      title: 'Table View',
      explanation: 'Use of UITableView',
      viewController: TwitterViewController.alloc().init()
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
    },
    {
      title: 'Gesture',
      explanation: 'Use of UIGestureRecognizer',
      viewController: GestureViewController.alloc().init()
    },
    {
      title: 'Gradient Layer',
      explanation: 'Use of CAGradientLayer',
      viewController: GradientViewController.alloc().init()
    },
    {
      title: 'SpriteKit',
      explanation: 'Use of SpriteKit',
      viewController: SpritesViewController.alloc().init()
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
