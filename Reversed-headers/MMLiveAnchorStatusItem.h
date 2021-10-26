//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class LiveLotterySetting;

@interface MMLiveAnchorStatusItem : NSObject <NSCopying>
{
    unsigned int _curJoinTeamMode;
    unsigned long long _anchorStatusFlags;
    unsigned long long _settingFlag;
    LiveLotterySetting *_lotterySetting;
    unsigned long long _timeMs;
}

- (void).cxx_destruct;
@property unsigned long long timeMs; // @synthesize timeMs=_timeMs;
@property(retain, nonatomic) LiveLotterySetting *lotterySetting; // @synthesize lotterySetting=_lotterySetting;
@property unsigned long long settingFlag; // @synthesize settingFlag=_settingFlag;
@property unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property unsigned long long anchorStatusFlags; // @synthesize anchorStatusFlags=_anchorStatusFlags;
- (id)description;
- (void)setIsLiveEnableShowBiz:(_Bool)arg1;
- (_Bool)isLiveEnableShowBiz;
- (void)setLiveMicSettingFlag:(unsigned long long)arg1;
- (void)setJoinGameTeamMode:(unsigned int)arg1;
- (_Bool)isLiveGameJoinTeamEnabled;
- (void)setIsLiveSysCallInterruption:(_Bool)arg1;
- (_Bool)isLiveSysCallInterruption;
- (void)setIsLiveEnterBackground:(_Bool)arg1;
- (_Bool)isLiveEnterBackground;
- (void)setIsLiveCutByAntispam:(_Bool)arg1;
- (_Bool)isLiveCutByAntispam;
- (void)setIsLivePureAudioMode:(_Bool)arg1;
- (_Bool)isLivePureAudioMode;
- (void)setIsLiveConnectMicEnabled:(_Bool)arg1;
- (_Bool)isLiveConnectMicEnabled;
- (void)setIsLiveEnableLike:(_Bool)arg1;
- (_Bool)isLiveEnableLike;
- (void)setIsLiveBanLike:(_Bool)arg1;
- (_Bool)isLiveBanLike;
- (void)setIsLiveEnableComment:(_Bool)arg1;
- (_Bool)isLiveEnableComment;
- (void)setIsLiveBanComment:(_Bool)arg1;
- (_Bool)isLiveBanComment;
- (void)setIsLiveEnableReward:(_Bool)arg1;
- (_Bool)isLiveEnableReward;
- (void)setIsLiveShoppingAvailable:(_Bool)arg1;
- (_Bool)isLiveShoppingAvailable;
- (_Bool)fromLiveExtInfo:(id)arg1;
- (id)getAnchorStatusBuffer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLiveExtInfo:(id)arg1;

@end

