#import <MapKit/MKFoundation.h>
#import <MapKit/MKAnnotationView.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKAnnotationView;

@protocol JSBMKPinAnnotationView <JSExport, JSBMKAnnotationView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) MKPinAnnotationColor pinColor;

#pragma clang diagnostic pop

@end
