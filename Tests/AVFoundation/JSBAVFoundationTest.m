#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBAVFoundationTests : XCTestCase

@end

@implementation JSBAVFoundationTests

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
    [context addScriptingSupport:@"AVFoundation"];
    
    XCTAssertNotNil(context);
//    JSValue *value = nil;
//    
//    [context evaluateScript:@"var avasset = AVAsset.new();"];
//    value = context[@"avasset"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetexportsession = AVAssetExportSession.new();"];
//    value = context[@"avassetexportsession"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetimagegenerator = AVAssetImageGenerator.new();"];
//    value = context[@"avassetimagegenerator"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetreader = AVAssetReader.new();"];
//    value = context[@"avassetreader"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetreaderoutput = AVAssetReaderOutput.new();"];
//    value = context[@"avassetreaderoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetresourceloader = AVAssetResourceLoader.new();"];
//    value = context[@"avassetresourceloader"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetresourceloadingrequest = AVAssetResourceLoadingRequest.new();"];
//    value = context[@"avassetresourceloadingrequest"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetresourceloadingcontentinformationrequest = AVAssetResourceLoadingContentInformationRequest.new();"];
//    value = context[@"avassetresourceloadingcontentinformationrequest"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetresourceloadingdatarequest = AVAssetResourceLoadingDataRequest.new();"];
//    value = context[@"avassetresourceloadingdatarequest"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassettrack = AVAssetTrack.new();"];
//    value = context[@"avassettrack"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassettrackgroup = AVAssetTrackGroup.new();"];
//    value = context[@"avassettrackgroup"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassettracksegment = AVAssetTrackSegment.new();"];
//    value = context[@"avassettracksegment"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetwriter = AVAssetWriter.new();"];
//    value = context[@"avassetwriter"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetwriterinput = AVAssetWriterInput.new();"];
//    value = context[@"avassetwriterinput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetwriterinputpixelbufferadaptor = AVAssetWriterInputPixelBufferAdaptor.new();"];
//    value = context[@"avassetwriterinputpixelbufferadaptor"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiomix = AVAudioMix.new();"];
//    value = context[@"avaudiomix"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiomixinputparameters = AVAudioMixInputParameters.new();"];
//    value = context[@"avaudiomixinputparameters"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudioplayer = AVAudioPlayer.new();"];
//    value = context[@"avaudioplayer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiorecorder = AVAudioRecorder.new();"];
//    value = context[@"avaudiorecorder"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiosessionroutedescription = AVAudioSessionRouteDescription.new();"];
//    value = context[@"avaudiosessionroutedescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiosessionchanneldescription = AVAudioSessionChannelDescription.new();"];
//    value = context[@"avaudiosessionchanneldescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiosessionportdescription = AVAudioSessionPortDescription.new();"];
//    value = context[@"avaudiosessionportdescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiosession = AVAudioSession.new();"];
//    value = context[@"avaudiosession"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avaudiosessiondatasourcedescription = AVAudioSessionDataSourceDescription.new();"];
//    value = context[@"avaudiosessiondatasourcedescription"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturedeviceformat = AVCaptureDeviceFormat.new();"];
//    value = context[@"avcapturedeviceformat"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturedevice = AVCaptureDevice.new();"];
//    value = context[@"avcapturedevice"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avframeraterange = AVFrameRateRange.new();"];
//    value = context[@"avframeraterange"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcaptureinput = AVCaptureInput.new();"];
//    value = context[@"avcaptureinput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcaptureinputport = AVCaptureInputPort.new();"];
//    value = context[@"avcaptureinputport"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcaptureoutput = AVCaptureOutput.new();"];
//    value = context[@"avcaptureoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcaptureconnection = AVCaptureConnection.new();"];
//    value = context[@"avcaptureconnection"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturesession = AVCaptureSession.new();"];
//    value = context[@"avcapturesession"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcaptureaudiochannel = AVCaptureAudioChannel.new();"];
//    value = context[@"avcaptureaudiochannel"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmediaselectionoption = AVMediaSelectionOption.new();"];
//    value = context[@"avmediaselectionoption"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmediaselectiongroup = AVMediaSelectionGroup.new();"];
//    value = context[@"avmediaselectiongroup"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmetadataitemfilter = AVMetadataItemFilter.new();"];
//    value = context[@"avmetadataitemfilter"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmetadataitem = AVMetadataItem.new();"];
//    value = context[@"avmetadataitem"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmetadataobject = AVMetadataObject.new();"];
//    value = context[@"avmetadataobject"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avoutputsettingsassistant = AVOutputSettingsAssistant.new();"];
//    value = context[@"avoutputsettingsassistant"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayer = AVPlayer.new();"];
//    value = context[@"avplayer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemaccesslog = AVPlayerItemAccessLog.new();"];
//    value = context[@"avplayeritemaccesslog"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritem = AVPlayerItem.new();"];
//    value = context[@"avplayeritem"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemaccesslogevent = AVPlayerItemAccessLogEvent.new();"];
//    value = context[@"avplayeritemaccesslogevent"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemerrorlog = AVPlayerItemErrorLog.new();"];
//    value = context[@"avplayeritemerrorlog"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemerrorlogevent = AVPlayerItemErrorLogEvent.new();"];
//    value = context[@"avplayeritemerrorlogevent"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemoutput = AVPlayerItemOutput.new();"];
//    value = context[@"avplayeritemoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemtrack = AVPlayerItemTrack.new();"];
//    value = context[@"avplayeritemtrack"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayermediaselectioncriteria = AVPlayerMediaSelectionCriteria.new();"];
//    value = context[@"avplayermediaselectioncriteria"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avspeechsynthesisvoice = AVSpeechSynthesisVoice.new();"];
//    value = context[@"avspeechsynthesisvoice"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avspeechutterance = AVSpeechUtterance.new();"];
//    value = context[@"avspeechutterance"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avspeechsynthesizer = AVSpeechSynthesizer.new();"];
//    value = context[@"avspeechsynthesizer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avtextstylerule = AVTextStyleRule.new();"];
//    value = context[@"avtextstylerule"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nsvalue = NSValue.new();"];
//    value = context[@"nsvalue"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var nscoder = NSCoder.new();"];
//    value = context[@"nscoder"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avtimedmetadatagroup = AVTimedMetadataGroup.new();"];
//    value = context[@"avtimedmetadatagroup"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avvideocompositionrendercontext = AVVideoCompositionRenderContext.new();"];
//    value = context[@"avvideocompositionrendercontext"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avasynchronousvideocompositionrequest = AVAsynchronousVideoCompositionRequest.new();"];
//    value = context[@"avasynchronousvideocompositionrequest"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avvideocompositioninstruction = AVVideoCompositionInstruction.new();"];
//    value = context[@"avvideocompositioninstruction"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avvideocompositionlayerinstruction = AVVideoCompositionLayerInstruction.new();"];
//    value = context[@"avvideocompositionlayerinstruction"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avvideocompositioncoreanimationtool = AVVideoCompositionCoreAnimationTool.new();"];
//    value = context[@"avvideocompositioncoreanimationtool"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avvideocomposition = AVVideoComposition.new();"];
//    value = context[@"avvideocomposition"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avasset = AVAsset.new();"];
//    value = context[@"avasset"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avurlasset = AVURLAsset.new();"];
//    value = context[@"avurlasset"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetreadertrackoutput = AVAssetReaderTrackOutput.new();"];
//    value = context[@"avassetreadertrackoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetreadervideocompositionoutput = AVAssetReaderVideoCompositionOutput.new();"];
//    value = context[@"avassetreadervideocompositionoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetreaderaudiomixoutput = AVAssetReaderAudioMixOutput.new();"];
//    value = context[@"avassetreaderaudiomixoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avassetwriterinputgroup = AVAssetWriterInputGroup.new();"];
//    value = context[@"avassetwriterinputgroup"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutableaudiomixinputparameters = AVMutableAudioMixInputParameters.new();"];
//    value = context[@"avmutableaudiomixinputparameters"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutableaudiomix = AVMutableAudioMix.new();"];
//    value = context[@"avmutableaudiomix"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturedeviceinput = AVCaptureDeviceInput.new();"];
//    value = context[@"avcapturedeviceinput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturestillimageoutput = AVCaptureStillImageOutput.new();"];
//    value = context[@"avcapturestillimageoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturemetadataoutput = AVCaptureMetadataOutput.new();"];
//    value = context[@"avcapturemetadataoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcaptureaudiodataoutput = AVCaptureAudioDataOutput.new();"];
//    value = context[@"avcaptureaudiodataoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturefileoutput = AVCaptureFileOutput.new();"];
//    value = context[@"avcapturefileoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturevideodataoutput = AVCaptureVideoDataOutput.new();"];
//    value = context[@"avcapturevideodataoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturevideopreviewlayer = AVCaptureVideoPreviewLayer.new();"];
//    value = context[@"avcapturevideopreviewlayer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcomposition = AVComposition.new();"];
//    value = context[@"avcomposition"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcompositiontrack = AVCompositionTrack.new();"];
//    value = context[@"avcompositiontrack"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcompositiontracksegment = AVCompositionTrackSegment.new();"];
//    value = context[@"avcompositiontracksegment"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutablemetadataitem = AVMutableMetadataItem.new();"];
//    value = context[@"avmutablemetadataitem"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmetadatafaceobject = AVMetadataFaceObject.new();"];
//    value = context[@"avmetadatafaceobject"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmetadatamachinereadablecodeobject = AVMetadataMachineReadableCodeObject.new();"];
//    value = context[@"avmetadatamachinereadablecodeobject"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avqueueplayer = AVQueuePlayer.new();"];
//    value = context[@"avqueueplayer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemvideooutput = AVPlayerItemVideoOutput.new();"];
//    value = context[@"avplayeritemvideooutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayeritemlegibleoutput = AVPlayerItemLegibleOutput.new();"];
//    value = context[@"avplayeritemlegibleoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avplayerlayer = AVPlayerLayer.new();"];
//    value = context[@"avplayerlayer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avsynchronizedlayer = AVSynchronizedLayer.new();"];
//    value = context[@"avsynchronizedlayer"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutabletimedmetadatagroup = AVMutableTimedMetadataGroup.new();"];
//    value = context[@"avmutabletimedmetadatagroup"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutablevideocomposition = AVMutableVideoComposition.new();"];
//    value = context[@"avmutablevideocomposition"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutablevideocompositioninstruction = AVMutableVideoCompositionInstruction.new();"];
//    value = context[@"avmutablevideocompositioninstruction"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutablevideocompositionlayerinstruction = AVMutableVideoCompositionLayerInstruction.new();"];
//    value = context[@"avmutablevideocompositionlayerinstruction"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avcapturemoviefileoutput = AVCaptureMovieFileOutput.new();"];
//    value = context[@"avcapturemoviefileoutput"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutablecomposition = AVMutableComposition.new();"];
//    value = context[@"avmutablecomposition"];
//    XCTAssertTrue(value && !value.isUndefined);
//
//    [context evaluateScript:@"var avmutablecompositiontrack = AVMutableCompositionTrack.new();"];
//    value = context[@"avmutablecompositiontrack"];
//    XCTAssertTrue(value && !value.isUndefined);

}

@end
