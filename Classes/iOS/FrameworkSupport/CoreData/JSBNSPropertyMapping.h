#import <Foundation/NSDictionary.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPropertyMapping <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSString *)name;
- (void)setName:(NSString *)name;
- (NSExpression *)valueExpression;
- (void)setValueExpression:(NSExpression *)expression;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)userInfo;

#pragma clang diagnostic pop

@end
