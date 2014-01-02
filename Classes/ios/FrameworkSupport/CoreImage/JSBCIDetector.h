#import <CoreImage/CoreImageDefines.h>
#import <Foundation/Foundation.h>

@import CoreImage;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIDetector <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CIDetector *)detectorOfType:(NSString *)type context:(CIContext *)context options:(NSDictionary *)options;

- (NSArray *)featuresInImage:(CIImage *)image;
- (NSArray *)featuresInImage:(CIImage *)image options:(NSDictionary *)options;

#pragma clang diagnostic pop

@end
