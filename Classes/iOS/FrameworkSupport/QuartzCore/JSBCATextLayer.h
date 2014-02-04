#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCATextLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) id string;
@property (copy) NSString *truncationMode;
@property CGFloat fontSize;
@property id foregroundColor;
@property (copy) NSString *alignmentMode;
@property id font;
@property (getter = isWrapped) BOOL wrapped;

#pragma clang diagnostic pop

@end
