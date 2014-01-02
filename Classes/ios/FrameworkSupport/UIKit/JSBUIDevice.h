#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIDevice <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, readonly) UIDeviceOrientation orientation;
@property (nonatomic, readonly) UIDeviceBatteryState batteryState;
@property (nonatomic, readonly) BOOL proximityState;
@property (nonatomic, readonly) BOOL enableInputClicksWhenVisible;
@property (nonatomic, readonly, retain) NSString *localizedModel;
@property (nonatomic, readonly, getter = isMultitaskingSupported) BOOL multitaskingSupported;
@property (nonatomic, readonly, retain) NSString *systemName;
@property (nonatomic, readonly, retain) NSString *systemVersion;
@property (nonatomic, getter = isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property (nonatomic, readonly, retain) NSUUID *identifierForVendor;
@property (nonatomic, getter = isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property (nonatomic, readonly, getter = isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;
@property (nonatomic, readonly, retain) NSString *model;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) UIUserInterfaceIdiom userInterfaceIdiom;

+ (UIDevice *)currentDevice;

- (void)beginGeneratingDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)playInputClick;

#pragma clang diagnostic pop

@end
