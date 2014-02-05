#import <Foundation/Foundation.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBUIImagePickerController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSTimeInterval videoMaximumDuration;
@property (nonatomic, copy) NSArray *mediaTypes;
@property (nonatomic) UIImagePickerControllerCameraFlashMode cameraFlashMode;
@property (nonatomic) UIImagePickerControllerSourceType sourceType;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, retain) UIView *cameraOverlayView;
@property (nonatomic) BOOL allowsImageEditing;
@property (nonatomic) CGAffineTransform cameraViewTransform;
@property (nonatomic) UIImagePickerControllerCameraCaptureMode cameraCaptureMode;
@property (nonatomic) UIImagePickerControllerCameraDevice cameraDevice;
@property (nonatomic) BOOL showsCameraControls;
@property (nonatomic) UIImagePickerControllerQualityType videoQuality;

+ (BOOL)isSourceTypeAvailable:(UIImagePickerControllerSourceType)sourceType;
+ (NSArray *)availableMediaTypesForSourceType:(UIImagePickerControllerSourceType)sourceType;
+ (BOOL)isCameraDeviceAvailable:(UIImagePickerControllerCameraDevice)cameraDevice;
+ (BOOL)isFlashAvailableForCameraDevice:(UIImagePickerControllerCameraDevice)cameraDevice;
+ (NSArray *)availableCaptureModesForCameraDevice:(UIImagePickerControllerCameraDevice)cameraDevice;

- (void)takePicture;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;

#pragma clang diagnostic pop

@end
