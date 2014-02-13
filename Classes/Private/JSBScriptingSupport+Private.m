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
        initializedContext = [NSHashTable hashTableWithOptions:NSPointerFunctionsWeakMemory];
    }
    if (![initializedContext containsObject:context]) {
        NSString *UUID = [[[NSUUID UUID] UUIDString] stringByReplacingOccurrencesOfString:@"-" withString:@""];
        NSString *className = [NSString stringWithFormat:@"__JSB_%@$%@", NSStringFromClass(self), UUID];
        
        context[className] = self;
        
        NSString *placeholder = @"${CLASS_NAME}";
        NSString *template =
        @"var namespace = {\n"
        @"  defineClass: function(declaration, instanceMembers, staticMembers) {\n"
        @"    return ${CLASS_NAME}.defineClass(declaration,"
        @"                                     instanceMembers == null ? {} : instanceMembers,"
        @"                                     staticMembers == null ? {} : staticMembers);\n"
        @"  },\n"
        @"  define: function(declaration, instanceMembers, staticMembers) {\n"
        @"    JSB.dump('`define` is deprecated, use `defineClass` instead.');\n"
        @"    return ${CLASS_NAME}.defineClass(declaration, instanceMembers, staticMembers);\n"
        @"  },\n"
        @"  require: function(name) {\n"
        @"    return ${CLASS_NAME}.require(name);\n"
        @"  },\n"
        @"  exports: {},\n"
        @"  selector: function(str) {\n"
        @"    return ${CLASS_NAME}.selectorFromString(str);\n"
        @"  },\n"
        @"  dispatch_async: function(queue, block) {\n"
        @"    return ${CLASS_NAME}.dispatch_async(queue, block);\n"
        @"  },\n"
        @"  dispatch_get_global_queue: function(priority, flags) {\n"
        @"    return ${CLASS_NAME}.dispatch_get_global_queue(priority, flags);\n"
        @"  },\n"
        @"  dispatch_get_main_queue: function() {\n"
        @"    return ${CLASS_NAME}.dispatch_get_main_queue();\n"
        @"  },\n"
        @"  log: function(format) {\n"
        @"    var args = [];\n"
        @"    for (var i = 1; i < arguments.length; i++) {\n"
        @"      args.push(arguments[i]);\n"
        @"    }\n"
        @"    return ${CLASS_NAME}.log(format, args);\n"
        @"  },\n"
        @"  dump: function(obj) {\n"
        @"    return ${CLASS_NAME}.dump(obj);\n"
        @"  }\n"
        @"};\n"
        @"\n"
        @"return namespace;";
        
        NSString *script = [template stringByReplacingOccurrencesOfString:placeholder withString:className];
        
        JSValue *function = context[@"Function"];
        JSValue *value = [function constructWithArguments:@[script]];
        context[@"JSB"] = [value callWithArguments:nil];
        
        [initializedContext addObject:context];
    }
}

@end
