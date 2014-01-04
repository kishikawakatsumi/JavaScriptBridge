#import <Foundation/Foundation.h>

@import PassKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBPKPassLibrary <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)isPassLibraryAvailable;

- (NSArray *)passes;
- (PKPass *)passWithPassTypeIdentifier:(NSString *)identifier serialNumber:(NSString *)serialNumber;
- (void)removePass:(PKPass *)pass;
- (BOOL)containsPass:(PKPass *)pass;
- (BOOL)replacePassWithPass:(PKPass *)pass;
- (void)addPasses:(NSArray *)passes withCompletionHandler:(void (^)(PKPassLibraryAddPassesStatus status))completion;

#pragma clang diagnostic pop

@end
