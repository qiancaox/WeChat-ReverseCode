//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCOutput.h"

#import "AVPlayerItemOutputPullDelegate-Protocol.h"

@class AVAsset, AVAssetReader, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString, NSURL, TXCMovieWriter, TXCProgram;
@protocol TXCMovieDelegate;

@interface TXCMovie : TXCOutput <AVPlayerItemOutputPullDelegate>
{
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    TXCMovieWriter *synchronizedMovieWriter;
    AVAssetReader *reader;
    AVPlayerItemVideoOutput *playerItemOutput;
    CADisplayLink *displayLink;
    CDStruct_1b6d18a9 previousFrameTime;
    CDStruct_1b6d18a9 processingFrameTime;
    double previousActualFrameTime;
    _Bool keepLooping;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    TXCProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    _Bool isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool isBackground;
    _Bool _runBenchmark;
    _Bool _playAtActualSpeed;
    _Bool _shouldRepeat;
    NSURL *_url;
    AVAsset *_asset;
    id <TXCMovieDelegate> _delegate;
    AVPlayerItem *_playerItem;
}

- (void).cxx_destruct;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) id <TXCMovieDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playAtActualSpeed; // @synthesize playAtActualSpeed=_playAtActualSpeed;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool videoEncodingIsFinished;
@property(readonly, nonatomic) _Bool audioEncodingIsFinished;
@property(readonly, nonatomic) AVAssetReader *assetReader;
- (void)convertYUVToRGBOutput;
- (void)cancelProcessing;
- (void)endProcessing;
- (void)processMovieFrame:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) float progress;
- (void)processMovieFrame:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)readNextAudioSampleFromOutput:(id)arg1;
- (_Bool)readNextVideoFrameFromOutput:(id)arg1;
- (void)processPixelBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)processPlayerItem;
- (void)processAsset;
- (id)createAssetReader;
- (void)startProcessing;
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (void)yuvConversionSetup;
- (void)setupNotification;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

