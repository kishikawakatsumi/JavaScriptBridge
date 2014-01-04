#import <AVFoundation/AVBase.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>
#import <AvailabilityMacros.h>
#import <CoreAudio/CoreAudioTypes.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAudioSessionRouteDescription <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) BOOL inputIsAvailable;
@property (readonly) NSInteger inputNumberOfChannels;
@property (readonly) AVAudioSessionCategoryOptions categoryOptions;
@property (readonly) double preferredSampleRate;
@property (readonly) NSString *mode;
@property (readonly) NSString *portName;
@property (readonly) NSArray *inputs;
@property (readonly) NSTimeInterval outputLatency;
@property (readonly) AVAudioSessionDataSourceDescription *preferredDataSource;
@property (readonly) NSInteger currentHardwareOutputNumberOfChannels;
@property (readonly) NSInteger preferredInputNumberOfChannels;
@property (readonly, getter = isInputAvailable) BOOL inputAvailable;
@property (readonly) NSNumber *dataSourceID;
@property (assign) id delegate;
@property (readonly) AVAudioSessionDataSourceDescription *outputDataSource;
@property (readonly) NSString *orientation;
@property (readonly) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly) NSString *portType;
@property (readonly) NSString *UID;
@property (readonly) AVAudioSessionRouteDescription *currentRoute;
@property (readonly) float inputGain;
@property (readonly) NSInteger currentHardwareInputNumberOfChannels;
@property (readonly, getter = isOtherAudioPlaying) BOOL otherAudioPlaying;
@property (readonly) NSString *location;
@property (readonly) NSTimeInterval inputLatency;
@property (readonly) NSString *owningPortUID;
@property (readonly, getter = isInputGainSettable) BOOL inputGainSettable;
@property (readonly) AVAudioSessionPortDescription *preferredInput;
@property (readonly) NSArray *inputDataSources;
@property (readonly) NSArray *supportedPolarPatterns;
@property (readonly) NSInteger maximumOutputNumberOfChannels;
@property (readonly) NSArray *availableInputs;
@property (readonly) NSArray *channels;
@property (readonly) NSArray *outputDataSources;
@property (readonly) NSArray *dataSources;
@property (readonly) AVAudioSessionDataSourceDescription *inputDataSource;
@property (readonly) NSInteger maximumInputNumberOfChannels;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *category;
@property (readonly) NSTimeInterval IOBufferDuration;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) double sampleRate;
@property (readonly) NSTimeInterval preferredIOBufferDuration;
@property (readonly) NSInteger preferredOutputNumberOfChannels;
@property (readonly) NSString *channelName;
@property (readonly) AudioChannelLabel channelLabel;
@property (readonly) double preferredHardwareSampleRate;
@property (readonly) float outputVolume;
@property (readonly) NSInteger outputNumberOfChannels;
@property (readonly) NSUInteger channelNumber;
@property (readonly) NSArray *outputs;
@property (readonly) NSString *preferredPolarPattern;
@property (readonly) double currentHardwareSampleRate;

#pragma clang diagnostic pop

@end
