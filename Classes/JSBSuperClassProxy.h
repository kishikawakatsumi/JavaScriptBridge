//
//  JSBSuperClassProxy.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JSBSuperClassProxy : NSProxy

@property (nonatomic, readonly) id target;

- (id)initWithTarget:(id)target;

@end
