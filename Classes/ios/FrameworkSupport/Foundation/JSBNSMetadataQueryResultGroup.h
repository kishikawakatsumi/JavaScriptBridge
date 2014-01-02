#import <Foundation/NSMetadataAttributes.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMetadataQueryResultGroup <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSString *)attribute;
- (id)value;
- (NSArray *)subgroups;
- (NSUInteger)resultCount;
- (id)resultAtIndex:(NSUInteger)idx;
- (NSArray *)results;

#pragma clang diagnostic pop

@end
