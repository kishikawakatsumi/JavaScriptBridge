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
- (id)posterImage;
- (void)setAssetsFilter:(ALAssetsFilter *)filter;
- (NSInteger)numberOfAssets;
JSExportAs(enumerateAssetsUsingBlock,
- (void)__enumerateAssetsUsingBlock:(JSValue *)enumerationBlock);
JSExportAs(enumerateAssetsWithOptionsUsingBlock,
- (void)__enumerateAssetsWithOptions:(NSEnumerationOptions)options
                          usingBlock:(JSValue *)enumerationBlock);

JSExportAs(enumerateAssetsAtIndexes,
- (void)__enumerateAssetsAtIndexes:(NSIndexSet *)indexSet
                           options:(NSEnumerationOptions)options
                        usingBlock:(JSValue *)enumerationBlock);
- (BOOL)addAsset:(ALAsset *)asset;

#pragma clang diagnostic pop

@end
