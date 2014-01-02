#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIFontDescriptor <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIFontDescriptorSymbolicTraits symbolicTraits;
@property (nonatomic, readonly) CGAffineTransform matrix;
@property (nonatomic, readonly) NSString *postscriptName;
@property (nonatomic, readonly) CGFloat pointSize;

+ (UIFontDescriptor *)fontDescriptorWithFontAttributes:(NSDictionary *)attributes;
+ (UIFontDescriptor *)fontDescriptorWithName:(NSString *)fontName size:(CGFloat)size;
+ (UIFontDescriptor *)fontDescriptorWithName:(NSString *)fontName matrix:(CGAffineTransform)matrix;
+ (UIFontDescriptor *)preferredFontDescriptorWithTextStyle:(NSString *)style;

- (id)objectForKey:(NSString *)anAttribute;
- (NSDictionary *)fontAttributes;
- (NSArray *)matchingFontDescriptorsWithMandatoryKeys:(NSSet *)mandatoryKeys;
- (instancetype)initWithFontAttributes:(NSDictionary *)attributes;
- (UIFontDescriptor *)fontDescriptorByAddingAttributes:(NSDictionary *)attributes;
- (UIFontDescriptor *)fontDescriptorWithSymbolicTraits:(UIFontDescriptorSymbolicTraits)symbolicTraits;
- (UIFontDescriptor *)fontDescriptorWithSize:(CGFloat)newPointSize;
- (UIFontDescriptor *)fontDescriptorWithMatrix:(CGAffineTransform)matrix;
- (UIFontDescriptor *)fontDescriptorWithFace:(NSString *)newFace;
- (UIFontDescriptor *)fontDescriptorWithFamily:(NSString *)newFamily;

#pragma clang diagnostic pop

@end
