#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@import AssetsLibrary;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBALAssetsGroup <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isEditable) BOOL editable;

- (id)valueForProperty:(NSString *)property;
- (CGImageRef)posterImage;
- (void)setAssetsFilter:(ALAssetsFilter *)filter;
- (NSInteger)numberOfAssets;
- (void)enumerateAssetsUsingBlock:(ALAssetsGroupEnumerationResultsBlock)enumerationBlock;
- (void)enumerateAssetsWithOptions:(NSEnumerationOptions)options usingBlock:(ALAssetsGroupEnumerationResultsBlock)enumerationBlock;
- (void)enumerateAssetsAtIndexes:(NSIndexSet *)indexSet options:(NSEnumerationOptions)options usingBlock:(ALAssetsGroupEnumerationResultsBlock)enumerationBlock;
- (BOOL)addAsset:(ALAsset *)asset;

#pragma clang diagnostic pop

@end
