#import <UIKit/UIKit.h>

@import MessageUI;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBMFMessageComposeViewController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, assign) id messageComposeDelegate;
@property (nonatomic, copy, readonly) NSArray *attachments;

+ (BOOL)canSendText;
+ (BOOL)canSendSubject;
+ (BOOL)canSendAttachments;
+ (BOOL)isSupportedAttachmentUTI:(NSString *)uti;

- (void)disableUserAttachments;
- (BOOL)addAttachmentURL:(NSURL *)attachmentURL withAlternateFilename:(NSString *)alternateFilename;
- (BOOL)addAttachmentData:(NSData *)attachmentData typeIdentifier:(NSString *)uti filename:(NSString *)filename;

#pragma clang diagnostic pop

@end
