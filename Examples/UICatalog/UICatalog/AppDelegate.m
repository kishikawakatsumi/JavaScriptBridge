//
//  AppDelegate.m
//  UICatalog
//
//  Created by kishikawa katsumi on 2014/01/03.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "AppDelegate.h"
#import "JavaScriptBridge.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    NSBundle *mainBundle = [NSBundle mainBundle];
    NSString *path = [mainBundle pathForResource:@"main" ofType:@"js"];
    
    NSString *script = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    
    JSContext *context = [JSBScriptingSupport globalContext];
    [context addScriptingSupport:@"AssetsLibrary"];
    [context addScriptingSupport:@"Accounts"];
    [context addScriptingSupport:@"Social"];
    [context addScriptingSupport:@"MapKit"];
    [context evaluateScript:script];
    
    return YES;
}

@end
