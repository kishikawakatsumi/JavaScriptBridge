#import "JSBFoundation.h"
#import "JSBNSArray.h"
#import "JSBNSAttributedString.h"
#import "JSBNSBundle.h"
#import "JSBNSCache.h"
#import "JSBNSCalendar.h"
#import "JSBNSDateComponents.h"
#import "JSBNSCharacterSet.h"
#import "JSBNSCoder.h"
#import "JSBNSData.h"
#import "JSBNSDate.h"
#import "JSBNSDecimalNumberHandler.h"
#import "JSBNSNumber.h"
#import "JSBNSScanner.h"
#import "JSBNSDictionary.h"
#import "JSBNSEnumerator.h"
#import "JSBNSError.h"
#import "JSBNSAssertionHandler.h"
#import "JSBNSException.h"
#import "JSBNSExpression.h"
#import "JSBNSFileCoordinator.h"
#import "JSBNSPipe.h"
#import "JSBNSFileHandle.h"
#import "JSBNSFileManager.h"
#import "JSBNSFileVersion.h"
#import "JSBNSFileWrapper.h"
#import "JSBNSFormatter.h"
#import "JSBNSHTTPCookie.h"
#import "JSBNSHTTPCookieStorage.h"
#import "JSBNSHashTable.h"
#import "JSBNSIndexPath.h"
#import "JSBNSIndexSet.h"
#import "JSBNSInvocation.h"
#import "JSBNSJSONSerialization.h"
#import "JSBNSMutableDictionary.h"
#import "JSBNSOrderedSet.h"
#import "JSBNSSet.h"
#import "JSBNSLinguisticTagger.h"
#import "JSBNSString.h"
#import "JSBNSLocale.h"
#import "JSBNSRecursiveLock.h"
#import "JSBNSConditionLock.h"
#import "JSBNSCondition.h"
#import "JSBNSLock.h"
#import "JSBNSMapTable.h"
#import "JSBNSMetadataQueryResultGroup.h"
#import "JSBNSMetadataItem.h"
#import "JSBNSMetadataQueryAttributeValueTuple.h"
#import "JSBNSMetadataQuery.h"
#import "JSBNSMethodSignature.h"
#import "JSBNSNetServiceBrowser.h"
#import "JSBNSNetService.h"
#import "JSBNSNotificationCenter.h"
#import "JSBNSNotification.h"
#import "JSBNSNotificationQueue.h"
#import "JSBNSNull.h"
#import "JSBNSOperationQueue.h"
#import "JSBNSOperation.h"
#import "JSBNSOrthography.h"
#import "JSBNSPointerArray.h"
#import "JSBNSPort.h"
#import "JSBNSPredicate.h"
#import "JSBNSMutableSet.h"
#import "JSBNSMutableArray.h"
#import "JSBNSMutableOrderedSet.h"
#import "JSBNSProcessInfo.h"
#import "JSBNSProgress.h"
#import "JSBNSPropertyListSerialization.h"
#import "JSBNSProxy.h"
#import "JSBNSValue.h"
#import "JSBNSRegularExpression.h"
#import "JSBNSRunLoop.h"
#import "JSBNSSortDescriptor.h"
#import "JSBNSStream.h"
#import "JSBNSTextCheckingResult.h"
#import "JSBNSThread.h"
#import "JSBNSTimeZone.h"
#import "JSBNSTimer.h"
#import "JSBNSFileSecurity.h"
#import "JSBNSURL.h"
#import "JSBNSURLComponents.h"
#import "JSBNSURLAuthenticationChallenge.h"
#import "JSBNSURLCache.h"
#import "JSBNSCachedURLResponse.h"
#import "JSBNSURLConnection.h"
#import "JSBNSURLCredential.h"
#import "JSBNSURLCredentialStorage.h"
#import "JSBNSURLProtectionSpace.h"
#import "JSBNSURLProtocol.h"
#import "JSBNSURLRequest.h"
#import "JSBNSURLResponse.h"
#import "JSBNSURLSession.h"
#import "JSBNSURLSessionTask.h"
#import "JSBNSURLSessionConfiguration.h"
#import "JSBNSUUID.h"
#import "JSBNSUbiquitousKeyValueStore.h"
#import "JSBNSUndoManager.h"
#import "JSBNSUserDefaults.h"
#import "JSBNSValueTransformer.h"
#import "JSBNSXMLParser.h"
#import "JSBNSMutableAttributedString.h"
#import "JSBNSByteCountFormatter.h"
#import "JSBNSMutableCharacterSet.h"
#import "JSBNSComparisonPredicate.h"
#import "JSBNSCompoundPredicate.h"
#import "JSBNSMutableData.h"
#import "JSBNSDateFormatter.h"
#import "JSBNSDecimalNumber.h"
#import "JSBNSDirectoryEnumerator.h"
#import "JSBNSMutableIndexSet.h"
#import "JSBNSKeyedArchiver.h"
#import "JSBNSKeyedUnarchiver.h"
#import "JSBNSNumberFormatter.h"
#import "JSBNSInvocationOperation.h"
#import "JSBNSBlockOperation.h"
#import "JSBNSMessagePort.h"
#import "JSBNSMachPort.h"
#import "JSBNSDataDetector.h"
#import "JSBNSCountedSet.h"
#import "JSBNSOutputStream.h"
#import "JSBNSInputStream.h"
#import "JSBNSMutableString.h"
#import "JSBNSSimpleCString.h"
#import "JSBNSMutableURLRequest.h"
#import "JSBNSHTTPURLResponse.h"
#import "JSBNSURLSessionDataTask.h"
#import "JSBNSURLSessionDownloadTask.h"
#import "JSBNSPurgeableData.h"
#import "JSBNSConstantString.h"
#import "JSBNSURLSessionUploadTask.h"

@import ObjectiveC;

@implementation JSBFoundation

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([NSArray class], @protocol(JSBNSArray));
    context[@"NSArray"] = [NSArray class];

    class_addProtocol([NSAttributedString class], @protocol(JSBNSAttributedString));
    context[@"NSAttributedString"] = [NSAttributedString class];

    class_addProtocol([NSBundle class], @protocol(JSBNSBundle));
    context[@"NSBundle"] = [NSBundle class];

    class_addProtocol([NSCache class], @protocol(JSBNSCache));
    context[@"NSCache"] = [NSCache class];

    class_addProtocol([NSCalendar class], @protocol(JSBNSCalendar));
    context[@"NSCalendar"] = [NSCalendar class];

    class_addProtocol([NSDateComponents class], @protocol(JSBNSDateComponents));
    context[@"NSDateComponents"] = [NSDateComponents class];

    class_addProtocol([NSCharacterSet class], @protocol(JSBNSCharacterSet));
    context[@"NSCharacterSet"] = [NSCharacterSet class];

    class_addProtocol([NSCoder class], @protocol(JSBNSCoder));
    context[@"NSCoder"] = [NSCoder class];

    class_addProtocol([NSData class], @protocol(JSBNSData));
    context[@"NSData"] = [NSData class];

    class_addProtocol([NSDate class], @protocol(JSBNSDate));
    context[@"NSDate"] = [NSDate class];

    class_addProtocol([NSDecimalNumberHandler class], @protocol(JSBNSDecimalNumberHandler));
    context[@"NSDecimalNumberHandler"] = [NSDecimalNumberHandler class];

    class_addProtocol([NSNumber class], @protocol(JSBNSNumber));
    context[@"NSNumber"] = [NSNumber class];

    class_addProtocol([NSScanner class], @protocol(JSBNSScanner));
    context[@"NSScanner"] = [NSScanner class];

    class_addProtocol([NSDictionary class], @protocol(JSBNSDictionary));
    context[@"NSDictionary"] = [NSDictionary class];

    class_addProtocol([NSEnumerator class], @protocol(JSBNSEnumerator));
    context[@"NSEnumerator"] = [NSEnumerator class];

    class_addProtocol([NSError class], @protocol(JSBNSError));
    context[@"NSError"] = [NSError class];

    class_addProtocol([NSAssertionHandler class], @protocol(JSBNSAssertionHandler));
    context[@"NSAssertionHandler"] = [NSAssertionHandler class];

    class_addProtocol([NSException class], @protocol(JSBNSException));
    context[@"NSException"] = [NSException class];

    class_addProtocol([NSExpression class], @protocol(JSBNSExpression));
    context[@"NSExpression"] = [NSExpression class];

    class_addProtocol([NSFileCoordinator class], @protocol(JSBNSFileCoordinator));
    context[@"NSFileCoordinator"] = [NSFileCoordinator class];

    class_addProtocol([NSPipe class], @protocol(JSBNSPipe));
    context[@"NSPipe"] = [NSPipe class];

    class_addProtocol([NSFileHandle class], @protocol(JSBNSFileHandle));
    context[@"NSFileHandle"] = [NSFileHandle class];

    class_addProtocol([NSFileManager class], @protocol(JSBNSFileManager));
    context[@"NSFileManager"] = [NSFileManager class];

    class_addProtocol([NSFileVersion class], @protocol(JSBNSFileVersion));
    context[@"NSFileVersion"] = [NSFileVersion class];

    class_addProtocol([NSFileWrapper class], @protocol(JSBNSFileWrapper));
    context[@"NSFileWrapper"] = [NSFileWrapper class];

    class_addProtocol([NSFormatter class], @protocol(JSBNSFormatter));
    context[@"NSFormatter"] = [NSFormatter class];

    class_addProtocol([NSHTTPCookie class], @protocol(JSBNSHTTPCookie));
    context[@"NSHTTPCookie"] = [NSHTTPCookie class];

    class_addProtocol([NSHTTPCookieStorage class], @protocol(JSBNSHTTPCookieStorage));
    context[@"NSHTTPCookieStorage"] = [NSHTTPCookieStorage class];

    class_addProtocol([NSHashTable class], @protocol(JSBNSHashTable));
    context[@"NSHashTable"] = [NSHashTable class];

    class_addProtocol([NSIndexPath class], @protocol(JSBNSIndexPath));
    context[@"NSIndexPath"] = [NSIndexPath class];

    class_addProtocol([NSIndexSet class], @protocol(JSBNSIndexSet));
    context[@"NSIndexSet"] = [NSIndexSet class];

    class_addProtocol([NSInvocation class], @protocol(JSBNSInvocation));
    context[@"NSInvocation"] = [NSInvocation class];

    class_addProtocol([NSJSONSerialization class], @protocol(JSBNSJSONSerialization));
    context[@"NSJSONSerialization"] = [NSJSONSerialization class];

    class_addProtocol([NSMutableDictionary class], @protocol(JSBNSMutableDictionary));
    context[@"NSMutableDictionary"] = [NSMutableDictionary class];

    class_addProtocol([NSOrderedSet class], @protocol(JSBNSOrderedSet));
    context[@"NSOrderedSet"] = [NSOrderedSet class];

    class_addProtocol([NSSet class], @protocol(JSBNSSet));
    context[@"NSSet"] = [NSSet class];

    class_addProtocol([NSLinguisticTagger class], @protocol(JSBNSLinguisticTagger));
    context[@"NSLinguisticTagger"] = [NSLinguisticTagger class];

    class_addProtocol([NSString class], @protocol(JSBNSString));
    context[@"NSString"] = [NSString class];

    class_addProtocol([NSLocale class], @protocol(JSBNSLocale));
    context[@"NSLocale"] = [NSLocale class];

    class_addProtocol([NSRecursiveLock class], @protocol(JSBNSRecursiveLock));
    context[@"NSRecursiveLock"] = [NSRecursiveLock class];

    class_addProtocol([NSConditionLock class], @protocol(JSBNSConditionLock));
    context[@"NSConditionLock"] = [NSConditionLock class];

    class_addProtocol([NSCondition class], @protocol(JSBNSCondition));
    context[@"NSCondition"] = [NSCondition class];

    class_addProtocol([NSLock class], @protocol(JSBNSLock));
    context[@"NSLock"] = [NSLock class];

    class_addProtocol([NSMapTable class], @protocol(JSBNSMapTable));
    context[@"NSMapTable"] = [NSMapTable class];

    class_addProtocol([NSMetadataQueryResultGroup class], @protocol(JSBNSMetadataQueryResultGroup));
    context[@"NSMetadataQueryResultGroup"] = [NSMetadataQueryResultGroup class];

    class_addProtocol([NSMetadataItem class], @protocol(JSBNSMetadataItem));
    context[@"NSMetadataItem"] = [NSMetadataItem class];

    class_addProtocol([NSMetadataQueryAttributeValueTuple class], @protocol(JSBNSMetadataQueryAttributeValueTuple));
    context[@"NSMetadataQueryAttributeValueTuple"] = [NSMetadataQueryAttributeValueTuple class];

    class_addProtocol([NSMetadataQuery class], @protocol(JSBNSMetadataQuery));
    context[@"NSMetadataQuery"] = [NSMetadataQuery class];

    class_addProtocol([NSMethodSignature class], @protocol(JSBNSMethodSignature));
    context[@"NSMethodSignature"] = [NSMethodSignature class];

    class_addProtocol([NSNetServiceBrowser class], @protocol(JSBNSNetServiceBrowser));
    context[@"NSNetServiceBrowser"] = [NSNetServiceBrowser class];

    class_addProtocol([NSNetService class], @protocol(JSBNSNetService));
    context[@"NSNetService"] = [NSNetService class];

    class_addProtocol([NSNotificationCenter class], @protocol(JSBNSNotificationCenter));
    context[@"NSNotificationCenter"] = [NSNotificationCenter class];

    class_addProtocol([NSNotification class], @protocol(JSBNSNotification));
    context[@"NSNotification"] = [NSNotification class];

    class_addProtocol([NSNotificationQueue class], @protocol(JSBNSNotificationQueue));
    context[@"NSNotificationQueue"] = [NSNotificationQueue class];

    class_addProtocol([NSNull class], @protocol(JSBNSNull));
    context[@"NSNull"] = [NSNull class];

    class_addProtocol([NSOperationQueue class], @protocol(JSBNSOperationQueue));
    context[@"NSOperationQueue"] = [NSOperationQueue class];

    class_addProtocol([NSOperation class], @protocol(JSBNSOperation));
    context[@"NSOperation"] = [NSOperation class];

    class_addProtocol([NSOrthography class], @protocol(JSBNSOrthography));
    context[@"NSOrthography"] = [NSOrthography class];

    class_addProtocol([NSPointerArray class], @protocol(JSBNSPointerArray));
    context[@"NSPointerArray"] = [NSPointerArray class];

    class_addProtocol([NSPort class], @protocol(JSBNSPort));
    context[@"NSPort"] = [NSPort class];

    class_addProtocol([NSPredicate class], @protocol(JSBNSPredicate));
    context[@"NSPredicate"] = [NSPredicate class];

    class_addProtocol([NSMutableSet class], @protocol(JSBNSMutableSet));
    context[@"NSMutableSet"] = [NSMutableSet class];

    class_addProtocol([NSMutableArray class], @protocol(JSBNSMutableArray));
    context[@"NSMutableArray"] = [NSMutableArray class];

    class_addProtocol([NSMutableOrderedSet class], @protocol(JSBNSMutableOrderedSet));
    context[@"NSMutableOrderedSet"] = [NSMutableOrderedSet class];

    class_addProtocol([NSProcessInfo class], @protocol(JSBNSProcessInfo));
    context[@"NSProcessInfo"] = [NSProcessInfo class];

    class_addProtocol([NSProgress class], @protocol(JSBNSProgress));
    context[@"NSProgress"] = [NSProgress class];

    class_addProtocol([NSPropertyListSerialization class], @protocol(JSBNSPropertyListSerialization));
    context[@"NSPropertyListSerialization"] = [NSPropertyListSerialization class];

    class_addProtocol([NSProxy class], @protocol(JSBNSProxy));
    context[@"NSProxy"] = [NSProxy class];

    class_addProtocol([NSValue class], @protocol(JSBNSValue));
    context[@"NSValue"] = [NSValue class];

    class_addProtocol([NSRegularExpression class], @protocol(JSBNSRegularExpression));
    context[@"NSRegularExpression"] = [NSRegularExpression class];

    class_addProtocol([NSRunLoop class], @protocol(JSBNSRunLoop));
    context[@"NSRunLoop"] = [NSRunLoop class];

    class_addProtocol([NSSortDescriptor class], @protocol(JSBNSSortDescriptor));
    context[@"NSSortDescriptor"] = [NSSortDescriptor class];

    class_addProtocol([NSStream class], @protocol(JSBNSStream));
    context[@"NSStream"] = [NSStream class];

    class_addProtocol([NSTextCheckingResult class], @protocol(JSBNSTextCheckingResult));
    context[@"NSTextCheckingResult"] = [NSTextCheckingResult class];

    class_addProtocol([NSThread class], @protocol(JSBNSThread));
    context[@"NSThread"] = [NSThread class];

    class_addProtocol([NSTimeZone class], @protocol(JSBNSTimeZone));
    context[@"NSTimeZone"] = [NSTimeZone class];

    class_addProtocol([NSTimer class], @protocol(JSBNSTimer));
    context[@"NSTimer"] = [NSTimer class];

    class_addProtocol([NSFileSecurity class], @protocol(JSBNSFileSecurity));
    context[@"NSFileSecurity"] = [NSFileSecurity class];

    class_addProtocol([NSURL class], @protocol(JSBNSURL));
    context[@"NSURL"] = [NSURL class];

    class_addProtocol([NSURLComponents class], @protocol(JSBNSURLComponents));
    context[@"NSURLComponents"] = [NSURLComponents class];

    class_addProtocol([NSURLAuthenticationChallenge class], @protocol(JSBNSURLAuthenticationChallenge));
    context[@"NSURLAuthenticationChallenge"] = [NSURLAuthenticationChallenge class];

    class_addProtocol([NSURLCache class], @protocol(JSBNSURLCache));
    context[@"NSURLCache"] = [NSURLCache class];

    class_addProtocol([NSCachedURLResponse class], @protocol(JSBNSCachedURLResponse));
    context[@"NSCachedURLResponse"] = [NSCachedURLResponse class];

    class_addProtocol([NSURLConnection class], @protocol(JSBNSURLConnection));
    context[@"NSURLConnection"] = [NSURLConnection class];

    class_addProtocol([NSURLCredential class], @protocol(JSBNSURLCredential));
    context[@"NSURLCredential"] = [NSURLCredential class];

    class_addProtocol([NSURLCredentialStorage class], @protocol(JSBNSURLCredentialStorage));
    context[@"NSURLCredentialStorage"] = [NSURLCredentialStorage class];

    class_addProtocol([NSURLProtectionSpace class], @protocol(JSBNSURLProtectionSpace));
    context[@"NSURLProtectionSpace"] = [NSURLProtectionSpace class];

    class_addProtocol([NSURLProtocol class], @protocol(JSBNSURLProtocol));
    context[@"NSURLProtocol"] = [NSURLProtocol class];

    class_addProtocol([NSURLRequest class], @protocol(JSBNSURLRequest));
    context[@"NSURLRequest"] = [NSURLRequest class];

    class_addProtocol([NSURLResponse class], @protocol(JSBNSURLResponse));
    context[@"NSURLResponse"] = [NSURLResponse class];

    class_addProtocol([NSURLSession class], @protocol(JSBNSURLSession));
    context[@"NSURLSession"] = [NSURLSession class];

    class_addProtocol([NSURLSessionTask class], @protocol(JSBNSURLSessionTask));
    context[@"NSURLSessionTask"] = [NSURLSessionTask class];

    class_addProtocol([NSURLSessionConfiguration class], @protocol(JSBNSURLSessionConfiguration));
    context[@"NSURLSessionConfiguration"] = [NSURLSessionConfiguration class];

    class_addProtocol([NSUUID class], @protocol(JSBNSUUID));
    context[@"NSUUID"] = [NSUUID class];

    class_addProtocol([NSUbiquitousKeyValueStore class], @protocol(JSBNSUbiquitousKeyValueStore));
    context[@"NSUbiquitousKeyValueStore"] = [NSUbiquitousKeyValueStore class];

    class_addProtocol([NSUndoManager class], @protocol(JSBNSUndoManager));
    context[@"NSUndoManager"] = [NSUndoManager class];

    class_addProtocol([NSUserDefaults class], @protocol(JSBNSUserDefaults));
    context[@"NSUserDefaults"] = [NSUserDefaults class];

    class_addProtocol([NSValueTransformer class], @protocol(JSBNSValueTransformer));
    context[@"NSValueTransformer"] = [NSValueTransformer class];

    class_addProtocol([NSXMLParser class], @protocol(JSBNSXMLParser));
    context[@"NSXMLParser"] = [NSXMLParser class];

    class_addProtocol([NSMutableAttributedString class], @protocol(JSBNSMutableAttributedString));
    context[@"NSMutableAttributedString"] = [NSMutableAttributedString class];

    class_addProtocol([NSByteCountFormatter class], @protocol(JSBNSByteCountFormatter));
    context[@"NSByteCountFormatter"] = [NSByteCountFormatter class];

    class_addProtocol([NSMutableCharacterSet class], @protocol(JSBNSMutableCharacterSet));
    context[@"NSMutableCharacterSet"] = [NSMutableCharacterSet class];

    class_addProtocol([NSComparisonPredicate class], @protocol(JSBNSComparisonPredicate));
    context[@"NSComparisonPredicate"] = [NSComparisonPredicate class];

    class_addProtocol([NSCompoundPredicate class], @protocol(JSBNSCompoundPredicate));
    context[@"NSCompoundPredicate"] = [NSCompoundPredicate class];

    class_addProtocol([NSMutableData class], @protocol(JSBNSMutableData));
    context[@"NSMutableData"] = [NSMutableData class];

    class_addProtocol([NSDateFormatter class], @protocol(JSBNSDateFormatter));
    context[@"NSDateFormatter"] = [NSDateFormatter class];

    class_addProtocol([NSDecimalNumber class], @protocol(JSBNSDecimalNumber));
    context[@"NSDecimalNumber"] = [NSDecimalNumber class];

    class_addProtocol([NSDirectoryEnumerator class], @protocol(JSBNSDirectoryEnumerator));
    context[@"NSDirectoryEnumerator"] = [NSDirectoryEnumerator class];

    class_addProtocol([NSMutableIndexSet class], @protocol(JSBNSMutableIndexSet));
    context[@"NSMutableIndexSet"] = [NSMutableIndexSet class];

    class_addProtocol([NSKeyedArchiver class], @protocol(JSBNSKeyedArchiver));
    context[@"NSKeyedArchiver"] = [NSKeyedArchiver class];

    class_addProtocol([NSKeyedUnarchiver class], @protocol(JSBNSKeyedUnarchiver));
    context[@"NSKeyedUnarchiver"] = [NSKeyedUnarchiver class];

    class_addProtocol([NSNumberFormatter class], @protocol(JSBNSNumberFormatter));
    context[@"NSNumberFormatter"] = [NSNumberFormatter class];

    class_addProtocol([NSInvocationOperation class], @protocol(JSBNSInvocationOperation));
    context[@"NSInvocationOperation"] = [NSInvocationOperation class];

    class_addProtocol([NSBlockOperation class], @protocol(JSBNSBlockOperation));
    context[@"NSBlockOperation"] = [NSBlockOperation class];

    class_addProtocol([NSMessagePort class], @protocol(JSBNSMessagePort));
    context[@"NSMessagePort"] = [NSMessagePort class];

    class_addProtocol([NSMachPort class], @protocol(JSBNSMachPort));
    context[@"NSMachPort"] = [NSMachPort class];

    class_addProtocol([NSDataDetector class], @protocol(JSBNSDataDetector));
    context[@"NSDataDetector"] = [NSDataDetector class];

    class_addProtocol([NSCountedSet class], @protocol(JSBNSCountedSet));
    context[@"NSCountedSet"] = [NSCountedSet class];

    class_addProtocol([NSOutputStream class], @protocol(JSBNSOutputStream));
    context[@"NSOutputStream"] = [NSOutputStream class];

    class_addProtocol([NSInputStream class], @protocol(JSBNSInputStream));
    context[@"NSInputStream"] = [NSInputStream class];

    class_addProtocol([NSMutableString class], @protocol(JSBNSMutableString));
    context[@"NSMutableString"] = [NSMutableString class];

    class_addProtocol([NSSimpleCString class], @protocol(JSBNSSimpleCString));
    context[@"NSSimpleCString"] = [NSSimpleCString class];

    class_addProtocol([NSMutableURLRequest class], @protocol(JSBNSMutableURLRequest));
    context[@"NSMutableURLRequest"] = [NSMutableURLRequest class];

    class_addProtocol([NSHTTPURLResponse class], @protocol(JSBNSHTTPURLResponse));
    context[@"NSHTTPURLResponse"] = [NSHTTPURLResponse class];

    class_addProtocol([NSURLSessionDataTask class], @protocol(JSBNSURLSessionDataTask));
    context[@"NSURLSessionDataTask"] = [NSURLSessionDataTask class];

    class_addProtocol([NSURLSessionDownloadTask class], @protocol(JSBNSURLSessionDownloadTask));
    context[@"NSURLSessionDownloadTask"] = [NSURLSessionDownloadTask class];

    class_addProtocol([NSPurgeableData class], @protocol(JSBNSPurgeableData));
    context[@"NSPurgeableData"] = [NSPurgeableData class];

    class_addProtocol([NSConstantString class], @protocol(JSBNSConstantString));
    context[@"NSConstantString"] = [NSConstantString class];

    class_addProtocol([NSURLSessionUploadTask class], @protocol(JSBNSURLSessionUploadTask));
    context[@"NSURLSessionUploadTask"] = [NSURLSessionUploadTask class];

#pragma clang diagnostic pop
}

@end
