#import <Foundation/NSObject.h>

@import Foundation;
@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSBundle <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSBundle *)mainBundle;
+ (NSBundle *)bundleWithPath:(NSString *)path;
+ (NSBundle *)bundleWithURL:(NSURL *)url;
+ (NSBundle *)bundleForClass:(Class)aClass;
+ (NSBundle *)bundleWithIdentifier:(NSString *)identifier;
+ (NSArray *)allBundles;
+ (NSArray *)allFrameworks;
+ (NSURL *)URLForResource:(NSString *)name withExtension:(NSString *)ext subdirectory:(NSString *)subpath inBundleWithURL:(NSURL *)bundleURL;
+ (NSArray *)URLsForResourcesWithExtension:(NSString *)ext subdirectory:(NSString *)subpath inBundleWithURL:(NSURL *)bundleURL;
+ (NSString *)pathForResource:(NSString *)name ofType:(NSString *)ext inDirectory:(NSString *)bundlePath;
+ (NSArray *)pathsForResourcesOfType:(NSString *)ext inDirectory:(NSString *)bundlePath;
+ (NSArray *)preferredLocalizationsFromArray:(NSArray *)localizationsArray;
+ (NSArray *)preferredLocalizationsFromArray:(NSArray *)localizationsArray forPreferences:(NSArray *)preferencesArray;

- (id)initWithPath:(NSString *)path;
- (id)initWithURL:(NSURL *)url;
- (BOOL)load;
- (BOOL)isLoaded;
- (BOOL)unload;
- (BOOL)preflightAndReturnError:(NSError **)error;
- (BOOL)loadAndReturnError:(NSError **)error;
- (NSURL *)bundleURL;
- (NSURL *)resourceURL;
- (NSURL *)executableURL;
- (NSURL *)URLForAuxiliaryExecutable:(NSString *)executableName;
- (NSURL *)privateFrameworksURL;
- (NSURL *)sharedFrameworksURL;
- (NSURL *)sharedSupportURL;
- (NSURL *)builtInPlugInsURL;
- (NSURL *)appStoreReceiptURL;
- (NSString *)bundlePath;
- (NSString *)resourcePath;
- (NSString *)executablePath;
- (NSString *)pathForAuxiliaryExecutable:(NSString *)executableName;
- (NSString *)privateFrameworksPath;
- (NSString *)sharedFrameworksPath;
- (NSString *)sharedSupportPath;
- (NSString *)builtInPlugInsPath;
- (NSURL *)URLForResource:(NSString *)name withExtension:(NSString *)ext;
- (NSURL *)URLForResource:(NSString *)name withExtension:(NSString *)ext subdirectory:(NSString *)subpath;
- (NSURL *)URLForResource:(NSString *)name withExtension:(NSString *)ext subdirectory:(NSString *)subpath localization:(NSString *)localizationName;
- (NSArray *)URLsForResourcesWithExtension:(NSString *)ext subdirectory:(NSString *)subpath;
- (NSArray *)URLsForResourcesWithExtension:(NSString *)ext subdirectory:(NSString *)subpath localization:(NSString *)localizationName;
- (NSString *)pathForResource:(NSString *)name ofType:(NSString *)ext;
- (NSString *)pathForResource:(NSString *)name ofType:(NSString *)ext inDirectory:(NSString *)subpath;
- (NSString *)pathForResource:(NSString *)name ofType:(NSString *)ext inDirectory:(NSString *)subpath forLocalization:(NSString *)localizationName;
- (NSArray *)pathsForResourcesOfType:(NSString *)ext inDirectory:(NSString *)subpath;
- (NSArray *)pathsForResourcesOfType:(NSString *)ext inDirectory:(NSString *)subpath forLocalization:(NSString *)localizationName;
- (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)value table:(NSString *)tableName;
- (NSString *)bundleIdentifier;
- (NSDictionary *)infoDictionary;
- (NSDictionary *)localizedInfoDictionary;
- (id)objectForInfoDictionaryKey:(NSString *)key;
- (Class)classNamed:(NSString *)className;
- (Class)principalClass;
- (NSArray *)preferredLocalizations;
- (NSArray *)localizations;
- (NSString *)developmentLocalization;
- (NSArray *)executableArchitectures;

#pragma mark - UIKit

- (NSArray *)loadNibNamed:(NSString *)name owner:(id)owner options:(NSDictionary *)options;

#pragma clang diagnostic pop

@end
