#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIDataDetectors.h>
#import <UIKit/UIScrollView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIWebView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL detectsPhoneNumbers;
@property (nonatomic, readonly, getter = canGoForward) BOOL canGoForward;
@property (nonatomic) BOOL allowsInlineMediaPlayback;
@property (nonatomic) BOOL keyboardDisplayRequiresUserAction;
@property (nonatomic) UIWebPaginationMode paginationMode;
@property (nonatomic, readonly, retain) UIScrollView *scrollView;
@property (nonatomic) CGFloat gapBetweenPages;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (nonatomic) BOOL suppressesIncrementalRendering;
@property (nonatomic, readonly, getter = canGoBack) BOOL canGoBack;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) BOOL scalesPageToFit;
@property (nonatomic) CGFloat pageLength;
@property (nonatomic, readonly) NSUInteger pageCount;
@property (nonatomic, assign) id delegate;
@property (nonatomic) UIDataDetectorTypes dataDetectorTypes;
@property (nonatomic, readonly, retain) NSURLRequest *request;
@property (nonatomic, readonly, getter = isLoading) BOOL loading;
@property (nonatomic) UIWebPaginationBreakingMode paginationBreakingMode;

- (void)loadRequest:(NSURLRequest *)request;
- (void)loadHTMLString:(NSString *)string baseURL:(NSURL *)baseURL;
- (void)loadData:(NSData *)data MIMEType:(NSString *)MIMEType textEncodingName:(NSString *)textEncodingName baseURL:(NSURL *)baseURL;
- (void)reload;
- (void)stopLoading;
- (void)goBack;
- (void)goForward;
- (NSString *)stringByEvaluatingJavaScriptFromString:(NSString *)script;

#pragma clang diagnostic pop

@end
