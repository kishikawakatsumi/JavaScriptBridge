#import <CoreImage/CoreImageDefines.h>
#import <Foundation/Foundation.h>

@import CoreImage;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIFeature <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, assign) BOOL hasLeftEyePosition;
@property (readonly, assign) BOOL hasTrackingFrameCount;
@property (readonly, assign) float faceAngle;
@property (readonly, assign) int trackingID;
@property (readonly, assign) BOOL hasSmile;
@property (readonly, assign) BOOL leftEyeClosed;
@property (readonly, assign) BOOL rightEyeClosed;
@property (readonly, assign) BOOL hasMouthPosition;
@property (readonly, assign) CGPoint mouthPosition;
@property (readonly, assign) BOOL hasFaceAngle;
@property (readonly, retain) NSString *type;
@property (readonly, assign) BOOL hasRightEyePosition;
@property (readonly, assign) CGPoint rightEyePosition;
@property (readonly, assign) BOOL hasTrackingID;
@property (readonly, assign) CGPoint leftEyePosition;
@property (readonly, assign, readonly) CGRect bounds;
@property (readonly, assign) int trackingFrameCount;

#pragma clang diagnostic pop

@end
