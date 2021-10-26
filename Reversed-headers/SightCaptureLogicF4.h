//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMovieCompressorDelegate-Protocol.h"
#import "SightCaptureLogic-Protocol.h"
#import "SightMovieWriterDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, SightCameraCapture;
@protocol OS_dispatch_queue, SightCaptureDelegate;

@interface SightCaptureLogicF4 : MMObject <SightMovieWriterDelegate, SightCaptureLogic, MMovieCompressorDelegate>
{
    id <SightCaptureDelegate> m_delegate;
    _Bool m_shouldStart;
    _Bool m_shouldNotifyPreviewReady;
    unsigned int m_currID;
    int m_zoomState;
    _Bool m_lightBoostOn;
    SightCameraCapture *m_movieCapture;
    NSMutableDictionary *m_recorderDict;
    NSMutableArray *m_compressorAry;
    NSObject<OS_dispatch_queue> *m_logicQueue;
}

- (void).cxx_destruct;
- (void)stopCameraCapture;
- (id)getKeyFrameInterval;
- (id)getVideoProfileLevel;
- (id)getCodecSettingsWithBitrate:(int)arg1;
- (int)getCaptureFrameRate;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)switchBeautyEffect:(_Bool)arg1;
- (void)deallocEffectManager;
- (void)initEffectManager;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (void)stopQRCodeWatcher;
- (void)startQRCodeWatcher;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (_Bool)isSupportSwitchCamera;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (_Bool)isLightBoostOn;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)maxZoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)setZoomState:(int)arg1;
- (int)zoomState;
- (_Bool)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)capturePreviewImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregistPreviewView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (_Bool)isRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecord:(unsigned int)arg1;
- (void)stopRecord:(unsigned int)arg1;
- (unsigned int)startRecordF4:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4 orientation:(long long)arg5 compressAudio:(_Bool)arg6 audioBitrate:(float)arg7;
- (unsigned int)startHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6;
- (void)realStartRecord;
- (unsigned int)prepareRecordF4:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4;
- (unsigned int)prepareHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (void)pauseCameraImmediately;
- (_Bool)pauseCamera;
- (void)startDeviceAudio;
- (void)startCameraWithAudio:(_Bool)arg1;
- (_Bool)isCameraOn;
- (void)onPictureRetake;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) SightCameraCapture *movieCapture; // @synthesize movieCapture=m_movieCapture;
- (id)getPreset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

