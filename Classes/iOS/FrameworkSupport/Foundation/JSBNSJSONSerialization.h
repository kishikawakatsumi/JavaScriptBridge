#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSJSONSerialization <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)isValidJSONObject:(id)obj;
+ (NSData *)dataWithJSONObject:(id)obj options:(NSJSONWritingOptions)opt error:(NSError **)error;
+ (id)JSONObjectWithData:(NSData *)data options:(NSJSONReadingOptions)opt error:(NSError **)error;
+ (NSInteger)writeJSONObject:(id)obj toStream:(NSOutputStream *)stream options:(NSJSONWritingOptions)opt error:(NSError **)error;
+ (id)JSONObjectWithStream:(NSInputStream *)stream options:(NSJSONReadingOptions)opt error:(NSError **)error;

#pragma clang diagnostic pop

@end
