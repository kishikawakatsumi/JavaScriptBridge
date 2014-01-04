#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMediaQuerySection <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, assign, readonly) NSRange range;

#pragma clang diagnostic pop

@end
