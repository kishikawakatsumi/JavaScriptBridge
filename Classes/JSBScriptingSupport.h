//
//  JSVScriptingSupport.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSContext+JavaScriptBridge.h"

@import JavaScriptCore;

@protocol JSBScriptingSupport <JSExport>

@required
JSExportAs(defineClass,
+ (id)defineClass:(NSString *)declaration instanceMembers:(JSValue *)instanceMembers staticMembers:(JSValue *)staticMembers);

JSExportAs(require,
+ (id)require:(NSString *)name);

JSExportAs(dispatch_async,
+ (void)dispatch_async:(id)queue block:(JSValue *)block);

JSExportAs(dispatch_get_global_queue,
+ (id)dispatch_get_global_queue:(dispatch_queue_priority_t)priority flags:(unsigned long)flags);
+ (id)dispatch_get_main_queue;

@optional
JSExportAs(log,
+ (void)log:(NSString *)format arguments:(NSArray *)arguments);
JSExportAs(dump,
+ (void)dump:(id)object);

@end

@interface JSBScriptingSupport : NSObject <JSBScriptingSupport>

+ (JSContext *)globalContext;

@end
