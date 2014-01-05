//
//  SLRequest+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "SLRequest+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation SLRequest (JavaScriptBridge)

- (void)__performRequestWithHandler:(JSValue *)handlerFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    SLRequestHandler handler = NULL;
    if (!handlerFunction.isUndefined) {
        handler = ^(NSData *responseData, NSHTTPURLResponse *urlResponse, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (responseData) {
                [parameters addObject:responseData];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (urlResponse) {
                [parameters addObject:urlResponse];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, handlerFunction, parameters);
        };
    }
    
    [self performRequestWithHandler:handler];
}

@end
