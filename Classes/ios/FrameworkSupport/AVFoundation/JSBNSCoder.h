#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCoder <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)encodeCMTime:(CMTime)time forKey:(NSString *)key;
- (CMTime)decodeCMTimeForKey:(NSString *)key;
- (void)encodeCMTimeRange:(CMTimeRange)timeRange forKey:(NSString *)key;
- (CMTimeRange)decodeCMTimeRangeForKey:(NSString *)key;
- (void)encodeCMTimeMapping:(CMTimeMapping)timeMapping forKey:(NSString *)key;
- (CMTimeMapping)decodeCMTimeMappingForKey:(NSString *)key;

#pragma clang diagnostic pop

@end
