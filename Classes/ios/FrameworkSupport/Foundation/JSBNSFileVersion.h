#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFileVersion <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *localizedName;
@property (readonly, getter = isConflict) BOOL conflict;
@property (readonly) NSDate *modificationDate;
@property (readonly) NSString *localizedNameOfSavingComputer;
@property (getter = isDiscardable) BOOL discardable;
@property (getter = isResolved) BOOL resolved;
@property (readonly) id persistentIdentifier;
@property (readonly) NSURL *URL;

+ (NSFileVersion *)currentVersionOfItemAtURL:(NSURL *)url;
+ (NSArray *)otherVersionsOfItemAtURL:(NSURL *)url;
+ (NSArray *)unresolvedConflictVersionsOfItemAtURL:(NSURL *)url;
+ (NSFileVersion *)versionOfItemAtURL:(NSURL *)url forPersistentIdentifier:(id)persistentIdentifier;
+ (NSFileVersion *)addVersionOfItemAtURL:(NSURL *)url withContentsOfURL:(NSURL *)contentsURL options:(NSFileVersionAddingOptions)options error:(NSError **)outError;
+ (NSURL *)temporaryDirectoryURLForNewVersionOfItemAtURL:(NSURL *)url;
+ (BOOL)removeOtherVersionsOfItemAtURL:(NSURL *)url error:(NSError **)outError;

- (NSURL *)replaceItemAtURL:(NSURL *)url options:(NSFileVersionReplacingOptions)options error:(NSError **)error;
- (BOOL)removeAndReturnError:(NSError **)outError;

#pragma clang diagnostic pop

@end
