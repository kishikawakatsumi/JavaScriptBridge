#import <Foundation/NSString.h>
#import <Foundation/NSDictionary.h>

@import Foundation;
@import UIKit;
@import JavaScriptCore;

@protocol JSBNSAttributedString;

@protocol JSBNSMutableAttributedString <JSExport, JSBNSAttributedString>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)replaceCharactersInRange:(NSRange)range withString:(NSString *)str;
- (void)setAttributes:(NSDictionary *)attrs range:(NSRange)range;
- (NSMutableString *)mutableString;
- (void)addAttribute:(NSString *)name value:(id)value range:(NSRange)range;
- (void)addAttributes:(NSDictionary *)attrs range:(NSRange)range;
- (void)removeAttribute:(NSString *)name range:(NSRange)range;
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(NSAttributedString *)attrString;
- (void)insertAttributedString:(NSAttributedString *)attrString atIndex:(NSUInteger)loc;
- (void)appendAttributedString:(NSAttributedString *)attrString;
- (void)deleteCharactersInRange:(NSRange)range;
- (void)setAttributedString:(NSAttributedString *)attrString;
- (void)beginEditing;
- (void)endEditing;

#pragma mark - UIKit

- (void)fixAttributesInRange:(NSRange)range;
- (id)initWithFileURL:(NSURL *)url options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (id)initWithData:(NSData *)data options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (NSData *)dataFromRange:(NSRange)range documentAttributes:(NSDictionary *)dict error:(NSError **)error;
- (NSFileWrapper *)fileWrapperFromRange:(NSRange)range documentAttributes:(NSDictionary *)dict error:(NSError **)error;
- (BOOL)readFromFileURL:(NSURL *)url options:(NSDictionary *)opts documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (BOOL)readFromData:(NSData *)data options:(NSDictionary *)opts documentAttributes:(NSDictionary **)dict error:(NSError **)error;

#pragma clang diagnostic pop

@end
