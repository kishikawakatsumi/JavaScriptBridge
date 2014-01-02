#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSBundle <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSArray *)loadNibNamed:(NSString *)name owner:(id)owner options:(NSDictionary *)options;

#pragma clang diagnostic pop

@end
