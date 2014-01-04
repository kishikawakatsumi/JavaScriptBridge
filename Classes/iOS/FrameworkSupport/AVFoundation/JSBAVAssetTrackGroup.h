#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetTrackGroup <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *trackIDs;

#pragma clang diagnostic pop

@end
