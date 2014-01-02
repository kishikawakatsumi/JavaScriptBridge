#import <Foundation/NSObject.h>
#import <Foundation/NSEnumerator.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSPathUtilities.h>
#import <CoreFoundation/CFBase.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSEnumerator;

@protocol JSBNSDirectoryEnumerator <JSExport, JSBNSEnumerator>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSDictionary *)fileAttributes;
- (NSDictionary *)directoryAttributes;
- (void)skipDescendents;
- (NSUInteger)level;
- (void)skipDescendants;

#pragma clang diagnostic pop

@end
