//
//  JSBAppDelegate.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/02.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSBAppDelegate.h"

@implementation JSBAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    return YES;
}

@end
