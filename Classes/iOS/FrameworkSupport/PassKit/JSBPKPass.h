#import <Foundation/Foundation.h>

@import PassKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBPKPass <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy, readonly) NSString *serialNumber;
@property (nonatomic, copy, readonly) NSString *localizedName;
@property (nonatomic, copy, readonly) NSString *localizedDescription;
@property (nonatomic, copy, readonly) NSString *passTypeIdentifier;
@property (nonatomic, copy, readonly) NSDictionary *userInfo;
@property (nonatomic, copy, readonly) NSDate *relevantDate;
@property (nonatomic, copy, readonly) NSString *organizationName;
@property (nonatomic, copy, readonly) NSURL *passURL;
@property (nonatomic, copy, readonly) NSString *authenticationToken;
@property (nonatomic, copy, readonly) UIImage *icon;
@property (nonatomic, copy, readonly) NSURL *webServiceURL;

- (id)initWithData:(NSData *)data error:(NSError **)error;
- (id)localizedValueForFieldKey:(NSString *)key;

#pragma clang diagnostic pop

@end
