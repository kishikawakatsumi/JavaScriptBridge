#import <AVFoundation/AVBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <CoreMedia/CMSync.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVPlayer;

@protocol JSBAVQueuePlayer <JSExport, JSBAVPlayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)queuePlayerWithItems:(NSArray *)items;

- (id)initWithItems:(NSArray *)items;
- (NSArray *)items;
- (void)advanceToNextItem;
- (BOOL)canInsertItem:(AVPlayerItem *)item afterItem:(AVPlayerItem *)afterItem;
- (void)insertItem:(AVPlayerItem *)item afterItem:(AVPlayerItem *)afterItem;
- (void)removeItem:(AVPlayerItem *)item;
- (void)removeAllItems;

#pragma clang diagnostic pop

@end
