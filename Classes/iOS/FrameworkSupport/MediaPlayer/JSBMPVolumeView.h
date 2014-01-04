#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayerDefines.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBMPVolumeView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isWirelessRouteActive) BOOL wirelessRouteActive;
@property (nonatomic) BOOL showsVolumeSlider;
@property (nonatomic) BOOL showsRouteButton;
@property (nonatomic, readonly, getter = areWirelessRoutesAvailable) BOOL wirelessRoutesAvailable;
@property (nonatomic, strong) UIImage *volumeWarningSliderImage;

- (CGSize)sizeThatFits:(CGSize)size;
- (void)setMinimumVolumeSliderImage:(UIImage *)image forState:(UIControlState)state;
- (void)setMaximumVolumeSliderImage:(UIImage *)image forState:(UIControlState)state;
- (void)setVolumeThumbImage:(UIImage *)image forState:(UIControlState)state;
- (UIImage *)minimumVolumeSliderImageForState:(UIControlState)state;
- (UIImage *)maximumVolumeSliderImageForState:(UIControlState)state;
- (UIImage *)volumeThumbImageForState:(UIControlState)state;
- (CGRect)volumeSliderRectForBounds:(CGRect)bounds;
- (CGRect)volumeThumbRectForBounds:(CGRect)bounds volumeSliderRect:(CGRect)rect value:(float)value;
- (void)setRouteButtonImage:(UIImage *)image forState:(UIControlState)state;
- (UIImage *)routeButtonImageForState:(UIControlState)state;
- (CGRect)routeButtonRectForBounds:(CGRect)bounds;

#pragma clang diagnostic pop

@end
