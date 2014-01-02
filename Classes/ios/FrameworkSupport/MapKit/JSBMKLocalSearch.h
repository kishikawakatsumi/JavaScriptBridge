#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKLocalSearch <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isSearching) BOOL searching;

- (id)initWithRequest:(MKLocalSearchRequest *)request;
- (void)startWithCompletionHandler:(MKLocalSearchCompletionHandler)completionHandler;
- (void)cancel;

#pragma clang diagnostic pop

@end
