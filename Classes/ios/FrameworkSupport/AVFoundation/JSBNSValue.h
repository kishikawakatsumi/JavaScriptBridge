#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSValue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSValue *)valueWithCMTime:(CMTime)time;
+ (NSValue *)valueWithCMTimeRange:(CMTimeRange)timeRange;
+ (NSValue *)valueWithCMTimeMapping:(CMTimeMapping)timeMapping;

- (CMTime)CMTimeValue;
- (CMTimeRange)CMTimeRangeValue;
- (CMTimeMapping)CMTimeMappingValue;

#pragma clang diagnostic pop

@end
