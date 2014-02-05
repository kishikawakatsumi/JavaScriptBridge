#import <QuartzCore/CALayer.h>
#import <Foundation/NSObject.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCAAnimation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)animation;
+ (id)defaultValueForKey:(NSString *)key;

- (BOOL)shouldArchiveValueForKey:(NSString *)key;

#pragma clang diagnostic pop

@end
