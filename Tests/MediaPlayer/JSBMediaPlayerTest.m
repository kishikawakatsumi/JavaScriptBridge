#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBMediaPlayerTests : XCTestCase

@end

@implementation JSBMediaPlayerTests

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
    [context addScriptingSupport:@"MediaPlayer"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var mpmediaentity = MPMediaEntity.new();"];
    value = context[@"mpmediaentity"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaitemartwork = MPMediaItemArtwork.new();"];
    value = context[@"mpmediaitemartwork"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmedialibrary = MPMediaLibrary.new();"];
    value = context[@"mpmedialibrary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediapredicate = MPMediaPredicate.new();"];
    value = context[@"mpmediapredicate"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaitem = MPMediaItem.new();"];
    value = context[@"mpmediaitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaquery = MPMediaQuery.new();"];
    value = context[@"mpmediaquery"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaquerysection = MPMediaQuerySection.alloc();"];
    value = context[@"mpmediaquerysection"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieaccesslog = MPMovieAccessLog.new();"];
    value = context[@"mpmovieaccesslog"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieerrorlog = MPMovieErrorLog.new();"];
    value = context[@"mpmovieerrorlog"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieaccesslogevent = MPMovieAccessLogEvent.new();"];
    value = context[@"mpmovieaccesslogevent"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieerrorlogevent = MPMovieErrorLogEvent.new();"];
    value = context[@"mpmovieerrorlogevent"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mptimedmetadata = MPTimedMetadata.alloc();"];
    value = context[@"mptimedmetadata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieplayercontroller = MPMoviePlayerController.new();"];
    value = context[@"mpmovieplayercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmusicplayercontroller = MPMusicPlayerController.new();"];
    value = context[@"mpmusicplayercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpnowplayinginfocenter = MPNowPlayingInfoCenter.defaultCenter();"];
    value = context[@"mpnowplayinginfocenter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaitem = MPMediaItem.new();"];
    value = context[@"mpmediaitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaitemcollection = MPMediaItemCollection.collectionWithItems([MPMediaItem.new()]);"];
    value = context[@"mpmediaitemcollection"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediapickercontroller = MPMediaPickerController.new();"];
    value = context[@"mpmediapickercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediapropertypredicate = MPMediaPropertyPredicate.new();"];
    value = context[@"mpmediapropertypredicate"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieplayerviewcontroller = MPMoviePlayerViewController.new();"];
    value = context[@"mpmovieplayerviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpvolumeview = MPVolumeView.new();"];
    value = context[@"mpvolumeview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmediaplaylist = MPMediaPlaylist.collectionWithItems([MPMediaItem.new()]);"];
    value = context[@"mpmediaplaylist"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
