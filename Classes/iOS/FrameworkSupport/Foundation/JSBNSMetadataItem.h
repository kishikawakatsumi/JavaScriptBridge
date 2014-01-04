#import <Foundation/NSMetadataAttributes.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMetadataItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithURL:(NSURL *)url;
- (id)valueForAttribute:(NSString *)key;
- (NSDictionary *)valuesForAttributes:(NSArray *)keys;
- (NSArray *)attributes;

#pragma clang diagnostic pop

@end
