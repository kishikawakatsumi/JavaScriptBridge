#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVPlayerMediaSelectionCriteria <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *preferredMediaCharacteristics;

- (id)initWithPreferredLanguages:(NSArray *)preferredLanguages preferredMediaCharacteristics:(NSArray *)preferredMediaCharacteristics;

#pragma clang diagnostic pop

@end
