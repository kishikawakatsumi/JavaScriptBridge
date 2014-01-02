#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreDataTests : XCTestCase

@end

@implementation JSBCoreDataTests

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
    [context addScriptingSupport:@"CoreData"];
    
    XCTAssertNotNil(context);
//    JSValue *value = nil;
//    
//    [context evaluateScript:@"var nsatomicstorecachenode = NSAtomicStoreCacheNode.new();"];
//    value = context[@"nsatomicstorecachenode"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsentitydescription = NSEntityDescription.new();"];
//    value = context[@"nsentitydescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsentitymapping = NSEntityMapping.new();"];
//    value = context[@"nsentitymapping"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsentitymigrationpolicy = NSEntityMigrationPolicy.new();"];
//    value = context[@"nsentitymigrationpolicy"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsfetchedresultscontroller = NSFetchedResultsController.new();"];
//    value = context[@"nsfetchedresultscontroller"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsincrementalstorenode = NSIncrementalStoreNode.new();"];
//    value = context[@"nsincrementalstorenode"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmanagedobject = NSManagedObject.new();"];
//    value = context[@"nsmanagedobject"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmanagedobjectcontext = NSManagedObjectContext.new();"];
//    value = context[@"nsmanagedobjectcontext"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmanagedobjectid = NSManagedObjectID.new();"];
//    value = context[@"nsmanagedobjectid"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmanagedobjectmodel = NSManagedObjectModel.new();"];
//    value = context[@"nsmanagedobjectmodel"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmappingmodel = NSMappingModel.new();"];
//    value = context[@"nsmappingmodel"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmergeconflict = NSMergeConflict.new();"];
//    value = context[@"nsmergeconflict"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmergepolicy = NSMergePolicy.new();"];
//    value = context[@"nsmergepolicy"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsmigrationmanager = NSMigrationManager.new();"];
//    value = context[@"nsmigrationmanager"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nspersistentstore = NSPersistentStore.new();"];
//    value = context[@"nspersistentstore"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nspersistentstorecoordinator = NSPersistentStoreCoordinator.new();"];
//    value = context[@"nspersistentstorecoordinator"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nspersistentstorerequest = NSPersistentStoreRequest.new();"];
//    value = context[@"nspersistentstorerequest"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nspropertydescription = NSPropertyDescription.new();"];
//    value = context[@"nspropertydescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nspropertymapping = NSPropertyMapping.new();"];
//    value = context[@"nspropertymapping"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsatomicstore = NSAtomicStore.new();"];
//    value = context[@"nsatomicstore"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsattributedescription = NSAttributeDescription.new();"];
//    value = context[@"nsattributedescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsexpressiondescription = NSExpressionDescription.new();"];
//    value = context[@"nsexpressiondescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsfetchrequest = NSFetchRequest.new();"];
//    value = context[@"nsfetchrequest"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsfetchrequestexpression = NSFetchRequestExpression.new();"];
//    value = context[@"nsfetchrequestexpression"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsfetchedpropertydescription = NSFetchedPropertyDescription.new();"];
//    value = context[@"nsfetchedpropertydescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsincrementalstore = NSIncrementalStore.new();"];
//    value = context[@"nsincrementalstore"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsrelationshipdescription = NSRelationshipDescription.new();"];
//    value = context[@"nsrelationshipdescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nssavechangesrequest = NSSaveChangesRequest.new();"];
//    value = context[@"nssavechangesrequest"];
//    XCTAssertTrue(value && !value.isUndefined);

}

@end
