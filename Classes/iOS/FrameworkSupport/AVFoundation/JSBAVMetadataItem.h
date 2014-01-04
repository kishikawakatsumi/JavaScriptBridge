#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <AVFoundation/AVMetadataFormat.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <CoreGraphics/CoreGraphics.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVMetadataItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, copy) NSString *commonKey;
@property (readwrite) CMTime time;
@property (readwrite, copy) NSLocale *locale;
@property (readwrite, copy) id key;
@property (readwrite, copy) id value;
@property (readwrite, copy) NSString *keySpace;
@property (readonly) NSString *stringValue;
@property (readonly) NSData *dataValue;
@property (readwrite) CMTime duration;
@property (readwrite, copy) NSDictionary *extraAttributes;
@property (readonly) NSDate *dateValue;
@property (readonly) NSNumber *numberValue;

+ (NSArray *)metadataItemsFromArray:(NSArray *)metadataItems filteredAndSortedAccordingToPreferredLanguages:(NSArray *)preferredLanguages;
+ (NSArray *)metadataItemsFromArray:(NSArray *)metadataItems withLocale:(NSLocale *)locale;
+ (NSArray *)metadataItemsFromArray:(NSArray *)metadataItems withKey:(id)key keySpace:(NSString *)keySpace;
+ (NSArray *)metadataItemsFromArray:(NSArray *)metadataItems filteredByMetadataItemFilter:(AVMetadataItemFilter *)metadataItemFilter;

- (AVKeyValueStatus)statusOfValueForKey:(NSString *)key error:(NSError **)outError;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)keys completionHandler:(void (^)(void))handler;

#pragma clang diagnostic pop

@end
