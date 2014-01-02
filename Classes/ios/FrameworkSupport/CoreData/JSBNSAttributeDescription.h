#import <Foundation/NSArray.h>
#import <CoreData/NSPropertyDescription.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPropertyDescription;

@protocol JSBNSAttributeDescription <JSExport, JSBNSPropertyDescription>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSAttributeType)attributeType;
- (void)setAttributeType:(NSAttributeType)type;
- (NSString *)attributeValueClassName;
- (id)defaultValue;
- (void)setDefaultValue:(id)value;
- (void)setAttributeValueClassName:(NSString *)className;
- (NSData *)versionHash;
- (NSString *)valueTransformerName;
- (void)setValueTransformerName:(NSString *)string;
- (BOOL)allowsExternalBinaryDataStorage;
- (void)setAllowsExternalBinaryDataStorage:(BOOL)flag;

#pragma clang diagnostic pop

@end
