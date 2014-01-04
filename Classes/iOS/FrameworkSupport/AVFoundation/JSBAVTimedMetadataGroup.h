#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVTimedMetadataGroup <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readwrite, copy) NSArray *items;
@property (readwrite) CMTimeRange timeRange;

- (id)initWithItems:(NSArray *)items timeRange:(CMTimeRange)timeRange;

#pragma clang diagnostic pop

@end
