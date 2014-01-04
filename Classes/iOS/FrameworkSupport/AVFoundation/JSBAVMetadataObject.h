#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreGraphics/CGGeometry.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVMetadataObject <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSInteger faceID;
@property (readonly) CGRect bounds;
@property (readonly) CMTime time;
@property (readonly) NSString *stringValue;
@property (readonly) BOOL hasYawAngle;
@property (readonly) CMTime duration;
@property (readonly) BOOL hasRollAngle;
@property (readonly) CGFloat rollAngle;
@property (readonly) NSString *type;
@property (readonly) NSArray *corners;
@property (readonly) CGFloat yawAngle;

#pragma clang diagnostic pop

@end
