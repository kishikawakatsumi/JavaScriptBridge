#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMediaLibrary <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSDate *lastModifiedDate;

+ (MPMediaLibrary *)defaultMediaLibrary;

- (void)beginGeneratingLibraryChangeNotifications;
- (void)endGeneratingLibraryChangeNotifications;

#pragma clang diagnostic pop

@end
