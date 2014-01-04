#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSValueTransformer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (void)setValueTransformer:(NSValueTransformer *)transformer forName:(NSString *)name;
+ (NSValueTransformer *)valueTransformerForName:(NSString *)name;
+ (NSArray *)valueTransformerNames;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)value;
- (id)reverseTransformedValue:(id)value;

#pragma clang diagnostic pop

@end
