#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItem.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBMPMediaPickerController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL showsCloudItems;
@property (nonatomic, readonly) MPMediaType mediaTypes;
@property (nonatomic, weak) id delegate;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) BOOL allowsPickingMultipleItems;

- (instancetype)init;
- (instancetype)initWithMediaTypes:(MPMediaType)mediaTypes;

#pragma clang diagnostic pop

@end
