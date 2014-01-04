#import "JSBAssetsLibrary.h"
#import "JSBALAsset.h"
#import "JSBALAssetRepresentation.h"
#import "JSBALAssetsFilter.h"
#import "JSBALAssetsGroup.h"
#import "JSBALAssetsLibrary.h"

@import ObjectiveC;

@implementation JSBAssetsLibrary

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([ALAsset class], @protocol(JSBALAsset));
    context[@"ALAsset"] = [ALAsset class];

    class_addProtocol([ALAssetRepresentation class], @protocol(JSBALAssetRepresentation));
    context[@"ALAssetRepresentation"] = [ALAssetRepresentation class];

    class_addProtocol([ALAssetsFilter class], @protocol(JSBALAssetsFilter));
    context[@"ALAssetsFilter"] = [ALAssetsFilter class];

    class_addProtocol([ALAssetsGroup class], @protocol(JSBALAssetsGroup));
    context[@"ALAssetsGroup"] = [ALAssetsGroup class];

    class_addProtocol([ALAssetsLibrary class], @protocol(JSBALAssetsLibrary));
    context[@"ALAssetsLibrary"] = [ALAssetsLibrary class];

#pragma clang diagnostic pop
}

@end
