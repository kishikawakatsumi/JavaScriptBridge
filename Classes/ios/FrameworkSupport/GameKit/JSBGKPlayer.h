#import <Foundation/Foundation.h>
#import <GameKit/GKDefines.h>
#import <GameKit/GKError.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKPlayer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) BOOL isFriend;
@property (readonly, retain) NSString *playerID;
@property (readonly) NSString *displayName;
@property (readonly, copy) NSString *alias;

+ (void)loadPlayersForIdentifiers:(NSArray *)identifiers withCompletionHandler:(void (^)(NSArray *players , NSError *error))completionHandler;

- (void)loadPhotoForSize:(GKPhotoSize)size withCompletionHandler:(void (^)(UIImage *photo , NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
