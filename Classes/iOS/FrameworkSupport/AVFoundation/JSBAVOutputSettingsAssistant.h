#import <Foundation/Foundation.h>
#import <AVFoundation/AVBase.h>
#import <CoreMedia/CMFormatDescription.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVOutputSettingsAssistant <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) id sourceAudioFormat;
@property (nonatomic) CMTime sourceVideoAverageFrameDuration;
@property (nonatomic, readonly) NSString *outputFileType;
@property (nonatomic) CMTime sourceVideoMinFrameDuration;
@property (nonatomic, retain) id sourceVideoFormat;
@property (nonatomic, readonly) NSDictionary *videoSettings;
@property (nonatomic, readonly) NSDictionary *audioSettings;

+ (NSArray *)availableOutputSettingsPresets;
+ (instancetype)outputSettingsAssistantWithPreset:(NSString *)presetIdentifier;

#pragma clang diagnostic pop

@end
