var MapViewController = JSB.defineClass('MapViewController : UIViewController <MKMapViewDelegate>', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Map';

    self.edgesForExtendedLayout = 0;

    var frame = self.view.frame;

    self.mapView = MKMapView.alloc().initWithFrame(frame);
    
    self.mapView.backgroundColor = UIColor.whiteColor();
    self.mapView.autoresizingMask = (1 << 1 | 1 << 4 | 1 << 5);
    self.mapView.showsUserLocation = true;
    self.mapView.delegate = self;
    self.view.addSubview(self.mapView);
  },
  viewWillAppear: function(animated) {
    self.mapView.delegate = self;
  },
  viewWillDisappear: function(animated) {
    self.mapView.delegate = null;
  }
});

JSB.exports = MapViewController;
