#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVMediaSelectionGroup <JSExport, JSBNSObject>

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

+ (NSArray *)playableMediaSelectionOptionsFromArray:(NSArray *)mediaSelectionOptions;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)mediaSelectionOptions filteredAndSortedAccordingToPreferredLanguages:(NSArray *)preferredLanguages;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)mediaSelectionOptions withLocale:(NSLocale *)locale;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)mediaSelectionOptions withMediaCharacteristics:(NSArray *)mediaCharacteristics;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)mediaSelectionOptions withoutMediaCharacteristics:(NSArray *)mediaCharacteristics;

- (AVMediaSelectionOption *)mediaSelectionOptionWithPropertyList:(id)plist;

#pragma clang diagnostic pop

@end
