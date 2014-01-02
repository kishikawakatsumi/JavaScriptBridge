#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSCharacterSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCharacterSet <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *percentEncodedFragment;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *query;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *path;
@property (copy) NSString *host;
@property (copy) NSString *password;
@property (copy) NSString *scheme;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSString *user;
@property (copy) NSString *fragment;
@property (copy) NSNumber *port;

+ (id)URLUserAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLFragmentAllowedCharacterSet;
+ (id)controlCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)symbolCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithRange:(NSRange)aRange;
+ (id)characterSetWithCharactersInString:(NSString *)aString;
+ (id)characterSetWithBitmapRepresentation:(NSData *)data;
+ (id)characterSetWithContentsOfFile:(NSString *)fName;

- (BOOL)characterIsMember:(unichar)aCharacter;
- (NSData *)bitmapRepresentation;
- (NSCharacterSet *)invertedSet;
- (BOOL)longCharacterIsMember:(UTF32Char)theLongChar;
- (BOOL)isSupersetOfSet:(NSCharacterSet *)theOtherSet;
- (BOOL)hasMemberInPlane:(uint8_t)thePlane;

#pragma clang diagnostic pop

@end
