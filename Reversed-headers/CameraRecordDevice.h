//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CameraDevice.h"

#import "AVCaptureFileOutputRecordingDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CameraRecordDevice : CameraDevice <AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureMovieFileOutput *movieFileOutput;
    NSObject<OS_dispatch_queue> *videoProcessingQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CDUnknownBlockType _onGetGrightness;
    CDUnknownBlockType _onGetGrightness_showLux;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_bufferQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *captureDeviceInput; // @synthesize captureDeviceInput=_captureDeviceInput;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(copy, nonatomic) CDUnknownBlockType onGetGrightness_showLux; // @synthesize onGetGrightness_showLux=_onGetGrightness_showLux;
@property(copy, nonatomic) CDUnknownBlockType onGetGrightness; // @synthesize onGetGrightness=_onGetGrightness;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopDetectBrightness_showLux;
- (void)startDetectBrightness_showLux:(CDUnknownBlockType)arg1;
- (void)stopDetectBrightness;
- (void)startDetectBrightness:(CDUnknownBlockType)arg1;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)stopRecord;
- (void)startRecord;
- (void)setupCaptureSession;
- (id)initWithPosition:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

