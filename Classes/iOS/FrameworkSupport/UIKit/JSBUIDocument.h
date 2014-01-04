#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIDocument <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSURL *fileURL;
@property (readonly, copy) NSString *fileType;
@property (copy) NSDate *fileModificationDate;
@property (readonly) UIDocumentState documentState;
@property (retain) NSUndoManager *undoManager;
@property (readonly, copy) NSString *localizedName;

- (id)initWithFileURL:(NSURL *)url;
- (void)openWithCompletionHandler:(void (^)(BOOL success))completionHandler;
- (void)closeWithCompletionHandler:(void (^)(BOOL success))completionHandler;
- (BOOL)loadFromContents:(id)contents ofType:(NSString *)typeName error:(NSError **)outError;
- (id)contentsForType:(NSString *)typeName error:(NSError **)outError;
- (void)disableEditing;
- (void)enableEditing;
- (BOOL)hasUnsavedChanges;
- (void)updateChangeCount:(UIDocumentChangeKind)change;
- (id)changeCountTokenForSaveOperation:(UIDocumentSaveOperation)saveOperation;
- (void)updateChangeCountWithToken:(id)changeCountToken forSaveOperation:(UIDocumentSaveOperation)saveOperation;
- (void)saveToURL:(NSURL *)url forSaveOperation:(UIDocumentSaveOperation)saveOperation completionHandler:(void (^)(BOOL success))completionHandler;
- (void)autosaveWithCompletionHandler:(void (^)(BOOL success))completionHandler;
- (NSString *)savingFileType;
- (NSString *)fileNameExtensionForType:(NSString *)typeName saveOperation:(UIDocumentSaveOperation)saveOperation;
- (BOOL)writeContents:(id)contents andAttributes:(NSDictionary *)additionalFileAttributes safelyToURL:(NSURL *)url forSaveOperation:(UIDocumentSaveOperation)saveOperation error:(NSError **)outError;
- (BOOL)writeContents:(id)contents toURL:(NSURL *)url forSaveOperation:(UIDocumentSaveOperation)saveOperation originalContentsURL:(NSURL *)originalContentsURL error:(NSError **)outError;
- (NSDictionary *)fileAttributesToWriteToURL:(NSURL *)url forSaveOperation:(UIDocumentSaveOperation)saveOperation error:(NSError **)outError;
- (BOOL)readFromURL:(NSURL *)url error:(NSError **)outError;
- (void)performAsynchronousFileAccessUsingBlock:(void (^)(void))block;
- (void)handleError:(NSError *)error userInteractionPermitted:(BOOL)userInteractionPermitted;
- (void)finishedHandlingError:(NSError *)error recovered:(BOOL)recovered;
- (void)userInteractionNoLongerPermittedForError:(NSError *)error;
- (void)revertToContentsOfURL:(NSURL *)url completionHandler:(void (^)(BOOL success))completionHandler;

#pragma clang diagnostic pop

@end
