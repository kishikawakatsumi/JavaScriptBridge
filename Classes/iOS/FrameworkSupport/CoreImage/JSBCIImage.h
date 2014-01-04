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

+ (CIImage *)imageWithCGImage:(CGImageRef)image;
+ (CIImage *)imageWithCGImage:(CGImageRef)image options:(NSDictionary *)d;
+ (CIImage *)imageWithCGLayer:(CGLayerRef)layer;
+ (CIImage *)imageWithCGLayer:(CGLayerRef)layer options:(NSDictionary *)d;
+ (CIImage *)imageWithBitmapData:(NSData *)d bytesPerRow:(size_t)bpr size:(CGSize)size format:(CIFormat)f colorSpace:(CGColorSpaceRef)cs;
+ (CIImage *)imageWithTexture:(unsigned int)name size:(CGSize)size flipped:(BOOL)flag colorSpace:(CGColorSpaceRef)cs;
+ (CIImage *)imageWithContentsOfURL:(NSURL *)url;
+ (CIImage *)imageWithContentsOfURL:(NSURL *)url options:(NSDictionary *)d;
+ (CIImage *)imageWithData:(NSData *)data;
+ (CIImage *)imageWithData:(NSData *)data options:(NSDictionary *)d;
+ (CIImage *)imageWithCVImageBuffer:(CVImageBufferRef)imageBuffer;
+ (CIImage *)imageWithCVImageBuffer:(CVImageBufferRef)imageBuffer options:(NSDictionary *)dict;
+ (CIImage *)imageWithCVPixelBuffer:(CVPixelBufferRef)buffer;
+ (CIImage *)imageWithCVPixelBuffer:(CVPixelBufferRef)buffer options:(NSDictionary *)dict;
+ (CIImage *)imageWithColor:(CIColor *)color;
+ (CIImage *)emptyImage;

- (id)initWithCGImage:(CGImageRef)image;
- (id)initWithCGImage:(CGImageRef)image options:(NSDictionary *)d;
- (id)initWithCGLayer:(CGLayerRef)layer;
- (id)initWithCGLayer:(CGLayerRef)layer options:(NSDictionary *)d;
- (id)initWithData:(NSData *)data;
- (id)initWithData:(NSData *)data options:(NSDictionary *)d;
- (id)initWithBitmapData:(NSData *)d bytesPerRow:(size_t)bpr size:(CGSize)size format:(CIFormat)f colorSpace:(CGColorSpaceRef)c;
- (id)initWithTexture:(unsigned int)name size:(CGSize)size flipped:(BOOL)flag colorSpace:(CGColorSpaceRef)cs;
- (id)initWithContentsOfURL:(NSURL *)url;
- (id)initWithContentsOfURL:(NSURL *)url options:(NSDictionary *)d;
- (id)initWithCVImageBuffer:(CVImageBufferRef)imageBuffer;
- (id)initWithCVImageBuffer:(CVImageBufferRef)imageBuffer options:(NSDictionary *)dict;
- (id)initWithCVPixelBuffer:(CVPixelBufferRef)buffer;
- (id)initWithCVPixelBuffer:(CVPixelBufferRef)buffer options:(NSDictionary *)dict;
- (id)initWithColor:(CIColor *)color;
- (CIImage *)imageByApplyingTransform:(CGAffineTransform)matrix;
- (CIImage *)imageByCroppingToRect:(CGRect)r;
- (CGRect)extent;
- (NSDictionary *)properties;
- (CIFilterShape *)definition;
- (NSURL *)url;
- (CGColorSpaceRef)colorSpace;
- (CGRect)regionOfInterestForImage:(CIImage *)im inRect:(CGRect)r;
- (NSArray *)autoAdjustmentFilters;
- (NSArray *)autoAdjustmentFiltersWithOptions:(NSDictionary *)dict;

#pragma mark - UIKit

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
