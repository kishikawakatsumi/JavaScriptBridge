#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItem.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBMPMediaEntity;

@protocol JSBMPMediaItemCollection <JSExport, JSBMPMediaEntity>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MPMediaItem *representativeItem;
@property (nonatomic, readonly) MPMediaType mediaTypes;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSUInteger count;

+ (MPMediaItemCollection *)collectionWithItems:(NSArray *)items;

- (id)initWithItems:(NSArray *)items;

#pragma clang diagnostic pop

@end
