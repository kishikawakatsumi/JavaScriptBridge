# JavaScriptBridge

[![Version](http://cocoapod-badges.herokuapp.com/v/JavaScriptBridge/badge.png)](http://cocoadocs.org/docsets/JavaScriptBridge)
[![Platform](http://cocoapod-badges.herokuapp.com/p/JavaScriptBridge/badge.png)](http://cocoadocs.org/docsets/JavaScriptBridge)
[![Build Status](https://travis-ci.org/kishikawakatsumi/JavaScriptBridge.png?branch=master)](https://travis-ci.org/kishikawakatsumi/JavaScriptBridge)

JavaScriptBridge provides the way to write iOS apps with JavaScript.

## Usage

###Hello world on JavaScriptBridge

This is the most simple way.

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

## Requirements
**iOS 7 or later**

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
