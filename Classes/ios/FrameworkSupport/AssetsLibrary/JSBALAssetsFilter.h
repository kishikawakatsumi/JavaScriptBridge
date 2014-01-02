#import <Foundation/Foundation.h>

@import AssetsLibrary;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBALAssetsFilter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (ALAssetsFilter *)allPhotos;
+ (ALAssetsFilter *)allVideos;
+ (ALAssetsFilter *)allAssets;

#pragma clang diagnostic pop

@end
