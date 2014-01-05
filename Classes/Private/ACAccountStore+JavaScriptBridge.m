//
//  ACAccountStore+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "ACAccountStore+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation ACAccountStore (JavaScriptBridge)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)__saveAccount:(ACAccount *)account withCompletionHandler:(JSValue *)handlerFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ACAccountStoreSaveCompletionHandler completionHandler = NULL;
    if (!handlerFunction.isUndefined) {
        completionHandler = ^(BOOL success, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            [parameters addObject:@(success)];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, handlerFunction, parameters);
        };
    }
    
    [self saveAccount:account withCompletionHandler:completionHandler];
}

- (void)__requestAccessToAccountsWithType:(ACAccountType *)accountType
                    withCompletionHandler:(JSValue *)handlerFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ACAccountStoreRequestAccessCompletionHandler handler = NULL;
    if (!handlerFunction.isUndefined) {
        handler = ^(BOOL granted, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            [parameters addObject:@(granted)];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, handlerFunction, parameters);
        };
    }
    
    [self requestAccessToAccountsWithType:accountType withCompletionHandler:handler];
}

- (void)__requestAccessToAccountsWithType:(ACAccountType *)accountType
                                  options:(NSDictionary *)options
                               completion:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ACAccountStoreRequestAccessCompletionHandler completion = NULL;
    if (!completionFunction.isUndefined) {
        completion = ^(BOOL granted, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            [parameters addObject:@(granted)];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, completionFunction, parameters);
        };
    }
    
    [self requestAccessToAccountsWithType:accountType options:options completion:completion];
}

- (void)__renewCredentialsForAccount:(ACAccount *)account completion:(JSValue *)handlerFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ACAccountStoreCredentialRenewalHandler completionHandler = NULL;
    if (!handlerFunction.isUndefined) {
        completionHandler = ^(ACAccountCredentialRenewResult renewResult, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            [parameters addObject:@(renewResult)];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, handlerFunction, parameters);
        };
    }
    
    [self renewCredentialsForAccount:account completion:completionHandler];
}

- (void)__removeAccount:(ACAccount *)account withCompletionHandler:(JSValue *)handlerFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ACAccountStoreRemoveCompletionHandler completionHandler = NULL;
    if (!handlerFunction.isUndefined) {
        completionHandler = ^(BOOL success, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            [parameters addObject:@(success)];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, handlerFunction, parameters);
        };
    }
    
    [self removeAccount:account withCompletionHandler:completionHandler];
}

#pragma clang diagnostic pop

@end
