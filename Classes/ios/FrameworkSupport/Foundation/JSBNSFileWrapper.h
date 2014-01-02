#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFileWrapper <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithURL:(NSURL *)url options:(NSFileWrapperReadingOptions)options error:(NSError **)outError;
- (id)initDirectoryWithFileWrappers:(NSDictionary *)childrenByPreferredName;
- (id)initRegularFileWithContents:(NSData *)contents;
- (id)initSymbolicLinkWithDestinationURL:(NSURL *)url;
- (id)initWithSerializedRepresentation:(NSData *)serializeRepresentation;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (void)setPreferredFilename:(NSString *)fileName;
- (NSString *)preferredFilename;
- (void)setFilename:(NSString *)fileName;
- (NSString *)filename;
- (void)setFileAttributes:(NSDictionary *)fileAttributes;
- (NSDictionary *)fileAttributes;
- (BOOL)matchesContentsOfURL:(NSURL *)url;
- (BOOL)readFromURL:(NSURL *)url options:(NSFileWrapperReadingOptions)options error:(NSError **)outError;
- (BOOL)writeToURL:(NSURL *)url options:(NSFileWrapperWritingOptions)options originalContentsURL:(NSURL *)originalContentsURL error:(NSError **)outError;
- (NSData *)serializedRepresentation;
- (NSString *)addFileWrapper:(NSFileWrapper *)child;
- (NSString *)addRegularFileWithContents:(NSData *)data preferredFilename:(NSString *)fileName;
- (void)removeFileWrapper:(NSFileWrapper *)child;
- (NSDictionary *)fileWrappers;
- (NSString *)keyForFileWrapper:(NSFileWrapper *)child;
- (NSData *)regularFileContents;
- (NSURL *)symbolicLinkDestinationURL;

#pragma clang diagnostic pop

@end
