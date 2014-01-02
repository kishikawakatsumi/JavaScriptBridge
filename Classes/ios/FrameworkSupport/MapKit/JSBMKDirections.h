#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKDirections <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isCalculating) BOOL calculating;

- (instancetype)initWithRequest:(MKDirectionsRequest *)request;
- (void)calculateDirectionsWithCompletionHandler:(MKDirectionsHandler)completionHandler;
- (void)calculateETAWithCompletionHandler:(MKETAHandler)completionHandler;
- (void)cancel;

#pragma clang diagnostic pop

@end
