var MainViewController = JSB.require('mainViewController');

var window = UIWindow.alloc().initWithFrame(UIScreen.mainScreen().bounds);
window.backgroundColor = UIColor.whiteColor();

var navigationController = UINavigationController.new();

var mainViewController = MainViewController.new();
navigationController.viewControllers = [mainViewController];

window.rootViewController = navigationController;

window.makeKeyAndVisible();
