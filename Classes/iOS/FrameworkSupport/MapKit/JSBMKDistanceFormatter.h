#import <MapKit/MKFoundation.h>
#import <CoreLocation/CoreLocation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSFormatter;

@protocol JSBMKDistanceFormatter <JSExport, JSBNSFormatter>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSLocale *locale;
@property (assign) MKDistanceFormatterUnits units;
@property (assign) MKDistanceFormatterUnitStyle unitStyle;

- (NSString *)stringFromDistance:(CLLocationDistance)distance;
- (CLLocationDistance)distanceFromString:(NSString *)distance;

#pragma clang diagnostic pop

@end
