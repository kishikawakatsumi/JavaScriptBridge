#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPrintInfo <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) UIPrintInfoOrientation orientation;
@property (nonatomic, copy) NSString *printerID;
@property (nonatomic) UIPrintInfoOutputType outputType;
@property (nonatomic) UIPrintInfoDuplex duplex;
@property (nonatomic, copy) NSString *jobName;

+ (UIPrintInfo *)printInfo;
+ (UIPrintInfo *)printInfoWithDictionary:(NSDictionary *)dictionary;

- (NSDictionary *)dictionaryRepresentation;

#pragma clang diagnostic pop

@end
