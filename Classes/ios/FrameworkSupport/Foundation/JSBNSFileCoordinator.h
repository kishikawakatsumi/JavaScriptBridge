#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFileCoordinator <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (void)addFilePresenter:(id <NSFilePresenter>)filePresenter;
+ (void)removeFilePresenter:(id <NSFilePresenter>)filePresenter;
+ (NSArray *)filePresenters;

- (id)initWithFilePresenter:(id <NSFilePresenter>)filePresenterOrNil;
- (void)coordinateReadingItemAtURL:(NSURL *)url options:(NSFileCoordinatorReadingOptions)options error:(NSError **)outError byAccessor:(void (^)(NSURL *newURL))reader;
- (void)coordinateWritingItemAtURL:(NSURL *)url options:(NSFileCoordinatorWritingOptions)options error:(NSError **)outError byAccessor:(void (^)(NSURL *newURL))writer;
- (void)coordinateReadingItemAtURL:(NSURL *)readingURL options:(NSFileCoordinatorReadingOptions)readingOptions writingItemAtURL:(NSURL *)writingURL options:(NSFileCoordinatorWritingOptions)writingOptions error:(NSError **)outError byAccessor:(void (^)(NSURL *newReadingURL , NSURL *newWritingURL))readerWriter;
- (void)coordinateWritingItemAtURL:(NSURL *)url1 options:(NSFileCoordinatorWritingOptions)options1 writingItemAtURL:(NSURL *)url2 options:(NSFileCoordinatorWritingOptions)options2 error:(NSError **)outError byAccessor:(void (^)(NSURL *newURL1 , NSURL *newURL2))writer;
- (void)prepareForReadingItemsAtURLs:(NSArray *)readingURLs options:(NSFileCoordinatorReadingOptions)readingOptions writingItemsAtURLs:(NSArray *)writingURLs options:(NSFileCoordinatorWritingOptions)writingOptions error:(NSError **)outError byAccessor:(void (^)(void (^completionHandler)(void)))batchAccessor;
- (void)itemAtURL:(NSURL *)oldURL willMoveToURL:(NSURL *)newURL;
- (void)itemAtURL:(NSURL *)oldURL didMoveToURL:(NSURL *)newURL;
- (void)cancel;

#pragma clang diagnostic pop

@end
