#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMFormatDescription.h>
#import <CoreMedia/CMSync.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVCaptureInput <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) AVCaptureInput *input;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly) NSArray *ports;
@property (nonatomic, readonly) id formatDescription;
@property (nonatomic, readonly) id clock;

#pragma clang diagnostic pop

@end
