#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKTexture <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property SKTextureFilteringMode filteringMode;
@property BOOL usesMipmaps;

+ (SKTexture *)textureWithImageNamed:(NSString *)name;
+ (SKTexture *)textureWithRect:(CGRect)rect inTexture:(SKTexture *)texture;
+ (SKTexture *)textureWithCGImage:(id)image;
+ (SKTexture *)textureWithImage:(UIImage *)image;
+ (SKTexture *)textureWithData:(NSData *)pixelData size:(CGSize)size;
+ (SKTexture *)textureWithData:(NSData *)pixelData size:(CGSize)size rowLength:(unsigned int)rowLength alignment:(unsigned int)alignment;
+ (void)preloadTextures:(NSArray *)textures withCompletionHandler:(void (^)(void))completionHandler;

- (SKTexture *)textureByApplyingCIFilter:(CIFilter *)filter;
- (CGRect)textureRect;
- (CGSize)size;
- (void)preloadWithCompletionHandler:(void (^)(void))completionHandler;

#pragma clang diagnostic pop

@end
