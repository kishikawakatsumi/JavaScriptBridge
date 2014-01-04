#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLResponse <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithURL:(NSURL *)URL MIMEType:(NSString *)MIMEType expectedContentLength:(NSInteger)length textEncodingName:(NSString *)name;
- (NSURL *)URL;
- (NSString *)MIMEType;
- (long long)expectedContentLength;
- (NSString *)textEncodingName;
- (NSString *)suggestedFilename;

#pragma clang diagnostic pop

@end
