#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSCharacterSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFileSecurity <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *percentEncodedFragment;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *query;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *path;
@property (copy) NSString *host;
@property (copy) NSString *password;
@property (copy) NSString *scheme;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSString *user;
@property (copy) NSString *fragment;
@property (copy) NSNumber *port;

#pragma clang diagnostic pop

@end
