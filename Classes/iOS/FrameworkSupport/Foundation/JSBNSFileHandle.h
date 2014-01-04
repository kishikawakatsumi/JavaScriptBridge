#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFileHandle <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) void (^readabilityHandler)(NSFileHandle *);
@property (copy) void (^writeabilityHandler)(NSFileHandle *);

+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleForReadingAtPath:(NSString *)path;
+ (id)fileHandleForWritingAtPath:(NSString *)path;
+ (id)fileHandleForUpdatingAtPath:(NSString *)path;
+ (id)fileHandleForReadingFromURL:(NSURL *)url error:(NSError **)error;
+ (id)fileHandleForWritingToURL:(NSURL *)url error:(NSError **)error;
+ (id)fileHandleForUpdatingURL:(NSURL *)url error:(NSError **)error;

- (NSData *)availableData;
- (NSData *)readDataToEndOfFile;
- (NSData *)readDataOfLength:(NSUInteger)length;
- (void)writeData:(NSData *)data;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)offset;
- (void)truncateFileAtOffset:(unsigned long long)offset;
- (void)synchronizeFile;
- (void)closeFile;
- (void)readInBackgroundAndNotifyForModes:(NSArray *)modes;
- (void)readInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(NSArray *)modes;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(NSArray *)modes;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(NSArray *)modes;
- (void)waitForDataInBackgroundAndNotify;
- (id)initWithFileDescriptor:(int)fd closeOnDealloc:(BOOL)closeopt;
- (id)initWithFileDescriptor:(int)fd;
- (int)fileDescriptor;

#pragma clang diagnostic pop

@end
