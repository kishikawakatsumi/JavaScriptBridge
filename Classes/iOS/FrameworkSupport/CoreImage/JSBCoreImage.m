#import "JSBCoreImage.h"
#import "JSBCIColor.h"
#import "JSBCIContext.h"
#import "JSBCIDetector.h"
#import "JSBCIFeature.h"
#import "JSBCIFilter.h"
#import "JSBCIImage.h"
#import "JSBCIVector.h"
#import "JSBCIFaceFeature.h"

@import ObjectiveC;

@implementation JSBCoreImage

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([CIColor class], @protocol(JSBCIColor));
    context[@"CIColor"] = [CIColor class];

    class_addProtocol([CIContext class], @protocol(JSBCIContext));
    context[@"CIContext"] = [CIContext class];

    class_addProtocol([CIDetector class], @protocol(JSBCIDetector));
    context[@"CIDetector"] = [CIDetector class];

    class_addProtocol([CIFeature class], @protocol(JSBCIFeature));
    context[@"CIFeature"] = [CIFeature class];

    class_addProtocol([CIFilter class], @protocol(JSBCIFilter));
    context[@"CIFilter"] = [CIFilter class];

    class_addProtocol([CIImage class], @protocol(JSBCIImage));
    context[@"CIImage"] = [CIImage class];

    class_addProtocol([CIVector class], @protocol(JSBCIVector));
    context[@"CIVector"] = [CIVector class];

    class_addProtocol([CIFaceFeature class], @protocol(JSBCIFaceFeature));
    context[@"CIFaceFeature"] = [CIFaceFeature class];

#pragma clang diagnostic pop
}

@end
