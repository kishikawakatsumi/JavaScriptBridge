#import <Foundation/Foundation.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIMotionEffect <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain, nonatomic) id minimumRelativeValue;
@property (copy, nonatomic) NSArray *motionEffects;
@property (retain, nonatomic) id maximumRelativeValue;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) UIInterpolatingMotionEffectType type;

- (NSDictionary *)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)viewerOffset;

#pragma clang diagnostic pop

@end
