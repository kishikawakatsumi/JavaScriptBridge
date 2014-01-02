#import "JSBAVFoundation.h"
#import "JSBAVAsset.h"
#import "JSBAVAssetExportSession.h"
#import "JSBAVAssetImageGenerator.h"
#import "JSBAVAssetReader.h"
#import "JSBAVAssetReaderOutput.h"
#import "JSBAVAssetResourceLoader.h"
#import "JSBAVAssetResourceLoadingRequest.h"
#import "JSBAVAssetResourceLoadingContentInformationRequest.h"
#import "JSBAVAssetResourceLoadingDataRequest.h"
#import "JSBAVAssetTrack.h"
#import "JSBAVAssetTrackGroup.h"
#import "JSBAVAssetTrackSegment.h"
#import "JSBAVAssetWriter.h"
#import "JSBAVAssetWriterInput.h"
#import "JSBAVAssetWriterInputPixelBufferAdaptor.h"
#import "JSBAVAudioMix.h"
#import "JSBAVAudioMixInputParameters.h"
#import "JSBAVAudioPlayer.h"
#import "JSBAVAudioRecorder.h"
#import "JSBAVAudioSessionRouteDescription.h"
#import "JSBAVAudioSessionChannelDescription.h"
#import "JSBAVAudioSessionPortDescription.h"
#import "JSBAVAudioSession.h"
#import "JSBAVAudioSessionDataSourceDescription.h"
#import "JSBAVCaptureDeviceFormat.h"
#import "JSBAVCaptureDevice.h"
#import "JSBAVFrameRateRange.h"
#import "JSBAVCaptureInput.h"
#import "JSBAVCaptureInputPort.h"
#import "JSBAVCaptureOutput.h"
#import "JSBAVCaptureConnection.h"
#import "JSBAVCaptureSession.h"
#import "JSBAVCaptureAudioChannel.h"
#import "JSBAVMediaSelectionOption.h"
#import "JSBAVMediaSelectionGroup.h"
#import "JSBAVMetadataItemFilter.h"
#import "JSBAVMetadataItem.h"
#import "JSBAVMetadataObject.h"
#import "JSBAVOutputSettingsAssistant.h"
#import "JSBAVPlayer.h"
#import "JSBAVPlayerItemAccessLog.h"
#import "JSBAVPlayerItem.h"
#import "JSBAVPlayerItemAccessLogEvent.h"
#import "JSBAVPlayerItemErrorLog.h"
#import "JSBAVPlayerItemErrorLogEvent.h"
#import "JSBAVPlayerItemOutput.h"
#import "JSBAVPlayerItemTrack.h"
#import "JSBAVPlayerMediaSelectionCriteria.h"
#import "JSBAVSpeechSynthesisVoice.h"
#import "JSBAVSpeechUtterance.h"
#import "JSBAVSpeechSynthesizer.h"
#import "JSBAVTextStyleRule.h"
#import "JSBNSValue.h"
#import "JSBNSCoder.h"
#import "JSBAVTimedMetadataGroup.h"
#import "JSBAVVideoCompositionRenderContext.h"
#import "JSBAVAsynchronousVideoCompositionRequest.h"
#import "JSBAVVideoCompositionInstruction.h"
#import "JSBAVVideoCompositionLayerInstruction.h"
#import "JSBAVVideoCompositionCoreAnimationTool.h"
#import "JSBAVVideoComposition.h"
#import "JSBAVURLAsset.h"
#import "JSBAVAssetReaderTrackOutput.h"
#import "JSBAVAssetReaderVideoCompositionOutput.h"
#import "JSBAVAssetReaderAudioMixOutput.h"
#import "JSBAVAssetWriterInputGroup.h"
#import "JSBAVMutableAudioMixInputParameters.h"
#import "JSBAVMutableAudioMix.h"
#import "JSBAVCaptureDeviceInput.h"
#import "JSBAVCaptureStillImageOutput.h"
#import "JSBAVCaptureMetadataOutput.h"
#import "JSBAVCaptureAudioDataOutput.h"
#import "JSBAVCaptureFileOutput.h"
#import "JSBAVCaptureVideoDataOutput.h"
#import "JSBAVCaptureVideoPreviewLayer.h"
#import "JSBAVComposition.h"
#import "JSBAVCompositionTrack.h"
#import "JSBAVCompositionTrackSegment.h"
#import "JSBAVMutableMetadataItem.h"
#import "JSBAVMetadataFaceObject.h"
#import "JSBAVMetadataMachineReadableCodeObject.h"
#import "JSBAVQueuePlayer.h"
#import "JSBAVPlayerItemVideoOutput.h"
#import "JSBAVPlayerItemLegibleOutput.h"
#import "JSBAVPlayerLayer.h"
#import "JSBAVSynchronizedLayer.h"
#import "JSBAVMutableTimedMetadataGroup.h"
#import "JSBAVMutableVideoComposition.h"
#import "JSBAVMutableVideoCompositionInstruction.h"
#import "JSBAVMutableVideoCompositionLayerInstruction.h"
#import "JSBAVCaptureMovieFileOutput.h"
#import "JSBAVMutableComposition.h"
#import "JSBAVMutableCompositionTrack.h"

@import ObjectiveC;

@implementation JSBAVFoundation

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([AVAsset class], @protocol(JSBAVAsset));
    context[@"AVAsset"] = [AVAsset class];

    class_addProtocol([AVAssetExportSession class], @protocol(JSBAVAssetExportSession));
    context[@"AVAssetExportSession"] = [AVAssetExportSession class];

    class_addProtocol([AVAssetImageGenerator class], @protocol(JSBAVAssetImageGenerator));
    context[@"AVAssetImageGenerator"] = [AVAssetImageGenerator class];

    class_addProtocol([AVAssetReader class], @protocol(JSBAVAssetReader));
    context[@"AVAssetReader"] = [AVAssetReader class];

    class_addProtocol([AVAssetReaderOutput class], @protocol(JSBAVAssetReaderOutput));
    context[@"AVAssetReaderOutput"] = [AVAssetReaderOutput class];

    class_addProtocol([AVAssetResourceLoader class], @protocol(JSBAVAssetResourceLoader));
    context[@"AVAssetResourceLoader"] = [AVAssetResourceLoader class];

    class_addProtocol([AVAssetResourceLoadingRequest class], @protocol(JSBAVAssetResourceLoadingRequest));
    context[@"AVAssetResourceLoadingRequest"] = [AVAssetResourceLoadingRequest class];

    class_addProtocol([AVAssetResourceLoadingContentInformationRequest class], @protocol(JSBAVAssetResourceLoadingContentInformationRequest));
    context[@"AVAssetResourceLoadingContentInformationRequest"] = [AVAssetResourceLoadingContentInformationRequest class];

    class_addProtocol([AVAssetResourceLoadingDataRequest class], @protocol(JSBAVAssetResourceLoadingDataRequest));
    context[@"AVAssetResourceLoadingDataRequest"] = [AVAssetResourceLoadingDataRequest class];

    class_addProtocol([AVAssetTrack class], @protocol(JSBAVAssetTrack));
    context[@"AVAssetTrack"] = [AVAssetTrack class];

    class_addProtocol([AVAssetTrackGroup class], @protocol(JSBAVAssetTrackGroup));
    context[@"AVAssetTrackGroup"] = [AVAssetTrackGroup class];

    class_addProtocol([AVAssetTrackSegment class], @protocol(JSBAVAssetTrackSegment));
    context[@"AVAssetTrackSegment"] = [AVAssetTrackSegment class];

    class_addProtocol([AVAssetWriter class], @protocol(JSBAVAssetWriter));
    context[@"AVAssetWriter"] = [AVAssetWriter class];

    class_addProtocol([AVAssetWriterInput class], @protocol(JSBAVAssetWriterInput));
    context[@"AVAssetWriterInput"] = [AVAssetWriterInput class];

    class_addProtocol([AVAssetWriterInputPixelBufferAdaptor class], @protocol(JSBAVAssetWriterInputPixelBufferAdaptor));
    context[@"AVAssetWriterInputPixelBufferAdaptor"] = [AVAssetWriterInputPixelBufferAdaptor class];

    class_addProtocol([AVAudioMix class], @protocol(JSBAVAudioMix));
    context[@"AVAudioMix"] = [AVAudioMix class];

    class_addProtocol([AVAudioMixInputParameters class], @protocol(JSBAVAudioMixInputParameters));
    context[@"AVAudioMixInputParameters"] = [AVAudioMixInputParameters class];

    class_addProtocol([AVAudioPlayer class], @protocol(JSBAVAudioPlayer));
    context[@"AVAudioPlayer"] = [AVAudioPlayer class];

    class_addProtocol([AVAudioRecorder class], @protocol(JSBAVAudioRecorder));
    context[@"AVAudioRecorder"] = [AVAudioRecorder class];

    class_addProtocol([AVAudioSessionRouteDescription class], @protocol(JSBAVAudioSessionRouteDescription));
    context[@"AVAudioSessionRouteDescription"] = [AVAudioSessionRouteDescription class];

    class_addProtocol([AVAudioSessionChannelDescription class], @protocol(JSBAVAudioSessionChannelDescription));
    context[@"AVAudioSessionChannelDescription"] = [AVAudioSessionChannelDescription class];

    class_addProtocol([AVAudioSessionPortDescription class], @protocol(JSBAVAudioSessionPortDescription));
    context[@"AVAudioSessionPortDescription"] = [AVAudioSessionPortDescription class];

    class_addProtocol([AVAudioSession class], @protocol(JSBAVAudioSession));
    context[@"AVAudioSession"] = [AVAudioSession class];

    class_addProtocol([AVAudioSessionDataSourceDescription class], @protocol(JSBAVAudioSessionDataSourceDescription));
    context[@"AVAudioSessionDataSourceDescription"] = [AVAudioSessionDataSourceDescription class];

    class_addProtocol([AVCaptureDeviceFormat class], @protocol(JSBAVCaptureDeviceFormat));
    context[@"AVCaptureDeviceFormat"] = [AVCaptureDeviceFormat class];

    class_addProtocol([AVCaptureDevice class], @protocol(JSBAVCaptureDevice));
    context[@"AVCaptureDevice"] = [AVCaptureDevice class];

    class_addProtocol([AVFrameRateRange class], @protocol(JSBAVFrameRateRange));
    context[@"AVFrameRateRange"] = [AVFrameRateRange class];

    class_addProtocol([AVCaptureInput class], @protocol(JSBAVCaptureInput));
    context[@"AVCaptureInput"] = [AVCaptureInput class];

    class_addProtocol([AVCaptureInputPort class], @protocol(JSBAVCaptureInputPort));
    context[@"AVCaptureInputPort"] = [AVCaptureInputPort class];

    class_addProtocol([AVCaptureOutput class], @protocol(JSBAVCaptureOutput));
    context[@"AVCaptureOutput"] = [AVCaptureOutput class];

    class_addProtocol([AVCaptureConnection class], @protocol(JSBAVCaptureConnection));
    context[@"AVCaptureConnection"] = [AVCaptureConnection class];

    class_addProtocol([AVCaptureSession class], @protocol(JSBAVCaptureSession));
    context[@"AVCaptureSession"] = [AVCaptureSession class];

    class_addProtocol([AVCaptureAudioChannel class], @protocol(JSBAVCaptureAudioChannel));
    context[@"AVCaptureAudioChannel"] = [AVCaptureAudioChannel class];

    class_addProtocol([AVMediaSelectionOption class], @protocol(JSBAVMediaSelectionOption));
    context[@"AVMediaSelectionOption"] = [AVMediaSelectionOption class];

    class_addProtocol([AVMediaSelectionGroup class], @protocol(JSBAVMediaSelectionGroup));
    context[@"AVMediaSelectionGroup"] = [AVMediaSelectionGroup class];

    class_addProtocol([AVMetadataItemFilter class], @protocol(JSBAVMetadataItemFilter));
    context[@"AVMetadataItemFilter"] = [AVMetadataItemFilter class];

    class_addProtocol([AVMetadataItem class], @protocol(JSBAVMetadataItem));
    context[@"AVMetadataItem"] = [AVMetadataItem class];

    class_addProtocol([AVMetadataObject class], @protocol(JSBAVMetadataObject));
    context[@"AVMetadataObject"] = [AVMetadataObject class];

    class_addProtocol([AVOutputSettingsAssistant class], @protocol(JSBAVOutputSettingsAssistant));
    context[@"AVOutputSettingsAssistant"] = [AVOutputSettingsAssistant class];

    class_addProtocol([AVPlayer class], @protocol(JSBAVPlayer));
    context[@"AVPlayer"] = [AVPlayer class];

    class_addProtocol([AVPlayerItemAccessLog class], @protocol(JSBAVPlayerItemAccessLog));
    context[@"AVPlayerItemAccessLog"] = [AVPlayerItemAccessLog class];

    class_addProtocol([AVPlayerItem class], @protocol(JSBAVPlayerItem));
    context[@"AVPlayerItem"] = [AVPlayerItem class];

    class_addProtocol([AVPlayerItemAccessLogEvent class], @protocol(JSBAVPlayerItemAccessLogEvent));
    context[@"AVPlayerItemAccessLogEvent"] = [AVPlayerItemAccessLogEvent class];

    class_addProtocol([AVPlayerItemErrorLog class], @protocol(JSBAVPlayerItemErrorLog));
    context[@"AVPlayerItemErrorLog"] = [AVPlayerItemErrorLog class];

    class_addProtocol([AVPlayerItemErrorLogEvent class], @protocol(JSBAVPlayerItemErrorLogEvent));
    context[@"AVPlayerItemErrorLogEvent"] = [AVPlayerItemErrorLogEvent class];

    class_addProtocol([AVPlayerItemOutput class], @protocol(JSBAVPlayerItemOutput));
    context[@"AVPlayerItemOutput"] = [AVPlayerItemOutput class];

    class_addProtocol([AVPlayerItemTrack class], @protocol(JSBAVPlayerItemTrack));
    context[@"AVPlayerItemTrack"] = [AVPlayerItemTrack class];

    class_addProtocol([AVPlayerMediaSelectionCriteria class], @protocol(JSBAVPlayerMediaSelectionCriteria));
    context[@"AVPlayerMediaSelectionCriteria"] = [AVPlayerMediaSelectionCriteria class];

    class_addProtocol([AVSpeechSynthesisVoice class], @protocol(JSBAVSpeechSynthesisVoice));
    context[@"AVSpeechSynthesisVoice"] = [AVSpeechSynthesisVoice class];

    class_addProtocol([AVSpeechUtterance class], @protocol(JSBAVSpeechUtterance));
    context[@"AVSpeechUtterance"] = [AVSpeechUtterance class];

    class_addProtocol([AVSpeechSynthesizer class], @protocol(JSBAVSpeechSynthesizer));
    context[@"AVSpeechSynthesizer"] = [AVSpeechSynthesizer class];

    class_addProtocol([AVTextStyleRule class], @protocol(JSBAVTextStyleRule));
    context[@"AVTextStyleRule"] = [AVTextStyleRule class];

    class_addProtocol([NSValue class], @protocol(JSBNSValue));
    context[@"NSValue"] = [NSValue class];

    class_addProtocol([NSCoder class], @protocol(JSBNSCoder));
    context[@"NSCoder"] = [NSCoder class];

    class_addProtocol([AVTimedMetadataGroup class], @protocol(JSBAVTimedMetadataGroup));
    context[@"AVTimedMetadataGroup"] = [AVTimedMetadataGroup class];

    class_addProtocol([AVVideoCompositionRenderContext class], @protocol(JSBAVVideoCompositionRenderContext));
    context[@"AVVideoCompositionRenderContext"] = [AVVideoCompositionRenderContext class];

    class_addProtocol([AVAsynchronousVideoCompositionRequest class], @protocol(JSBAVAsynchronousVideoCompositionRequest));
    context[@"AVAsynchronousVideoCompositionRequest"] = [AVAsynchronousVideoCompositionRequest class];

    class_addProtocol([AVVideoCompositionInstruction class], @protocol(JSBAVVideoCompositionInstruction));
    context[@"AVVideoCompositionInstruction"] = [AVVideoCompositionInstruction class];

    class_addProtocol([AVVideoCompositionLayerInstruction class], @protocol(JSBAVVideoCompositionLayerInstruction));
    context[@"AVVideoCompositionLayerInstruction"] = [AVVideoCompositionLayerInstruction class];

    class_addProtocol([AVVideoCompositionCoreAnimationTool class], @protocol(JSBAVVideoCompositionCoreAnimationTool));
    context[@"AVVideoCompositionCoreAnimationTool"] = [AVVideoCompositionCoreAnimationTool class];

    class_addProtocol([AVVideoComposition class], @protocol(JSBAVVideoComposition));
    context[@"AVVideoComposition"] = [AVVideoComposition class];

    class_addProtocol([AVURLAsset class], @protocol(JSBAVURLAsset));
    context[@"AVURLAsset"] = [AVURLAsset class];

    class_addProtocol([AVAssetReaderTrackOutput class], @protocol(JSBAVAssetReaderTrackOutput));
    context[@"AVAssetReaderTrackOutput"] = [AVAssetReaderTrackOutput class];

    class_addProtocol([AVAssetReaderVideoCompositionOutput class], @protocol(JSBAVAssetReaderVideoCompositionOutput));
    context[@"AVAssetReaderVideoCompositionOutput"] = [AVAssetReaderVideoCompositionOutput class];

    class_addProtocol([AVAssetReaderAudioMixOutput class], @protocol(JSBAVAssetReaderAudioMixOutput));
    context[@"AVAssetReaderAudioMixOutput"] = [AVAssetReaderAudioMixOutput class];

    class_addProtocol([AVAssetWriterInputGroup class], @protocol(JSBAVAssetWriterInputGroup));
    context[@"AVAssetWriterInputGroup"] = [AVAssetWriterInputGroup class];

    class_addProtocol([AVMutableAudioMixInputParameters class], @protocol(JSBAVMutableAudioMixInputParameters));
    context[@"AVMutableAudioMixInputParameters"] = [AVMutableAudioMixInputParameters class];

    class_addProtocol([AVMutableAudioMix class], @protocol(JSBAVMutableAudioMix));
    context[@"AVMutableAudioMix"] = [AVMutableAudioMix class];

    class_addProtocol([AVCaptureDeviceInput class], @protocol(JSBAVCaptureDeviceInput));
    context[@"AVCaptureDeviceInput"] = [AVCaptureDeviceInput class];

    class_addProtocol([AVCaptureStillImageOutput class], @protocol(JSBAVCaptureStillImageOutput));
    context[@"AVCaptureStillImageOutput"] = [AVCaptureStillImageOutput class];

    class_addProtocol([AVCaptureMetadataOutput class], @protocol(JSBAVCaptureMetadataOutput));
    context[@"AVCaptureMetadataOutput"] = [AVCaptureMetadataOutput class];

    class_addProtocol([AVCaptureAudioDataOutput class], @protocol(JSBAVCaptureAudioDataOutput));
    context[@"AVCaptureAudioDataOutput"] = [AVCaptureAudioDataOutput class];

    class_addProtocol([AVCaptureFileOutput class], @protocol(JSBAVCaptureFileOutput));
    context[@"AVCaptureFileOutput"] = [AVCaptureFileOutput class];

    class_addProtocol([AVCaptureVideoDataOutput class], @protocol(JSBAVCaptureVideoDataOutput));
    context[@"AVCaptureVideoDataOutput"] = [AVCaptureVideoDataOutput class];

    class_addProtocol([AVCaptureVideoPreviewLayer class], @protocol(JSBAVCaptureVideoPreviewLayer));
    context[@"AVCaptureVideoPreviewLayer"] = [AVCaptureVideoPreviewLayer class];

    class_addProtocol([AVComposition class], @protocol(JSBAVComposition));
    context[@"AVComposition"] = [AVComposition class];

    class_addProtocol([AVCompositionTrack class], @protocol(JSBAVCompositionTrack));
    context[@"AVCompositionTrack"] = [AVCompositionTrack class];

    class_addProtocol([AVCompositionTrackSegment class], @protocol(JSBAVCompositionTrackSegment));
    context[@"AVCompositionTrackSegment"] = [AVCompositionTrackSegment class];

    class_addProtocol([AVMutableMetadataItem class], @protocol(JSBAVMutableMetadataItem));
    context[@"AVMutableMetadataItem"] = [AVMutableMetadataItem class];

    class_addProtocol([AVMetadataFaceObject class], @protocol(JSBAVMetadataFaceObject));
    context[@"AVMetadataFaceObject"] = [AVMetadataFaceObject class];

    class_addProtocol([AVMetadataMachineReadableCodeObject class], @protocol(JSBAVMetadataMachineReadableCodeObject));
    context[@"AVMetadataMachineReadableCodeObject"] = [AVMetadataMachineReadableCodeObject class];

    class_addProtocol([AVQueuePlayer class], @protocol(JSBAVQueuePlayer));
    context[@"AVQueuePlayer"] = [AVQueuePlayer class];

    class_addProtocol([AVPlayerItemVideoOutput class], @protocol(JSBAVPlayerItemVideoOutput));
    context[@"AVPlayerItemVideoOutput"] = [AVPlayerItemVideoOutput class];

    class_addProtocol([AVPlayerItemLegibleOutput class], @protocol(JSBAVPlayerItemLegibleOutput));
    context[@"AVPlayerItemLegibleOutput"] = [AVPlayerItemLegibleOutput class];

    class_addProtocol([AVPlayerLayer class], @protocol(JSBAVPlayerLayer));
    context[@"AVPlayerLayer"] = [AVPlayerLayer class];

    class_addProtocol([AVSynchronizedLayer class], @protocol(JSBAVSynchronizedLayer));
    context[@"AVSynchronizedLayer"] = [AVSynchronizedLayer class];

    class_addProtocol([AVMutableTimedMetadataGroup class], @protocol(JSBAVMutableTimedMetadataGroup));
    context[@"AVMutableTimedMetadataGroup"] = [AVMutableTimedMetadataGroup class];

    class_addProtocol([AVMutableVideoComposition class], @protocol(JSBAVMutableVideoComposition));
    context[@"AVMutableVideoComposition"] = [AVMutableVideoComposition class];

    class_addProtocol([AVMutableVideoCompositionInstruction class], @protocol(JSBAVMutableVideoCompositionInstruction));
    context[@"AVMutableVideoCompositionInstruction"] = [AVMutableVideoCompositionInstruction class];

    class_addProtocol([AVMutableVideoCompositionLayerInstruction class], @protocol(JSBAVMutableVideoCompositionLayerInstruction));
    context[@"AVMutableVideoCompositionLayerInstruction"] = [AVMutableVideoCompositionLayerInstruction class];

    class_addProtocol([AVCaptureMovieFileOutput class], @protocol(JSBAVCaptureMovieFileOutput));
    context[@"AVCaptureMovieFileOutput"] = [AVCaptureMovieFileOutput class];

    class_addProtocol([AVMutableComposition class], @protocol(JSBAVMutableComposition));
    context[@"AVMutableComposition"] = [AVMutableComposition class];

    class_addProtocol([AVMutableCompositionTrack class], @protocol(JSBAVMutableCompositionTrack));
    context[@"AVMutableCompositionTrack"] = [AVMutableCompositionTrack class];

#pragma clang diagnostic pop
}

@end
