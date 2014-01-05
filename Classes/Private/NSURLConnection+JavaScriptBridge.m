//
//  NSURLConnection+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/06.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "NSURLConnection+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation NSURLConnection (JavaScriptBridge)

+ (void)__sendAsynchronousRequest:(NSURLRequest *)request
                            queue:(NSOperationQueue *)queue
                completionHandler:(JSValue *)handlerFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^completionHandler)(NSURLResponse *response , NSData *data , NSError *connectionError) = NULL;
    if (!handlerFunction.isUndefined) {
        completionHandler = ^(NSURLResponse *response , NSData *data , NSError *connectionError) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (response) {
                [parameters addObject:response];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (data) {
                [parameters addObject:data];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (connectionError) {
                [parameters addObject:connectionError];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, handlerFunction, parameters);
        };
    }
    
    [self sendAsynchronousRequest:request queue:queue completionHandler:completionHandler];
}

@end
