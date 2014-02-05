#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVVideoCompositing.h>
#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVVideoCompositionInstruction;

@protocol JSBAVMutableVideoCompositionInstruction <JSExport, JSBAVVideoCompositionInstruction>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVMutableVideoCompositionInstruction *)videoCompositionInstruction;

#pragma clang diagnostic pop

@end
