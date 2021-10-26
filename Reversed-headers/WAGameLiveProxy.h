//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWAGameLiveService-Protocol.h"

@class NSString;

@interface WAGameLiveProxy : NSObject <IWAGameLiveService>
{
}

+ (void)stopGameLive:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2 nav:(id)arg3;
+ (void)setEncoderParamWithVideoSize:(double)arg1 height:(double)arg2;
+ (void)setExperimentConfig:(id)arg1 withParams:(id)arg2;
+ (_Bool)mixExternalAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
+ (_Bool)mixExternalAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
+ (_Bool)enableMixExternalAudio:(_Bool)arg1 playout:(_Bool)arg2;
+ (_Bool)sendCustomAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
+ (_Bool)sendCustomAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
+ (_Bool)enableCustomAudioCapture:(_Bool)arg1;
+ (_Bool)sendCustomVideoData:(id)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 width:(double)arg4 height:(double)arg5 rotation:(int)arg6;
+ (_Bool)sendCustomVideoData:(void *)arg1 size:(int)arg2 pixelFormat:(int)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6 rotation:(int)arg7;
+ (_Bool)sendCustomVideoData:(struct __CVBuffer *)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 rotation:(int)arg4;
+ (_Bool)enableCustomVideoCapture:(_Bool)arg1;
+ (void)enableLocalAudio:(_Bool)arg1;
+ (void)enableLocalVideo:(_Bool)arg1;
+ (void)updateCoverImage:(id)arg1;
+ (void)notifyGameViewVisible:(_Bool)arg1;
+ (_Bool)isDisableMicMusicCapture;
+ (_Bool)minimize;
+ (_Bool)isLiving;
+ (_Bool)isGameLiving:(id)arg1 versionType:(unsigned long long)arg2;
+ (void)notifyGameLiveWillStart;
+ (void)sendGameLiveMenuClickEvent:(id)arg1 versionType:(unsigned long long)arg2;
+ (void)menuClickStartGameLive:(id)arg1 versionType:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3 nav:(id)arg4 dic:(id)arg5;
+ (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

