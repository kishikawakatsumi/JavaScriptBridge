#import <Foundation/NSObject.h>
#import <CoreData/NSPropertyDescription.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPropertyDescription;

@protocol JSBNSFetchedPropertyDescription <JSExport, JSBNSPropertyDescription>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSFetchRequest *)fetchRequest;
- (void)setFetchRequest:(NSFetchRequest *)fetchRequest;

#pragma clang diagnostic pop

@end
