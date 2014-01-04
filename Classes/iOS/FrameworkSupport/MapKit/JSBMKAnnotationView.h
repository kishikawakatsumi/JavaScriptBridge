#import <MapKit/MKFoundation.h>
#import <UIKit/UIKit.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBMKAnnotationView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) MKAnnotationViewDragState dragState;
@property (nonatomic, retain) id annotation;
@property (nonatomic, getter = isDraggable) BOOL draggable;
@property (nonatomic) BOOL canShowCallout;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) CGPoint calloutOffset;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIView *leftCalloutAccessoryView;
@property (retain, nonatomic) UIView *rightCalloutAccessoryView;
@property (nonatomic, getter = isSelected) BOOL selected;
@property (nonatomic) CGPoint centerOffset;

- (id)initWithAnnotation:(id <MKAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setDragState:(MKAnnotationViewDragState)newDragState animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
