#import <Foundation/Foundation.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKObject <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (BOOL)hasChanges;
- (BOOL)isNew;
- (void)reset;
- (void)rollback;
- (BOOL)refresh;

#pragma clang diagnostic pop

@end
