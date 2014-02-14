#import <Foundation/Foundation.h>
#import <SpriteKit/SKTexture.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKTextureAtlas <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSArray *textureNames;

+ (SKTextureAtlas *)atlasNamed:(NSString *)name;
+ (void)preloadTextureAtlases:(NSArray *)textureAtlases withCompletionHandler:(void (^)(void))completionHandler;

- (SKTexture *)textureNamed:(NSString *)name;
- (void)preloadWithCompletionHandler:(void (^)(void))completionHandler;

#pragma clang diagnostic pop

@end
