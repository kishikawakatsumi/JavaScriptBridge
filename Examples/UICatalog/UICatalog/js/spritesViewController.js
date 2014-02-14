var MyScene = JSB.defineClass('MyScene : SKScene', {
  initWithSize: function(size) {
    self.backgroundColor = SKColor.colorWithRedGreenBlueAlpha(0.15, 0.15, 0.3, 1.0);
    var myLabel = SKLabelNode.labelNodeWithFontNamed('Chalkduster');
    myLabel.text = 'Hello, World!';
    myLabel.fontSize = 30;
    myLabel.position = {x: self.frame.x + self.frame.width / 2, y: self.frame.y + self.frame.height / 2};
    self.addChild(myLabel);

    return self;
  },
  touchesBeganWithEvent: function(touches, event) {
    touches = touches.allObjects();
    for (var i = 0; i < touches.length; i++) {
      var touch = touches[i];
      var location = touch.locationInNode(self);

      var sprite = SKSpriteNode.spriteNodeWithImageNamed('Spaceship');
      sprite.position = location;

      var action = SKAction.rotateByAngleDuration(Math.PI, 1);
      sprite.runAction(SKAction.repeatActionForever(action));
      self.addChild(sprite);
    }
  },
  update: function(currentTime) {
    /* Called before each frame is rendered */
  }
});

var SpritesViewController = JSB.defineClass('SpritesViewController : UIViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Sprite Kit';

    var skView = SKView.alloc().initWithFrame(self.view.bounds);
    skView.showsFPS = true;
    skView.showsNodeCount = true;

    self.view.addSubview(skView);
    
    var scene = MyScene.alloc().initWithSize({width: skView.bounds.width, height: skView.bounds.height});
    scene.scaleMode = 1;
    
    skView.presentScene(scene);
  }
});

JSB.exports = SpritesViewController;
