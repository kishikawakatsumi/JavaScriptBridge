#import <SpriteKit/SKSpriteNode.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKNode;

@protocol JSBSKVideoNode <JSExport, JSBSKNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGSize size;
@property CGPoint anchorPoint;

+ (SKVideoNode *)videoNodeWithAVPlayer:(AVPlayer *)player;
+ (SKVideoNode *)videoNodeWithVideoFileNamed:(NSString *)videoFile;
+ (SKVideoNode *)videoNodeWithVideoURL:(NSURL *)videoURL;

- (instancetype)initWithAVPlayer:(AVPlayer *)player;
- (instancetype)initWithVideoFileNamed:(NSString *)videoFile;
- (instancetype)initWithVideoURL:(NSURL *)url;
- (void)play;
- (void)pause;

#pragma clang diagnostic pop

@end
