#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBFoundationTests : XCTestCase

@end

@implementation JSBFoundationTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"Foundation"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var nsarray = NSArray.new();"];
    value = context[@"nsarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsattributedstring = NSAttributedString.new();"];
    value = context[@"nsattributedstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsbundle = NSBundle.new();"];
    value = context[@"nsbundle"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscache = NSCache.new();"];
    value = context[@"nscache"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscalendar = NSCalendar.currentCalendar();"];
    value = context[@"nscalendar"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdatecomponents = NSDateComponents.new();"];
    value = context[@"nsdatecomponents"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscharacterset = NSCharacterSet.new();"];
    value = context[@"nscharacterset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscoder = NSCoder.new();"];
    value = context[@"nscoder"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdata = NSData.new();"];
    value = context[@"nsdata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdate = NSDate.new();"];
    value = context[@"nsdate"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdecimalnumberhandler = NSDecimalNumberHandler.new();"];
    value = context[@"nsdecimalnumberhandler"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnumber = NSNumber.numberWithInt(0);"];
    value = context[@"nsnumber"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsscanner = NSScanner.new();"];
    value = context[@"nsscanner"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdictionary = NSDictionary.new();"];
    value = context[@"nsdictionary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsenumerator = NSEnumerator.new();"];
    value = context[@"nsenumerator"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nserror = NSError.new();"];
    value = context[@"nserror"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsassertionhandler = NSAssertionHandler.new();"];
    value = context[@"nsassertionhandler"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsexception = NSException.exceptionWithNameReasonUserInfo('name', 'reason', null);"];
    value = context[@"nsexception"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsexpression = NSExpression.new();"];
    value = context[@"nsexpression"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsfilecoordinator = NSFileCoordinator.new();"];
    value = context[@"nsfilecoordinator"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nspipe = NSPipe.new();"];
    value = context[@"nspipe"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsfilehandle = NSFileHandle.alloc();"];
    value = context[@"nsfilehandle"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsfilemanager = NSFileManager.new();"];
    value = context[@"nsfilemanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdictionary = NSDictionary.new();"];
    value = context[@"nsdictionary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsfileversion = NSFileVersion.alloc();"];
    value = context[@"nsfileversion"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsfilewrapper = NSFileWrapper.new();"];
    value = context[@"nsfilewrapper"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsformatter = NSFormatter.new();"];
    value = context[@"nsformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nshttpcookie = NSHTTPCookie.alloc();"];
    value = context[@"nshttpcookie"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nshttpcookiestorage = NSHTTPCookieStorage.new();"];
    value = context[@"nshttpcookiestorage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nshashtable = NSHashTable.new();"];
    value = context[@"nshashtable"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsindexpath = NSIndexPath.new();"];
    value = context[@"nsindexpath"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsindexset = NSIndexSet.new();"];
    value = context[@"nsindexset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsinvocation = NSInvocation.alloc();"];
    value = context[@"nsinvocation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsarray = NSArray.new();"];
    value = context[@"nsarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdictionary = NSDictionary.new();"];
    value = context[@"nsdictionary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutabledictionary = NSMutableDictionary.new();"];
    value = context[@"nsmutabledictionary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsorderedset = NSOrderedSet.new();"];
    value = context[@"nsorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsset = NSSet.new();"];
    value = context[@"nsset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsarray = NSArray.new();"];
    value = context[@"nsarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsorderedset = NSOrderedSet.new();"];
    value = context[@"nsorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsset = NSSet.new();"];
    value = context[@"nsset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nslinguistictagger = NSLinguisticTagger.new();"];
    value = context[@"nslinguistictagger"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstring = NSString.new();"];
    value = context[@"nsstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nslocale = NSLocale.systemLocale();"];
    value = context[@"nslocale"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsrecursivelock = NSRecursiveLock.new();"];
    value = context[@"nsrecursivelock"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsconditionlock = NSConditionLock.new();"];
    value = context[@"nsconditionlock"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscondition = NSCondition.new();"];
    value = context[@"nscondition"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nslock = NSLock.new();"];
    value = context[@"nslock"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmaptable = NSMapTable.new();"];
    value = context[@"nsmaptable"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmetadataqueryresultgroup = NSMetadataQueryResultGroup.new();"];
    value = context[@"nsmetadataqueryresultgroup"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmetadataitem = NSMetadataItem.new();"];
    value = context[@"nsmetadataitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmetadataqueryattributevaluetuple = NSMetadataQueryAttributeValueTuple.new();"];
    value = context[@"nsmetadataqueryattributevaluetuple"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmetadataquery = NSMetadataQuery.new();"];
    value = context[@"nsmetadataquery"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmethodsignature = NSMethodSignature.alloc();"];
    value = context[@"nsmethodsignature"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnetservicebrowser = NSNetServiceBrowser.new();"];
    value = context[@"nsnetservicebrowser"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnetservice = NSNetService.new();"];
    value = context[@"nsnetservice"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnotificationcenter = NSNotificationCenter.defaultCenter();"];
    value = context[@"nsnotificationcenter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnotification = NSNotification.notificationWithNameObject('notificaion', null);"];
    value = context[@"nsnotification"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnotificationqueue = NSNotificationQueue.new();"];
    value = context[@"nsnotificationqueue"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnull = NSNull.null();"];
    value = context[@"nsnull"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsoperationqueue = NSOperationQueue.new();"];
    value = context[@"nsoperationqueue"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsoperation = NSOperation.new();"];
    value = context[@"nsoperation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsorderedset = NSOrderedSet.new();"];
    value = context[@"nsorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsorthography = NSOrthography.new();"];
    value = context[@"nsorthography"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstring = NSString.new();"];
    value = context[@"nsstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsarray = NSArray.new();"];
    value = context[@"nsarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nspointerarray = NSPointerArray.new();"];
    value = context[@"nspointerarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsport = NSPort.new();"];
    value = context[@"nsport"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsarray = NSArray.new();"];
    value = context[@"nsarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nspredicate = NSPredicate.new();"];
    value = context[@"nspredicate"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsset = NSSet.new();"];
    value = context[@"nsset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsorderedset = NSOrderedSet.new();"];
    value = context[@"nsorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableset = NSMutableSet.new();"];
    value = context[@"nsmutableset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutablearray = NSMutableArray.new();"];
    value = context[@"nsmutablearray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableorderedset = NSMutableOrderedSet.new();"];
    value = context[@"nsmutableorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsprocessinfo = NSProcessInfo.new();"];
    value = context[@"nsprocessinfo"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsprogress = NSProgress.new();"];
    value = context[@"nsprogress"];
    XCTAssertTrue(value && !value.isUndefined);
#if 0
    [context evaluateScript:@"var nspropertylistserialization = NSPropertyListSerialization.propertyListWithDataOptionsFormatError(NSData.new(), 0, null, null);"];
    value = context[@"nspropertylistserialization"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsproxy = NSProxy.alloc();"];
    value = context[@"nsproxy"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsvalue = NSValue.valueWithRange({location:0, length: 0});"];
    value = context[@"nsvalue"];
    XCTAssertTrue(value && !value.isUndefined);
#endif
    [context evaluateScript:@"var nsregularexpression = NSRegularExpression.new();"];
    value = context[@"nsregularexpression"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsrunloop = NSRunLoop.currentRunLoop();"];
    value = context[@"nsrunloop"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsscanner = NSScanner.new();"];
    value = context[@"nsscanner"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsset = NSSet.new();"];
    value = context[@"nsset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nssortdescriptor = NSSortDescriptor.new();"];
    value = context[@"nssortdescriptor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsset = NSSet.new();"];
    value = context[@"nsset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsarray = NSArray.new();"];
    value = context[@"nsarray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsorderedset = NSOrderedSet.new();"];
    value = context[@"nsorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableorderedset = NSMutableOrderedSet.new();"];
    value = context[@"nsmutableorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutablearray = NSMutableArray.new();"];
    value = context[@"nsmutablearray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstream = NSStream.new();"];
    value = context[@"nsstream"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstring = NSString.new();"];
    value = context[@"nsstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nstextcheckingresult = NSTextCheckingResult.new();"];
    value = context[@"nstextcheckingresult"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsthread = NSThread.new();"];
    value = context[@"nsthread"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nstimezone = NSTimeZone.defaultTimeZone();"];
    value = context[@"nstimezone"];
    XCTAssertTrue(value && !value.isUndefined);
#if 0
    [context evaluateScript:@"var nstimer = NSTimer.timerWithTimeIntervalTargetSelectorUserInfoRepeats(0, null, null, null, false);"];
    value = context[@"nstimer"];
    XCTAssertTrue(value && !value.isUndefined);
#endif
    [context evaluateScript:@"var nsstring = NSString.new();"];
    value = context[@"nsstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsfilesecurity = NSFileSecurity.new();"];
    value = context[@"nsfilesecurity"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurl = NSURL.alloc();"];
    value = context[@"nsurl"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlcomponents = NSURLComponents.new();"];
    value = context[@"nsurlcomponents"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscharacterset = NSCharacterSet.new();"];
    value = context[@"nscharacterset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlauthenticationchallenge = NSURLAuthenticationChallenge.alloc();"];
    value = context[@"nsurlauthenticationchallenge"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlcache = NSURLCache.new();"];
    value = context[@"nsurlcache"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscachedurlresponse = NSCachedURLResponse.new();"];
    value = context[@"nscachedurlresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlconnection = NSURLConnection.new();"];
    value = context[@"nsurlconnection"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlcredential = NSURLCredential.new();"];
    value = context[@"nsurlcredential"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlcredentialstorage = NSURLCredentialStorage.new();"];
    value = context[@"nsurlcredentialstorage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlprotectionspace = NSURLProtectionSpace.alloc();"];
    value = context[@"nsurlprotectionspace"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlprotocol = NSURLProtocol.new();"];
    value = context[@"nsurlprotocol"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlrequest = NSURLRequest.new();"];
    value = context[@"nsurlrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlresponse = NSURLResponse.new();"];
    value = context[@"nsurlresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlsession = NSURLSession.new();"];
    value = context[@"nsurlsession"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlsessiontask = NSURLSessionTask.new();"];
    value = context[@"nsurlsessiontask"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlsessionconfiguration = NSURLSessionConfiguration.new();"];
    value = context[@"nsurlsessionconfiguration"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsuuid = NSUUID.new();"];
    value = context[@"nsuuid"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsubiquitouskeyvaluestore = NSUbiquitousKeyValueStore.new();"];
    value = context[@"nsubiquitouskeyvaluestore"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsundomanager = NSUndoManager.new();"];
    value = context[@"nsundomanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsuserdefaults = NSUserDefaults.standardUserDefaults();"];
    value = context[@"nsuserdefaults"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsvaluetransformer = NSValueTransformer.new();"];
    value = context[@"nsvaluetransformer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsxmlparser = NSXMLParser.new();"];
    value = context[@"nsxmlparser"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutablearray = NSMutableArray.new();"];
    value = context[@"nsmutablearray"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableattributedstring = NSMutableAttributedString.new();"];
    value = context[@"nsmutableattributedstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsbytecountformatter = NSByteCountFormatter.new();"];
    value = context[@"nsbytecountformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutablecharacterset = NSMutableCharacterSet.new();"];
    value = context[@"nsmutablecharacterset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscomparisonpredicate = NSComparisonPredicate.new();"];
    value = context[@"nscomparisonpredicate"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscompoundpredicate = NSCompoundPredicate.new();"];
    value = context[@"nscompoundpredicate"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutabledata = NSMutableData.new();"];
    value = context[@"nsmutabledata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdateformatter = NSDateFormatter.new();"];
    value = context[@"nsdateformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdecimalnumber = NSDecimalNumber.new();"];
    value = context[@"nsdecimalnumber"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutabledictionary = NSMutableDictionary.new();"];
    value = context[@"nsmutabledictionary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdirectoryenumerator = NSDirectoryEnumerator.new();"];
    value = context[@"nsdirectoryenumerator"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableindexset = NSMutableIndexSet.new();"];
    value = context[@"nsmutableindexset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nskeyedarchiver = NSKeyedArchiver.alloc().initForWritingWithMutableData(NSMutableData.new());"];
    value = context[@"nskeyedarchiver"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nskeyedunarchiver = NSKeyedUnarchiver.alloc();"];
    value = context[@"nskeyedunarchiver"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsnumberformatter = NSNumberFormatter.new();"];
    value = context[@"nsnumberformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsinvocationoperation = NSInvocationOperation.alloc();"];
    value = context[@"nsinvocationoperation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsblockoperation = NSBlockOperation.new();"];
    value = context[@"nsblockoperation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableorderedset = NSMutableOrderedSet.new();"];
    value = context[@"nsmutableorderedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmessageport = NSMessagePort.new();"];
    value = context[@"nsmessageport"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmachport = NSMachPort.new();"];
    value = context[@"nsmachport"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsdatadetector = NSDataDetector.new();"];
    value = context[@"nsdatadetector"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableset = NSMutableSet.new();"];
    value = context[@"nsmutableset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nscountedset = NSCountedSet.new();"];
    value = context[@"nscountedset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsoutputstream = NSOutputStream.outputStreamToMemory();"];
    value = context[@"nsoutputstream"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsinputstream = NSInputStream.inputStreamWithData(NSData.new());"];
    value = context[@"nsinputstream"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutablestring = NSMutableString.new();"];
    value = context[@"nsmutablestring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nssimplecstring = NSSimpleCString.new();"];
    value = context[@"nssimplecstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableurlrequest = NSMutableURLRequest.new();"];
    value = context[@"nsmutableurlrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nshttpurlresponse = NSHTTPURLResponse.new();"];
    value = context[@"nshttpurlresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlsessiondatatask = NSURLSessionDataTask.new();"];
    value = context[@"nsurlsessiondatatask"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlsessiondownloadtask = NSURLSessionDownloadTask.new();"];
    value = context[@"nsurlsessiondownloadtask"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nspurgeabledata = NSPurgeableData.new();"];
    value = context[@"nspurgeabledata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsconstantstring = NSConstantString.new();"];
    value = context[@"nsconstantstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsurlsessionuploadtask = NSURLSessionUploadTask.new();"];
    value = context[@"nsurlsessionuploadtask"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
