var GradientView = JSB.defineClass('GradientView : UIView', {
  initWithFrame: function(frame) {
    var layer = self.layer;
    layer.startPoint = {x: 0.0, y: 0.5};
    layer.endPoint = {x: 1.0, y: 0.5};

    var colors = [];
    for (var deg = 0; deg <= 360; deg += 5) {
      var color = UIColor.colorWithHueSaturationBrightnessAlpha(1.0 * deg / 360.0, 1.0, 1.0, 1.0);
      colors.push(color.CGColor());
    }
    layer.colors = colors;

    return self;
  }
}, {
  layerClass: function() {
    return CAGradientLayer;
  }
});

var GradientViewController = JSB.defineClass('GradientViewController : UIViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Gradient Layer';

    var gradientView = GradientView.alloc().initWithFrame(self.view.bounds);
    self.view.addSubview(gradientView);
  }
});

JSB.exports = GradientViewController;
