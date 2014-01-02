#import <Foundation/NSObject.h>
#import <CoreFoundation/CFLocale.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSLocale <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)autoupdatingCurrentLocale;
+ (id)currentLocale;
+ (id)systemLocale;
+ (instancetype)localeWithLocaleIdentifier:(NSString *)ident;
+ (NSArray *)availableLocaleIdentifiers;
+ (NSArray *)ISOLanguageCodes;
+ (NSArray *)ISOCountryCodes;
+ (NSArray *)ISOCurrencyCodes;
+ (NSArray *)commonISOCurrencyCodes;
+ (NSArray *)preferredLanguages;
+ (NSDictionary *)componentsFromLocaleIdentifier:(NSString *)string;
+ (NSString *)localeIdentifierFromComponents:(NSDictionary *)dict;
+ (NSString *)canonicalLocaleIdentifierFromString:(NSString *)string;
+ (NSString *)canonicalLanguageIdentifierFromString:(NSString *)string;
+ (NSString *)localeIdentifierFromWindowsLocaleCode:(uint32_t)lcid;
+ (uint32_t)windowsLocaleCodeFromLocaleIdentifier:(NSString *)localeIdentifier;
+ (NSLocaleLanguageDirection)characterDirectionForLanguage:(NSString *)isoLangCode;
+ (NSLocaleLanguageDirection)lineDirectionForLanguage:(NSString *)isoLangCode;

- (id)objectForKey:(id)key;
- (NSString *)displayNameForKey:(id)key value:(id)value;
- (NSString *)localeIdentifier;
- (instancetype)initWithLocaleIdentifier:(NSString *)string;
- (id)init;

#pragma clang diagnostic pop

@end
