//
//  JSContext+JavaScriptBridge.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <JavaScriptCore/JavaScriptCore.h>

@interface JSContext (JavaScriptBridge)

- (void)addScriptingSupport:(NSString *)framework;

@end
