#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreImage/CoreImage.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIImage <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, readonly) UIEdgeInsets capInsets;
@property (nonatomic, readonly) CGFloat scale;
@property (nonatomic, readonly) UIImageRenderingMode renderingMode;
@property (nonatomic, readonly) NSInteger leftCapWidth;
@property (nonatomic, readonly) CGImageRef CGImage;
@property (nonatomic, readonly) CGSize size;
@property (nonatomic, readonly) NSInteger topCapHeight;
@property (nonatomic, readonly) UIEdgeInsets alignmentRectInsets;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) UIImageOrientation imageOrientation;
@property (nonatomic, readonly) UIImageResizingMode resizingMode;

- (id)initWithImage:(UIImage *)image;
- (id)initWithImage:(UIImage *)image options:(NSDictionary *)options;

#pragma clang diagnostic pop

@end
