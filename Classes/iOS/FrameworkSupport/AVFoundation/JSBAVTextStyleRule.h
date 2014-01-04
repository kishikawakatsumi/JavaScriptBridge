#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVTextStyleRule <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *textSelector;
@property (nonatomic, readonly) NSDictionary *textMarkupAttributes;

+ (id)propertyListForTextStyleRules:(NSArray *)textStyleRules;
+ (NSArray *)textStyleRulesFromPropertyList:(id)plist;
+ (AVTextStyleRule *)textStyleRuleWithTextMarkupAttributes:(NSDictionary *)textMarkupAttributes;
+ (AVTextStyleRule *)textStyleRuleWithTextMarkupAttributes:(NSDictionary *)textMarkupAttributes textSelector:(NSString *)textSelector;

- (id)initWithTextMarkupAttributes:(NSDictionary *)textMarkupAttributes;
- (id)initWithTextMarkupAttributes:(NSDictionary *)textMarkupAttributes textSelector:(NSString *)textSelector;

#pragma clang diagnostic pop

@end
