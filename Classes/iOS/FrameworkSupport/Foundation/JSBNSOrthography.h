#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSOrthography <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *dominantLanguage;
@property (readonly) NSDictionary *languageMap;
@property (readonly) NSString *dominantScript;
@property (readonly) NSArray *allScripts;
@property (readonly) NSArray *allLanguages;

+ (id)orthographyWithDominantScript:(NSString *)script languageMap:(NSDictionary *)map;

- (NSArray *)languagesForScript:(NSString *)script;
- (NSString *)dominantLanguageForScript:(NSString *)script;
- (id)initWithDominantScript:(NSString *)script languageMap:(NSDictionary *)map;

#pragma clang diagnostic pop

@end
