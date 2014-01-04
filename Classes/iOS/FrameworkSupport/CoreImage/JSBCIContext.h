#import <CoreImage/CIImage.h>
#import <CoreImage/CoreImageDefines.h>
#import <CoreVideo/CoreVideo.h>
#import <OpenGLES/EAGL.h>

@import CoreImage;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIContext <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CIContext *)contextWithCGContext:(CGContextRef)ctx options:(NSDictionary *)dict;
+ (CIContext *)contextWithOptions:(NSDictionary *)dict;
+ (CIContext *)contextWithEAGLContext:(EAGLContext *)eaglContext;
+ (CIContext *)contextWithEAGLContext:(EAGLContext *)eaglContext options:(NSDictionary *)dict;

- (void)drawImage:(CIImage *)im atPoint:(CGPoint)p fromRect:(CGRect)src;
- (void)drawImage:(CIImage *)im inRect:(CGRect)dest fromRect:(CGRect)src;
- (CGImageRef)createCGImage:(CIImage *)im fromRect:(CGRect)r;
- (CGImageRef)createCGImage:(CIImage *)im fromRect:(CGRect)r format:(CIFormat)f colorSpace:(CGColorSpaceRef)cs;
- (CGLayerRef)createCGLayerWithSize:(CGSize)size info:(CFDictionaryRef)d;
- (void)render:(CIImage *)im toBitmap:(void *)data rowBytes:(ptrdiff_t)rb bounds:(CGRect)r format:(CIFormat)f colorSpace:(CGColorSpaceRef)cs;
- (void)render:(CIImage *)image toCVPixelBuffer:(CVPixelBufferRef)buffer;
- (void)render:(CIImage *)image toCVPixelBuffer:(CVPixelBufferRef)buffer bounds:(CGRect)r colorSpace:(CGColorSpaceRef)cs;
- (void)reclaimResources;
- (void)clearCaches;
- (CGSize)inputImageMaximumSize;
- (CGSize)outputImageMaximumSize;

#pragma clang diagnostic pop

@end
