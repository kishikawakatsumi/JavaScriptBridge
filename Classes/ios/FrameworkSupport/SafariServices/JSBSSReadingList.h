#import <Foundation/Foundation.h>

@import SafariServices;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSSReadingList <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)defaultReadingList;
+ (BOOL)supportsURL:(NSURL *)URL;

- (BOOL)addReadingListItemWithURL:(NSURL *)URL title:(NSString *)title previewText:(NSString *)previewText error:(NSError **)error;

#pragma clang diagnostic pop

@end
