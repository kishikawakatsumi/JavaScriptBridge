#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSLinguisticTagger <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSArray *)availableTagSchemesForLanguage:(NSString *)language;

- (id)initWithTagSchemes:(NSArray *)tagSchemes options:(NSUInteger)opts;
- (NSArray *)tagSchemes;
- (void)setString:(NSString *)string;
- (NSString *)string;
- (void)setOrthography:(NSOrthography *)orthography range:(NSRange)range;
- (NSOrthography *)orthographyAtIndex:(NSUInteger)charIndex effectiveRange:(NSRangePointer)effectiveRange;
- (void)stringEditedInRange:(NSRange)newRange changeInLength:(NSInteger)delta;
- (void)enumerateTagsInRange:(NSRange)range scheme:(NSString *)tagScheme options:(NSLinguisticTaggerOptions)opts usingBlock:(void (^)(NSString *tag , NSRange tokenRange , NSRange sentenceRange , BOOL *stop))block;
- (NSRange)sentenceRangeForRange:(NSRange)range;
- (NSString *)tagAtIndex:(NSUInteger)charIndex scheme:(NSString *)tagScheme tokenRange:(NSRangePointer)tokenRange sentenceRange:(NSRangePointer)sentenceRange;
- (NSArray *)tagsInRange:(NSRange)range scheme:(NSString *)tagScheme options:(NSLinguisticTaggerOptions)opts tokenRanges:(NSArray **)tokenRanges;
- (NSArray *)possibleTagsAtIndex:(NSUInteger)charIndex scheme:(NSString *)tagScheme tokenRange:(NSRangePointer)tokenRange sentenceRange:(NSRangePointer)sentenceRange scores:(NSArray **)scores;

#pragma clang diagnostic pop

@end
