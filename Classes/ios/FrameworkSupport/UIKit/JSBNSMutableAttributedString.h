#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMutableAttributedString <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)fixAttributesInRange:(NSRange)range;
- (id)initWithFileURL:(NSURL *)url options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (id)initWithData:(NSData *)data options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (NSData *)dataFromRange:(NSRange)range documentAttributes:(NSDictionary *)dict error:(NSError **)error;
- (NSFileWrapper *)fileWrapperFromRange:(NSRange)range documentAttributes:(NSDictionary *)dict error:(NSError **)error;
- (BOOL)readFromFileURL:(NSURL *)url options:(NSDictionary *)opts documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (BOOL)readFromData:(NSData *)data options:(NSDictionary *)opts documentAttributes:(NSDictionary **)dict error:(NSError **)error;

#pragma clang diagnostic pop

@end
