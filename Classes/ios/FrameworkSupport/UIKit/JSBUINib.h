#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUINib <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (UINib *)nibWithNibName:(NSString *)name bundle:(NSBundle *)bundleOrNil;
+ (UINib *)nibWithData:(NSData *)data bundle:(NSBundle *)bundleOrNil;

- (NSArray *)instantiateWithOwner:(id)ownerOrNil options:(NSDictionary *)optionsOrNil;

#pragma clang diagnostic pop

@end
