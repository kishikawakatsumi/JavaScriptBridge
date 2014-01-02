#import <Foundation/NSObject.h>
#import <CoreGraphics/CGGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSTextAttachment <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain) NSFileWrapper *fileWrapper;
@property (retain) NSString *fileType;
@property (retain) NSData *contents;
@property (retain) UIImage *image;
@property CGRect bounds;

- (id)initWithData:(NSData *)contentData ofType:(NSString *)uti;

#pragma clang diagnostic pop

@end
