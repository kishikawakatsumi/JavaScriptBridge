#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <AVFoundation/AVMetadataFormat.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <CoreGraphics/CoreGraphics.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVMetadataItem;

@protocol JSBAVMutableMetadataItem <JSExport, JSBAVMetadataItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVMutableMetadataItem *)metadataItem;

#pragma clang diagnostic pop

@end
