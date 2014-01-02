#import <QuartzCore/CABase.h>
#import <Foundation/NSObject.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCAValueFunction <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *name;

+ (id)functionWithName:(NSString *)name;

#pragma clang diagnostic pop

@end
