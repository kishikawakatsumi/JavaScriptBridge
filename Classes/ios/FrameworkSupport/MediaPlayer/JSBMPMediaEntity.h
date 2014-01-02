#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMediaEntity <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)canFilterByProperty:(NSString *)property;

- (id)valueForProperty:(NSString *)property;
- (void)enumerateValuesForProperties:(NSSet *)properties usingBlock:(void (^)(NSString *property , id value , BOOL *stop))block;

#pragma clang diagnostic pop

@end
