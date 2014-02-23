var GestureViewController = JSB.defineClass('GestureViewController : UIViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Gesture';
    self.view.backgroundColor = UIColor.whiteColor();

    var swipeView = UIView.alloc().initWithFrame({x: 10, y: 300, width: 300, height: 120});
    swipeView.backgroundColor = UIColor.greenColor();

    var swipeLabel = UILabel.alloc().initWithFrame(swipeView.bounds);
    swipeLabel.text = 'Swipe';
    swipeLabel.textAlignment = 1;
    swipeLabel.textColor = UIColor.whiteColor();
    swipeView.addSubview(swipeLabel);

    self.view.addSubview(swipeView);

    var swipeGestureRecognizer = UISwipeGestureRecognizer.alloc().initWithTargetAction(self, 'handleSwipe:');
    swipeGestureRecognizer.direction = 1 << 0 | 1 << 1;
    swipeView.addGestureRecognizer(swipeGestureRecognizer);

    var tapView = UIView.alloc().initWithFrame({x: 80, y: 100, width: 80, height: 80});
    tapView.backgroundColor = UIColor.redColor();

    var tapLabel = UILabel.alloc().initWithFrame(tapView.bounds);
    tapLabel.text = 'Tap';
    tapLabel.textAlignment = 1;
    tapLabel.textColor = UIColor.whiteColor();
    tapView.addSubview(tapLabel);

    self.view.addSubview(tapView);

    var tapGestureRecognizer = UITapGestureRecognizer.alloc().initWithTargetAction(self, 'handleTap:');
    tapView.addGestureRecognizer(tapGestureRecognizer);

    var panView = UIView.alloc().initWithFrame({x: 180, y: 200, width: 80, height: 80});
    panView.backgroundColor = UIColor.blueColor();

    var panLabel = UILabel.alloc().initWithFrame(panView.bounds);
    panLabel.text = 'Pan';
    panLabel.textAlignment = 1;
    panLabel.textColor = UIColor.whiteColor();
    panView.addSubview(panLabel);

    self.view.addSubview(panView);

    var panGestureRecognizer = UIPanGestureRecognizer.alloc().initWithTargetAction(self, 'handlePan:');
    panView.addGestureRecognizer(panGestureRecognizer);
  },
  handleTap: function(sender) {
    var alertView = UIAlertView.new();
    alertView.message = 'Tapped.';
    alertView.addButtonWithTitle('OK');
    alertView.show();
  },
  handlePan: function(sender) {
    var point = sender.translationInView(sender.view);
    var center = sender.view.center;
    sender.view.center = {x: center.x + point.x, y: center.y + point.y};
 
    sender.setTranslationInView({x: 0, y: 0}, sender.view);
  },
  handleSwipe: function(sender) {
    var label = UILabel.alloc().initWithFrame({x: 0, y: 0, width: 180, height: 60});
    label.backgroundColor = UIColor.colorWithWhiteAlpha(0.0, 0.5);
    label.center = self.view.center;
    label.alpha = 0.0;
    label.text = 'Swiped';
    label.textAlignment = 1;
    label.textColor = UIColor.whiteColor();
    self.view.addSubview(label);

    UIView.animateWithDurationDelayOptionsAnimationsCompletion(0.3, 0.0, 0 << 16, function() {
      label.alpha = 1.0;
    }, function(finished) {
      UIView.animateWithDurationDelayOptionsAnimationsCompletion(0.3, 0.5, 0 << 16, function() {
        label.alpha = 0.0;
      }, function(finished) {
        label.removeFromSuperview();
      });
    });
  }
});

JSB.exports = GestureViewController;
