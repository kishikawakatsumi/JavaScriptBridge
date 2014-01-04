#import <Foundation/Foundation.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCMAttitude <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) CMQuaternion quaternion;
@property (readonly, nonatomic) CMRotationMatrix rotationMatrix;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double roll;

- (void)multiplyByInverseOfAttitude:(CMAttitude *)attitude;

#pragma clang diagnostic pop

@end
