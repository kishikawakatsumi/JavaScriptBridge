#import <Foundation/Foundation.h>
#import <CoreImage/CoreImageDefines.h>

@import CoreImage;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIFilter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CIImage *outputImage;

+ (CIFilter *)filterWithName:(NSString *)name;
+ (CIFilter *)filterWithName:(NSString *)name keysAndValues:key0 , ...;
+ (NSArray *)filterNamesInCategory:(NSString *)category;
+ (NSArray *)filterNamesInCategories:(NSArray *)categories;
+ (void)registerFilterName:(NSString *)name constructor:(id <CIFilterConstructor>)anObject classAttributes:(NSDictionary *)attributes;
+ (NSString *)localizedNameForFilterName:(NSString *)filterName;
+ (NSString *)localizedNameForCategory:(NSString *)category;
+ (NSString *)localizedDescriptionForFilterName:(NSString *)filterName;
+ (NSURL *)localizedReferenceDocumentationForFilterName:(NSString *)filterName;
+ (NSData *)serializedXMPFromFilters:(NSArray *)filters inputImageExtent:(CGRect)extent;
+ (NSArray *)filterArrayFromSerializedXMP:(NSData *)xmpData inputImageExtent:(CGRect)extent error:(NSError **)outError;

- (NSString *)name;
- (NSArray *)inputKeys;
- (NSArray *)outputKeys;
- (void)setDefaults;
- (NSDictionary *)attributes;
- (CIImage *)apply:(CIKernel *)k arguments:(NSArray *)args options:(NSDictionary *)dict;
- (CIImage *)apply:(CIKernel *)k , ...;

#pragma clang diagnostic pop

@end
