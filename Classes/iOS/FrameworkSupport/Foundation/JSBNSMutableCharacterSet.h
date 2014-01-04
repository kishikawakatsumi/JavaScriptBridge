#import <CoreFoundation/CFCharacterSet.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSString.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSCharacterSet;

@protocol JSBNSMutableCharacterSet <JSExport, JSBNSCharacterSet>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)addCharactersInRange:(NSRange)aRange;
- (void)removeCharactersInRange:(NSRange)aRange;
- (void)addCharactersInString:(NSString *)aString;
- (void)removeCharactersInString:(NSString *)aString;
- (void)formUnionWithCharacterSet:(NSCharacterSet *)otherSet;
- (void)formIntersectionWithCharacterSet:(NSCharacterSet *)otherSet;
- (void)invert;

#pragma clang diagnostic pop

@end
