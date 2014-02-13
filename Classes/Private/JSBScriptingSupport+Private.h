//
//  JSBScriptingSupport+Private.h
//  UICatalog
//
//  Created by kishikawa katsumi on 2014/02/14.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSBScriptingSupport.h"

@interface JSBScriptingSupport (Private)

+ (JSContext *)currentContext;

+ (void)setupSupportFunctionsToContext:(JSContext *)context;

@end
