#import <Foundation/Foundation.h>
#import <CoreImage/CoreImageDefines.h>
#import <CoreVideo/CoreVideo.h>

@import CoreImage;
@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIImage <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CIImage *)imageWithCGImage:(id)image;
+ (CIImage *)imageWithCGImage:(id)image options:(NSDictionary *)d;
+ (CIImage *)imageWithCGLayer:(id)layer;
+ (CIImage *)imageWithCGLayer:(id)layer options:(NSDictionary *)d;
+ (CIImage *)imageWithBitmapData:(NSData *)d bytesPerRow:(size_t)bpr size:(CGSize)size format:(CIFormat)f colorSpace:(id)cs;
+ (CIImage *)imageWithTexture:(unsigned int)name size:(CGSize)size flipped:(BOOL)flag colorSpace:(id)cs;
+ (CIImage *)imageWithContentsOfURL:(NSURL *)url;
+ (CIImage *)imageWithContentsOfURL:(NSURL *)url options:(NSDictionary *)d;
+ (CIImage *)imageWithData:(NSData *)data;
+ (CIImage *)imageWithData:(NSData *)data options:(NSDictionary *)d;
+ (CIImage *)imageWithCVImageBuffer:(id)imageBuffer;
+ (CIImage *)imageWithCVImageBuffer:(id)imageBuffer options:(NSDictionary *)dict;
+ (CIImage *)imageWithCVPixelBuffer:(id)buffer;
+ (CIImage *)imageWithCVPixelBuffer:(id)buffer options:(NSDictionary *)dict;
+ (CIImage *)imageWithColor:(CIColor *)color;
+ (CIImage *)emptyImage;

- (id)initWithCGImage:(id)image;
- (id)initWithCGImage:(id)image options:(NSDictionary *)d;
- (id)initWithCGLayer:(id)layer;
- (id)initWithCGLayer:(id)layer options:(NSDictionary *)d;
- (id)initWithData:(NSData *)data;
- (id)initWithData:(NSData *)data options:(NSDictionary *)d;
- (id)initWithBitmapData:(NSData *)d bytesPerRow:(size_t)bpr size:(CGSize)size format:(CIFormat)f colorSpace:(id)c;
- (id)initWithTexture:(unsigned int)name size:(CGSize)size flipped:(BOOL)flag colorSpace:(id)cs;
- (id)initWithContentsOfURL:(NSURL *)url;
- (id)initWithContentsOfURL:(NSURL *)url options:(NSDictionary *)d;
- (id)initWithCVImageBuffer:(id)imageBuffer;
- (id)initWithCVImageBuffer:(id)imageBuffer options:(NSDictionary *)dict;
- (id)initWithCVPixelBuffer:(id)buffer;
- (id)initWithCVPixelBuffer:(id)buffer options:(NSDictionary *)dict;
- (id)initWithColor:(CIColor *)color;
- (CIImage *)imageByApplyingTransform:(CGAffineTransform)matrix;
- (CIImage *)imageByCroppingToRect:(CGRect)r;
- (CGRect)extent;
- (NSDictionary *)properties;
- (CIFilterShape *)definition;
- (NSURL *)url;
- (id)colorSpace;
- (CGRect)regionOfInterestForImage:(CIImage *)im inRect:(CGRect)r;
- (NSArray *)autoAdjustmentFilters;
- (NSArray *)autoAdjustmentFiltersWithOptions:(NSDictionary *)dict;

#pragma mark - UIKit

@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, readonly) UIEdgeInsets capInsets;
@property (nonatomic, readonly) CGFloat scale;
@property (nonatomic, readonly) UIImageRenderingMode renderingMode;
@property (nonatomic, readonly) NSInteger leftCapWidth;
@property (nonatomic, readonly) id CGImage;
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
