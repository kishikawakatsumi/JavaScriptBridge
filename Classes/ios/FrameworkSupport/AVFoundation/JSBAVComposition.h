#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVAsset.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAsset;

@protocol JSBAVComposition <JSExport, JSBAVAsset>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, readonly) NSArray *tracks;
@property (nonatomic, readonly) CGSize naturalSize;

#pragma clang diagnostic pop

@end
