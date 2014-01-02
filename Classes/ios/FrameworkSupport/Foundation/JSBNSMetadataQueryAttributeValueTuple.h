#import <Foundation/NSMetadataAttributes.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMetadataQueryAttributeValueTuple <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSString *)attribute;
- (id)value;
- (NSUInteger)count;

#pragma clang diagnostic pop

@end
