#import <JavaScriptCore/JSBase.h>

@import JavaScriptCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBJSManagedValue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (JSManagedValue *)managedValueWithValue:(JSValue *)value;

- (id)initWithValue:(JSValue *)value;
- (JSValue *)value;

#pragma clang diagnostic pop

@end
