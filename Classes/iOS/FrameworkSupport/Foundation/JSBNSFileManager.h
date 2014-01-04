#import <Foundation/NSObject.h>
#import <Foundation/NSEnumerator.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSPathUtilities.h>
#import <CoreFoundation/CFBase.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFileManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSFileManager *)defaultManager;

- (NSArray *)mountedVolumeURLsIncludingResourceValuesForKeys:(NSArray *)propertyKeys options:(NSVolumeEnumerationOptions)options;
- (NSArray *)contentsOfDirectoryAtURL:(NSURL *)url includingPropertiesForKeys:(NSArray *)keys options:(NSDirectoryEnumerationOptions)mask error:(NSError **)error;
- (NSArray *)URLsForDirectory:(NSSearchPathDirectory)directory inDomains:(NSSearchPathDomainMask)domainMask;
- (NSURL *)URLForDirectory:(NSSearchPathDirectory)directory inDomain:(NSSearchPathDomainMask)domain appropriateForURL:(NSURL *)url create:(BOOL)shouldCreate error:(NSError **)error;
- (BOOL)createDirectoryAtURL:(NSURL *)url withIntermediateDirectories:(BOOL)createIntermediates attributes:(NSDictionary *)attributes error:(NSError **)error;
- (BOOL)createSymbolicLinkAtURL:(NSURL *)url withDestinationURL:(NSURL *)destURL error:(NSError **)error;
- (void)setDelegate:(id)delegate;
- (id)delegate;
- (BOOL)setAttributes:(NSDictionary *)attributes ofItemAtPath:(NSString *)path error:(NSError **)error;
- (BOOL)createDirectoryAtPath:(NSString *)path withIntermediateDirectories:(BOOL)createIntermediates attributes:(NSDictionary *)attributes error:(NSError **)error;
- (NSArray *)contentsOfDirectoryAtPath:(NSString *)path error:(NSError **)error;
- (NSArray *)subpathsOfDirectoryAtPath:(NSString *)path error:(NSError **)error;
- (NSDictionary *)attributesOfItemAtPath:(NSString *)path error:(NSError **)error;
- (NSDictionary *)attributesOfFileSystemForPath:(NSString *)path error:(NSError **)error;
- (BOOL)createSymbolicLinkAtPath:(NSString *)path withDestinationPath:(NSString *)destPath error:(NSError **)error;
- (NSString *)destinationOfSymbolicLinkAtPath:(NSString *)path error:(NSError **)error;
- (BOOL)copyItemAtPath:(NSString *)srcPath toPath:(NSString *)dstPath error:(NSError **)error;
- (BOOL)moveItemAtPath:(NSString *)srcPath toPath:(NSString *)dstPath error:(NSError **)error;
- (BOOL)linkItemAtPath:(NSString *)srcPath toPath:(NSString *)dstPath error:(NSError **)error;
- (BOOL)removeItemAtPath:(NSString *)path error:(NSError **)error;
- (BOOL)copyItemAtURL:(NSURL *)srcURL toURL:(NSURL *)dstURL error:(NSError **)error;
- (BOOL)moveItemAtURL:(NSURL *)srcURL toURL:(NSURL *)dstURL error:(NSError **)error;
- (BOOL)linkItemAtURL:(NSURL *)srcURL toURL:(NSURL *)dstURL error:(NSError **)error;
- (BOOL)removeItemAtURL:(NSURL *)URL error:(NSError **)error;
- (BOOL)trashItemAtURL:(NSURL *)url resultingItemURL:(NSURL **)outResultingURL error:(NSError **)error;
- (NSDictionary *)fileAttributesAtPath:(NSString *)path traverseLink:(BOOL)yorn;
- (BOOL)changeFileAttributes:(NSDictionary *)attributes atPath:(NSString *)path;
- (NSArray *)directoryContentsAtPath:(NSString *)path;
- (NSDictionary *)fileSystemAttributesAtPath:(NSString *)path;
- (NSString *)pathContentOfSymbolicLinkAtPath:(NSString *)path;
- (BOOL)createSymbolicLinkAtPath:(NSString *)path pathContent:(NSString *)otherpath;
- (BOOL)createDirectoryAtPath:(NSString *)path attributes:(NSDictionary *)attributes;
- (NSString *)currentDirectoryPath;
- (BOOL)changeCurrentDirectoryPath:(NSString *)path;
- (BOOL)fileExistsAtPath:(NSString *)path;
- (BOOL)fileExistsAtPath:(NSString *)path isDirectory:(BOOL *)isDirectory;
- (BOOL)isReadableFileAtPath:(NSString *)path;
- (BOOL)isWritableFileAtPath:(NSString *)path;
- (BOOL)isExecutableFileAtPath:(NSString *)path;
- (BOOL)isDeletableFileAtPath:(NSString *)path;
- (BOOL)contentsEqualAtPath:(NSString *)path1 andPath:(NSString *)path2;
- (NSString *)displayNameAtPath:(NSString *)path;
- (NSArray *)componentsToDisplayForPath:(NSString *)path;
- (NSDirectoryEnumerator *)enumeratorAtPath:(NSString *)path;
- (NSDirectoryEnumerator *)enumeratorAtURL:(NSURL *)url includingPropertiesForKeys:(NSArray *)keys options:(NSDirectoryEnumerationOptions)mask errorHandler:(BOOL (^)(NSURL *url , NSError *error))handler;
- (NSArray *)subpathsAtPath:(NSString *)path;
- (NSData *)contentsAtPath:(NSString *)path;
- (BOOL)createFileAtPath:(NSString *)path contents:(NSData *)data attributes:(NSDictionary *)attr;
- (const char *)fileSystemRepresentationWithPath:(NSString *)path;
- (NSString *)stringWithFileSystemRepresentation:(const char *)str length:(NSUInteger)len;
- (BOOL)replaceItemAtURL:(NSURL *)originalItemURL withItemAtURL:(NSURL *)newItemURL backupItemName:(NSString *)backupItemName options:(NSFileManagerItemReplacementOptions)options resultingItemURL:(NSURL **)resultingURL error:(NSError **)error;
- (BOOL)setUbiquitous:(BOOL)flag itemAtURL:(NSURL *)url destinationURL:(NSURL *)destinationURL error:(NSError **)error;
- (BOOL)isUbiquitousItemAtURL:(NSURL *)url;
- (BOOL)startDownloadingUbiquitousItemAtURL:(NSURL *)url error:(NSError **)error;
- (BOOL)evictUbiquitousItemAtURL:(NSURL *)url error:(NSError **)error;
- (NSURL *)URLForUbiquityContainerIdentifier:(NSString *)containerIdentifier;
- (NSURL *)URLForPublishingUbiquitousItemAtURL:(NSURL *)url expirationDate:(NSDate **)outDate error:(NSError **)error;
- (id <NSObject , NSCopying , NSCoding>)ubiquityIdentityToken;
- (NSURL *)containerURLForSecurityApplicationGroupIdentifier:(NSString *)groupIdentifier;

#pragma clang diagnostic pop

@end
