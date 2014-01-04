#import <MapKit/MKFoundation.h>
#import <MapKit/MKOverlay.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKTileOverlay <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL canReplaceMapContent;
@property NSInteger minimumZ;
@property (readonly) NSString *URLTemplate;
@property NSInteger maximumZ;
@property (getter = isGeometryFlipped) BOOL geometryFlipped;
@property CGSize tileSize;

- (id)initWithURLTemplate:(NSString *)URLTemplate;
- (NSURL *)URLForTilePath:(MKTileOverlayPath)path;
- (void)loadTileAtPath:(MKTileOverlayPath)path result:(void (^)(NSData *tileData , NSError *error))result;

#pragma clang diagnostic pop

@end
