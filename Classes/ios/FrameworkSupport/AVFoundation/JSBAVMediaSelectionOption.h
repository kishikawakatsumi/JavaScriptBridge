#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVMediaSelectionOption <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *mediaSubTypes;
@property (nonatomic, readonly, getter = isPlayable) BOOL playable;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) BOOL allowsEmptySelection;

- (BOOL)hasMediaCharacteristic:(NSString *)mediaCharacteristic;
- (NSArray *)metadataForFormat:(NSString *)format;
- (AVMediaSelectionOption *)associatedMediaSelectionOptionInMediaSelectionGroup:(AVMediaSelectionGroup *)mediaSelectionGroup;
- (id)propertyList;
- (NSString *)displayNameWithLocale:(NSLocale *)locale;

#pragma clang diagnostic pop

@end
