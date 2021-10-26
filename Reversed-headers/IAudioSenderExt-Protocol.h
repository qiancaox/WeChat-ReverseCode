//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AudioRecorderUserData, CMessageWrap, NSMutableArray, NSString;

@protocol IAudioSenderExt

@optional
- (void)OnRecordVoiceChangeWithUserData:(AudioRecorderUserData *)arg1;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(NSMutableArray *)arg2;
- (void)OnVoiceTransResultChange:(NSString *)arg1 InputId:(unsigned int)arg2;
- (void)OnSendError:(CMessageWrap *)arg1 ErrNo:(int)arg2;
- (void)OnRecordStartFail;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
@end

