#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUILocalizedIndexedCollation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly) NSArray *sectionTitles;

+ (id)currentCollation;

- (NSInteger)sectionForSectionIndexTitleAtIndex:(NSInteger)indexTitleIndex;
- (NSInteger)sectionForObject:(id)object collationStringSelector:(SEL)selector;
- (NSArray *)sortedArrayFromArray:(NSArray *)array collationStringSelector:(SEL)selector;

#pragma clang diagnostic pop

@end
