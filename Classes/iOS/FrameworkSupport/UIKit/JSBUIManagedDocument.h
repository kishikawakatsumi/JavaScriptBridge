#import <UIKit/UIDocument.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIDocument;

@protocol JSBUIManagedDocument <JSExport, JSBUIDocument>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSString *modelConfiguration;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, copy) NSDictionary *persistentStoreOptions;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

+ (NSString *)persistentStoreName;

- (BOOL)configurePersistentStoreCoordinatorForURL:(NSURL *)storeURL ofType:(NSString *)fileType modelConfiguration:(NSString *)configuration storeOptions:(NSDictionary *)storeOptions error:(NSError **)error;
- (NSString *)persistentStoreTypeForFileType:(NSString *)fileType;
- (BOOL)readAdditionalContentFromURL:(NSURL *)absoluteURL error:(NSError **)error;
- (id)additionalContentForURL:(NSURL *)absoluteURL error:(NSError **)error;
- (BOOL)writeAdditionalContent:(id)content toURL:(NSURL *)absoluteURL originalContentsURL:(NSURL *)absoluteOriginalContentsURL error:(NSError **)error;

#pragma clang diagnostic pop

@end
