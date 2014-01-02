//
//  JSContext+Helper.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import <JavaScriptCore/JavaScriptCore.h>

@interface JSContext (Helper)

- (void)addScriptingSupport:(NSString *)framework;

@end
