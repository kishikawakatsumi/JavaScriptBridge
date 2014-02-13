//
//  JSBScriptingSupport+Private.m
//  UICatalog
//
//  Created by kishikawa katsumi on 2014/02/14.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSBScriptingSupport+Private.h"

@implementation JSBScriptingSupport (Private)

+ (JSContext *)currentContext
{
    static JSContext *currentContext;
    JSContext *context = [JSContext currentContext];
    if (!context) {
        context = currentContext;
    } else {
        currentContext = context;
    }
    
    return context;
}

+ (void)setupSupportFunctionsToContext:(JSContext *)context
{
    static NSHashTable *initializedContext;
    if (!initializedContext) {
        context[@"__JSB_JSBScriptingSupport"] = self;
        [context evaluateScript:
         @"JSB = (function() {\n"
         @"  var namespace = {\n"
         @"    defineClass: function(declaration, instanceMembers, staticMembers) {\n"
         @"      return __JSB_JSBScriptingSupport.defineClass(declaration,"
         @"                                                   instanceMembers == null ? {} : instanceMembers,"
         @"                                                   staticMembers == null ? {} : staticMembers);\n"
         @"    },\n"
         @"    define: function(declaration, instanceMembers, staticMembers) {\n"
         @"      JSB.dump('`define` is deprecated, use `defineClass` instead.');\n"
         @"      return __JSB_JSBScriptingSupport.defineClass(declaration, instanceMembers, staticMembers);\n"
         @"    },\n"
         @"    require: function(name) {\n"
         @"      return __JSB_JSBScriptingSupport.require(name);\n"
         @"    },\n"
         @"    exports: {},\n"
         @"    selector: function(str) {\n"
         @"      return __JSB_JSBScriptingSupport.selectorFromString(str);\n"
         @"    },\n"
         @"    dispatch_async: function(queue, block) {\n"
         @"      return __JSB_JSBScriptingSupport.dispatch_async(queue, block);\n"
         @"    },\n"
         @"    dispatch_get_global_queue: function(priority, flags) {\n"
         @"      return __JSB_JSBScriptingSupport.dispatch_get_global_queue(priority, flags);\n"
         @"    },\n"
         @"    dispatch_get_main_queue: function() {\n"
         @"      return __JSB_JSBScriptingSupport.dispatch_get_main_queue();\n"
         @"    },\n"
         @"    log: function(format) {\n"
         @"      var args = [];\n"
         @"      for (var i = 1; i < arguments.length; i++) {\n"
         @"        args.push(arguments[i]);\n"
         @"      }\n"
         @"      return __JSB_JSBScriptingSupport.log(format, args);\n"
         @"    },\n"
         @"    dump: function(obj) {\n"
         @"      return __JSB_JSBScriptingSupport.dump(obj);\n"
         @"    }\n"
         @"  };\n"
         @"\n"
         @"  return namespace;\n"
         @"})();\n"
         ];
        
        [initializedContext addObject:context];
    }
}

@end
