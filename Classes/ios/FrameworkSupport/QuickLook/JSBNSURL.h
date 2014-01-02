#import <Foundation/Foundation.h>

@import QuickLook;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURL <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;

#pragma clang diagnostic pop

@end
