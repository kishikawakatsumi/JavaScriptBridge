#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSCharacterSet.h>

@import Foundation;
@import QuickLook;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURL <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *percentEncodedFragment;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *query;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *path;
@property (copy) NSString *host;
@property (copy) NSString *password;
@property (copy) NSString *scheme;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSString *user;
@property (copy) NSString *fragment;
@property (copy) NSNumber *port;

+ (id)fileURLWithPath:(NSString *)path isDirectory:(BOOL)isDir;
+ (id)fileURLWithPath:(NSString *)path;
+ (id)fileURLWithFileSystemRepresentation:(const char *)path isDirectory:(BOOL)isDir relativeToURL:(NSURL *)baseURL;
+ (id)URLWithString:(NSString *)URLString;
+ (id)URLWithString:(NSString *)URLString relativeToURL:(NSURL *)baseURL;
+ (id)URLByResolvingBookmarkData:(NSData *)bookmarkData options:(NSURLBookmarkResolutionOptions)options relativeToURL:(NSURL *)relativeURL bookmarkDataIsStale:(BOOL *)isStale error:(NSError **)error;
+ (NSDictionary *)resourceValuesForKeys:(NSArray *)keys fromBookmarkData:(NSData *)bookmarkData;
+ (BOOL)writeBookmarkData:(NSData *)bookmarkData toURL:(NSURL *)bookmarkFileURL options:(NSURLBookmarkFileCreationOptions)options error:(NSError **)error;
+ (NSData *)bookmarkDataWithContentsOfURL:(NSURL *)bookmarkFileURL error:(NSError **)error;
+ (id)componentsWithURL:(NSURL *)url resolvingAgainstBaseURL:(BOOL)resolve;
+ (id)componentsWithString:(NSString *)URLString;
+ (id)URLUserAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLFragmentAllowedCharacterSet;
+ (NSURL *)fileURLWithPathComponents:(NSArray *)components;

- (id)initWithScheme:(NSString *)scheme host:(NSString *)host path:(NSString *)path;
- (id)initFileURLWithPath:(NSString *)path isDirectory:(BOOL)isDir;
- (id)initFileURLWithPath:(NSString *)path;
- (id)initFileURLWithFileSystemRepresentation:(const char *)path isDirectory:(BOOL)isDir relativeToURL:(NSURL *)baseURL;
- (id)initWithString:(NSString *)URLString;
- (id)initWithString:(NSString *)URLString relativeToURL:(NSURL *)baseURL;
- (NSString *)absoluteString;
- (NSString *)relativeString;
- (NSURL *)baseURL;
- (NSURL *)absoluteURL;
- (NSString *)scheme;
- (NSString *)resourceSpecifier;
- (NSString *)host;
- (NSNumber *)port;
- (NSString *)user;
- (NSString *)password;
- (NSString *)path;
- (NSString *)fragment;
- (NSString *)parameterString;
- (NSString *)query;
- (NSString *)relativePath;
- (BOOL)getFileSystemRepresentation:(char *)buffer maxLength:(NSUInteger)maxBufferLength;
- (const char *)fileSystemRepresentation;
- (BOOL)isFileURL;
- (NSURL *)standardizedURL;
- (BOOL)checkResourceIsReachableAndReturnError:(NSError **)error;
- (BOOL)isFileReferenceURL;
- (NSURL *)fileReferenceURL;
- (NSURL *)filePathURL;
- (BOOL)getResourceValue:(out id *)value forKey:(NSString *)key error:(out NSError **)error;
- (NSDictionary *)resourceValuesForKeys:(NSArray *)keys error:(NSError **)error;
- (BOOL)setResourceValue:(id)value forKey:(NSString *)key error:(NSError **)error;
- (BOOL)setResourceValues:(NSDictionary *)keyedValues error:(NSError **)error;
- (void)removeCachedResourceValueForKey:(NSString *)key;
- (void)removeAllCachedResourceValues;
- (void)setTemporaryResourceValue:(id)value forKey:(NSString *)key;
- (NSData *)bookmarkDataWithOptions:(NSURLBookmarkCreationOptions)options includingResourceValuesForKeys:(NSArray *)keys relativeToURL:(NSURL *)relativeURL error:(NSError **)error;
- (id)initByResolvingBookmarkData:(NSData *)bookmarkData options:(NSURLBookmarkResolutionOptions)options relativeToURL:(NSURL *)relativeURL bookmarkDataIsStale:(BOOL *)isStale error:(NSError **)error;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)init;
- (id)initWithURL:(NSURL *)url resolvingAgainstBaseURL:(BOOL)resolve;
- (NSURL *)URL;
- (NSURL *)URLRelativeToURL:(NSURL *)baseURL;
- (NSString *)stringByAddingPercentEncodingWithAllowedCharacters:(NSCharacterSet *)allowedCharacters;
- (NSString *)stringByRemovingPercentEncoding;
- (NSString *)stringByAddingPercentEscapesUsingEncoding:(NSStringEncoding)enc;
- (NSString *)stringByReplacingPercentEscapesUsingEncoding:(NSStringEncoding)enc;
- (NSArray *)pathComponents;
- (NSString *)lastPathComponent;
- (NSString *)pathExtension;
- (NSURL *)URLByAppendingPathComponent:(NSString *)pathComponent;
- (NSURL *)URLByAppendingPathComponent:(NSString *)pathComponent isDirectory:(BOOL)isDirectory;
- (NSURL *)URLByDeletingLastPathComponent;
- (NSURL *)URLByAppendingPathExtension:(NSString *)pathExtension;
- (NSURL *)URLByDeletingPathExtension;
- (NSURL *)URLByStandardizingPath;
- (NSURL *)URLByResolvingSymlinksInPath;

#pragma mark - QuickLook

@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;

#pragma clang diagnostic pop

@end
