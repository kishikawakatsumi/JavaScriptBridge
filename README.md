# JavaScriptBridge ![License MIT](https://go-shields.herokuapp.com/license-MIT-yellow.png) 

[![Version](https://cocoapod-badges.herokuapp.com/v/JavaScriptBridge/badge.png)](https://cocoapod-badges.herokuapp.com/v/JavaScriptBridge/badge.png)
[![Platform](https://cocoapod-badges.herokuapp.com/p/JavaScriptBridge/badge.png)](https://cocoapod-badges.herokuapp.com/p/JavaScriptBridge/badge.png)
[![Build Status](https://travis-ci.org/kishikawakatsumi/JavaScriptBridge.png?branch=master)](https://travis-ci.org/kishikawakatsumi/JavaScriptBridge)
[![Analytics](https://ga-beacon.appspot.com/UA-4291014-9/JavaScriptBridge/README.md)](https://github.com/igrigorik/ga-beacon)

Write iOS apps in Javascript! JavaScriptBridge provides the way to write iOS apps with JavaScript.
JavaScriptBridge bridges Cocoa touch to JavaScriptCore (JavaScriptCore.framework is introduced in iOS 7).


You get the power of dynamics of scripting language for your apps.

*It is still in development, obviously. You're welcomed to contribute if you find the project interesting!*

## Usage

```objc
#import <JavaScriptBridge/JavaScriptBridge.h>
...

// Retrieve the prepared context
JSContext *context = [JSBScriptingSupport globalContext];

// Add framework support if needed.
// ('Foundation', 'UIKit', 'QuartzCore' enabled by default.)
[context addScriptingSupport:@"MapKit"];
[context addScriptingSupport:@"MessageUI"];

// Evaluate script
[context evaluateScript:
 @"var window = UIWindow.new();"
 @"window.frame = UIScreen.mainScreen().bounds;"
 @"window.backgroundColor = UIColor.whiteColor();"
 @"window.makeKeyAndVisible();"
];
```

1. Retrieve the `JSContext` instance from `JSBScriptingSupport`.
  The context includes a lot of system classes that has been `JSExports` adopted.

  ```objc
JSContext *context = [JSBScriptingSupport globalContext];
```

2. Add `JSExports` adopted classes each framework if needed.
  By default, `Foundation`, `UIKit`, `QuartzCore` frameworks are included.

  ```objc
[context addScriptingSupport:@"MapKit"];
[context addScriptingSupport:@"MessageUI"];
```

3. It is ready to use, writing appliction code and evaluate in JavaScript.

  ```objc
[context evaluateScript:
 @"var window = UIWindow.new();"
 @"window.frame = UIScreen.mainScreen().bounds;"
 @"window.backgroundColor = UIColor.whiteColor();"
 @"window.makeKeyAndVisible();"
];
```

#### Manually setting up a new JSContext instance
1. Create new `JSContext` instance instead using `globalContext`.
  You can separate JavaScript environments to use multiple contexts.

  ```objc
JSContext *context = [[JSContext alloc] init];
```

2. Add `JSExports` adopted classes each framework if needed.
  `Foundation`, `UIKit` and `QuartzCore` frameworks **MUST** be added.

  ```objc
[context addScriptingSupport:@"Foundation"];
[context addScriptingSupport:@"UIKit"];
[context addScriptingSupport:@"QuartzCore"];
[context addScriptingSupport:@"Accounts"];
[context addScriptingSupport:@"Social"];
```


### Syntax / Naming conventions

**Class name**

Same as Objectige-C


**Variable declaration**

Get rid of `Type name` instead use `var`

```objc
UILabel *label;
```

```javascript
var label;
```


**Properties**

Use dot syntax

```objc
UISlider *slider = [[UISlider alloc] initWithFrame:frame];
slider.backgroundColor = [UIColor clearColor];
slider.minimumValue = 0.0;
slider.maximumValue = 100.0;
slider.continuous = YES;
slider.value = 50.0;
```

```javascript
var slider = UISlider.alloc().initWithFrame(frame);
slider.backgroundColor = UIColor.clearColor();
slider.minimumValue = 0.0;
slider.maximumValue = 100.0;
slider.continuous = true;
slider.value = 50.0;
```


**Invoking method**

Use dot syntax
All colons are removed from the selector
Any lowercase letter that had followed a colon will be capitalized

```objc
UIWindow *window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
```

```javascript
var window = UIWindow.alloc().initWithFrame(UIScreen.mainScreen().bounds);
```


**Struct (CGRect, NSRange, etc.)**

Use Hashes

```objc
UIView *view = [UIView new];
view.frame = CGRectMake(20, 80, 280, 80);

CGFloat x = view.frame.origin.x;
CGFloat width = view.frame.size.width;
```

```javascript
var view = UIView.new();
view.frame = {x: 20, y: 80, width: 280, height: 80};

var x = view.frame.x; // => 20
var width = view.frame.width; // => 280
```

## Examples
###Hello world on JavaScriptBridge

This is the most simplest way.

```objc
@implementation JSBAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    JSContext *context = [JSBScriptingSupport globalContext];
    
    [context evaluateScript:
     @"var window = UIWindow.new();"
     @"window.frame = UIScreen.mainScreen().bounds;"
     @"window.backgroundColor = UIColor.whiteColor();"
     @""
     @"var navigationController = UINavigationController.new();"
     @"var viewController = UIViewController.new();"
     @"viewController.navigationItem.title = 'Make UI with JavaScript';"
     @""
     @"var view = UIView.new();"
     @"view.backgroundColor = UIColor.redColor();"
     @"view.frame = {x: 20, y: 80, width: 280, height: 80};"
     @""
     @"var label = UILabel.new();"
     @"label.backgroundColor = UIColor.blueColor();"
     @"label.textColor = UIColor.whiteColor();"
     @"label.text = 'Hello World.';"
     @"label.font = UIFont.boldSystemFontOfSize(24);"
     @"label.sizeToFit();"
     @""
     @"var frame = label.frame;"
     @"frame.x = 10;"
     @"frame.y = 10;"
     @"label.frame = frame;"
     @""
     @"view.addSubview(label);"
     @"viewController.view.addSubview(view);"
     @""
     @"navigationController.viewControllers = [viewController];"
     @""
     @"window.rootViewController = navigationController;"
     @"window.makeKeyAndVisible();"
     ];
    
    return YES;
}

@end
```

Of course, the script is able to be loaded from external file.
```objc
@implementation JSBAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    NSBundle *mainBundle = [NSBundle mainBundle];
    NSString *path = [mainBundle pathForResource:@"main" ofType:@"js"];

    NSString *script = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];

    JSContext *context = [JSBScriptingSupport globalContext];
    [context evaluateScript:script];
    
    return YES;
}

@end
```

###Writing apps with only JavaScript

See the [UICatalog](https://github.com/kishikawakatsumi/JavaScriptBridge/tree/master/Examples/UICatalog/UICatalog) example.

## Enhancements
###Define custom classes

You can define custom class in JavaScript.
It is needs to interact system provided framework.

`JSB.defineClass(declaration, instanceMembers, staticMembers)` function defines Objective-C class in JavaScript.
Pass the class declaration string to first argument.

Second argument is instance method definitions as hash.
The hash object inclueds function object, each keys are to be used as method name.

**Example**

```javascript
var MainViewController = JSB.defineClass('MainViewController : UITableViewController', {
  // Instance Method Definitions
  viewDidLoad: function() {
    self.navigationItem.title = 'UICatalog';
  },
  viewWillAppear: function(animated) {
    self.tableView.reloadData();
  }
}, {
  // Class Method Definitions
  attemptRotationToDeviceOrientation: function() {
    ...
  }
});
```

**Example**

```javascript
var MainViewController = JSB.defineClass('MainViewController : UITableViewController <UITableviewDataSource, UITableviewDelegate>', // Declaration
// Instance Method Definitions
{
  viewDidLoad: function() {
    self.navigationItem.title = 'UICatalog';
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
},
{
// Class Method Definitions
  ...
});
```

###Modules

JavaScriptBridge provides simple module system `require/exports` funcitons, like Node.js.

`JSB.require(name)` function enables external module, `JSB.exports` publishes a module.

See [example](https://github.com/kishikawakatsumi/JavaScriptBridge/tree/master/Examples/UICatalog/UICatalog/js).

```javascript
var ButtonsViewController = JSB.require('buttonsViewController');
var ControlsViewController = JSB.require('controlsViewController');
var WebViewController = JSB.require('webViewController');
var MapViewController = JSB.require('mapViewController');

var MainViewController = JSB.defineClass('MainViewController : UITableViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'UICatalog';
    ...
    
});

JSB.exports = MainViewController;
```

###For Debug
`JSB.log` function is the same as `NSLog`.

```javascript
JSB.log('view: %@', self.view);
```

## Requirements
- **iOS 7 or later**
- JavaScriptCore.framework

## Installation

JavaScriptBridge is available through [CocoaPods](http://cocoapods.org), to install
it simply add the following line to your Podfile:

    pod "JavaScriptBridge"

## Author

kishikawa katsumi, kishikawakatsumi@mac.com

## License

[Apache]: http://www.apache.org/licenses/LICENSE-2.0
[MIT]: http://www.opensource.org/licenses/mit-license.php
[GPL]: http://www.gnu.org/licenses/gpl.html
[BSD]: http://opensource.org/licenses/bsd-license.php

JavaScriptBridge is available under the [MIT license][MIT]. See the LICENSE file for more info.


[![Bitdeli Badge](https://d2weczhvl823v0.cloudfront.net/kishikawakatsumi/javascriptbridge/trend.png)](https://bitdeli.com/free "Bitdeli Badge")

