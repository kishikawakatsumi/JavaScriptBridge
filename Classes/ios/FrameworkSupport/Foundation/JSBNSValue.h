#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSValue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSValue *)valueWithBytes:(const void *)value objCType:(const char *)type;
+ (NSValue *)value:(const void *)value withObjCType:(const char *)type;
+ (NSValue *)valueWithNonretainedObject:(id)anObject;
+ (NSValue *)valueWithPointer:(const void *)pointer;
+ (NSValue *)valueWithRange:(NSRange)range;

- (void)getValue:(void *)value;
- (const char *)objCType;
- (id)initWithBytes:(const void *)value objCType:(const char *)type;
- (id)nonretainedObjectValue;
- (void *)pointerValue;
- (BOOL)isEqualToValue:(NSValue *)value;
- (NSRange)rangeValue;

#pragma clang diagnostic pop

@end
