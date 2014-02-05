//
//  JSBMessageForwarding.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const JSBInstanceMembersKey;
extern NSString * const JSBStaticMembersKey;

@import JavaScriptCore;

NSString *mangledNameFromClass(Class cls);
NSString *propertyNameFromSelector(SEL selector);

void invokeSuper(NSInvocation *inv);

void dispatchFunction(id self, JSValue *function, NSArray *parameters);

NSArray *extractArguments(NSInvocation *invocation);
void setReturnValue(JSValue *value, NSInvocation *invocation);

CGFloat tableViewHeightForRowAtIndexPath(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath);
CGFloat tableViewHeightForHeaderInSection(id self, SEL _cmd, UITableView *tableView, NSInteger section);
CGFloat tableViewHeightForFooterInSection(id self, SEL _cmd, UITableView *tableView, NSInteger section);

void setupForwardingImplementations(Class targetClass, Class cls, JSValue *instanceFunctions, JSValue *staticFunctions);

void forwardInvocation(id self, SEL _cmd, NSInvocation *invocation);
NSMethodSignature *methodSignatureForSelector(id self, SEL _cmd, SEL selector);
BOOL respondsToSelector(id self, SEL _cmd, SEL selector);

__unsafe_unretained id *createVariableArgumentListsFromArray(NSArray *arguments);
