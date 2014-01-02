#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPropertyDescription <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSEntityDescription *)entity;
- (NSString *)name;
- (void)setName:(NSString *)name;
- (BOOL)isOptional;
- (void)setOptional:(BOOL)flag;
- (BOOL)isTransient;
- (void)setTransient:(BOOL)flag;
- (NSArray *)validationPredicates;
- (NSArray *)validationWarnings;
- (void)setValidationPredicates:(NSArray *)validationPredicates withValidationWarnings:(NSArray *)validationWarnings;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)dictionary;
- (BOOL)isIndexed;
- (void)setIndexed:(BOOL)flag;
- (NSData *)versionHash;
- (NSString *)versionHashModifier;
- (void)setVersionHashModifier:(NSString *)modifierString;
- (BOOL)isIndexedBySpotlight;
- (void)setIndexedBySpotlight:(BOOL)flag;
- (BOOL)isStoredInExternalRecord;
- (void)setStoredInExternalRecord:(BOOL)flag;
- (NSString *)renamingIdentifier;
- (void)setRenamingIdentifier:(NSString *)value;

#pragma clang diagnostic pop

@end
