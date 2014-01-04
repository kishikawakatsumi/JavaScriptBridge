#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSXMLParser <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithContentsOfURL:(NSURL *)url;
- (id)initWithData:(NSData *)data;
- (id)initWithStream:(NSInputStream *)stream;
- (id <NSXMLParserDelegate>)delegate;
- (void)setDelegate:(id <NSXMLParserDelegate>)delegate;
- (void)setShouldProcessNamespaces:(BOOL)shouldProcessNamespaces;
- (void)setShouldReportNamespacePrefixes:(BOOL)shouldReportNamespacePrefixes;
- (void)setShouldResolveExternalEntities:(BOOL)shouldResolveExternalEntities;
- (BOOL)shouldProcessNamespaces;
- (BOOL)shouldReportNamespacePrefixes;
- (BOOL)shouldResolveExternalEntities;
- (BOOL)parse;
- (void)abortParsing;
- (NSError *)parserError;
- (NSString *)publicID;
- (NSString *)systemID;
- (NSInteger)lineNumber;
- (NSInteger)columnNumber;

#pragma clang diagnostic pop

@end
