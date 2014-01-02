#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKMapSnapshotter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isLoading) BOOL loading;

- (instancetype)initWithOptions:(MKMapSnapshotOptions *)options;
- (void)startWithCompletionHandler:(MKMapSnapshotCompletionHandler)completionHandler;
- (void)startWithQueue:(dispatch_queue_t)queue completionHandler:(MKMapSnapshotCompletionHandler)completionHandler;
- (void)cancel;

#pragma clang diagnostic pop

@end
