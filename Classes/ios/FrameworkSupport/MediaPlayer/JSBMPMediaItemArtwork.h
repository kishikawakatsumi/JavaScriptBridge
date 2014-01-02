#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaEntity.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMediaItemArtwork <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CGRect bounds;
@property (nonatomic, readonly) CGRect imageCropRect;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)imageWithSize:(CGSize)size;

#pragma clang diagnostic pop

@end
