#import <UIKit/UIKit.h>

@import MessageUI;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBMFMailComposeViewController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id mailComposeDelegate;

+ (BOOL)canSendMail;

- (void)setSubject:(NSString *)subject;
- (void)setToRecipients:(NSArray *)toRecipients;
- (void)setCcRecipients:(NSArray *)ccRecipients;
- (void)setBccRecipients:(NSArray *)bccRecipients;
- (void)setMessageBody:(NSString *)body isHTML:(BOOL)isHTML;
- (void)addAttachmentData:(NSData *)attachment mimeType:(NSString *)mimeType fileName:(NSString *)filename;

#pragma clang diagnostic pop

@end
