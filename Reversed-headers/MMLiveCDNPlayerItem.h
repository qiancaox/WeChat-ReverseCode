//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXLivePlayListener-Protocol.h"

@class MMLiveCommonSEIMsg, NSArray, NSString, TRTCCdnPlayerManager, UIView;
@protocol MMLiveCDNPlayerItemDelegate;

@interface MMLiveCDNPlayerItem : NSObject <TXLivePlayListener>
{
    _Bool _isInLiveRoom;
    _Bool _hasPlayBegan;
    _Bool _hasReceivedFirstIFrame;
    _Bool _hasConnectedSuccess;
    _Bool _isMuted;
    _Bool _isFullScreenPlaying;
    _Bool _isLiveRoomPreparedItem;
    _Bool _hasSetPlayerOrientation;
    _Bool _hasSetPlayerRenderMode;
    _Bool _hasSetPlayerCacheType;
    int _minPlayerCache;
    int _maxPlayerCache;
    NSString *_itemId;
    UIView *_videoView;
    NSString *_url;
    NSString *_streamId;
    long long _renderMode;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    unsigned long long _firstIFrameTimestamp;
    unsigned long long _playBeginTimestamp;
    unsigned long long _state;
    MMLiveCommonSEIMsg *_lastConnectMicSEIMsg;
    MMLiveCommonSEIMsg *_lastAnchorStatusSEIMsg;
    NSArray *_cachedMicUsersList;
    TRTCCdnPlayerManager *_cdnPlayer;
    id <MMLiveCDNPlayerItemDelegate> _delegate;
    long long _playerOrientation;
    unsigned long long _playerCacheType;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) int maxPlayerCache; // @synthesize maxPlayerCache=_maxPlayerCache;
@property(nonatomic) int minPlayerCache; // @synthesize minPlayerCache=_minPlayerCache;
@property(nonatomic) unsigned long long playerCacheType; // @synthesize playerCacheType=_playerCacheType;
@property(nonatomic) _Bool hasSetPlayerCacheType; // @synthesize hasSetPlayerCacheType=_hasSetPlayerCacheType;
@property(nonatomic) _Bool hasSetPlayerRenderMode; // @synthesize hasSetPlayerRenderMode=_hasSetPlayerRenderMode;
@property(nonatomic) long long playerOrientation; // @synthesize playerOrientation=_playerOrientation;
@property(nonatomic) _Bool hasSetPlayerOrientation; // @synthesize hasSetPlayerOrientation=_hasSetPlayerOrientation;
@property(nonatomic) __weak id <MMLiveCDNPlayerItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TRTCCdnPlayerManager *cdnPlayer; // @synthesize cdnPlayer=_cdnPlayer;
@property(retain, nonatomic) NSArray *cachedMicUsersList; // @synthesize cachedMicUsersList=_cachedMicUsersList;
@property(retain, nonatomic) MMLiveCommonSEIMsg *lastAnchorStatusSEIMsg; // @synthesize lastAnchorStatusSEIMsg=_lastAnchorStatusSEIMsg;
@property(retain, nonatomic) MMLiveCommonSEIMsg *lastConnectMicSEIMsg; // @synthesize lastConnectMicSEIMsg=_lastConnectMicSEIMsg;
@property(nonatomic) _Bool isLiveRoomPreparedItem; // @synthesize isLiveRoomPreparedItem=_isLiveRoomPreparedItem;
@property(nonatomic) _Bool isFullScreenPlaying; // @synthesize isFullScreenPlaying=_isFullScreenPlaying;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) unsigned long long playBeginTimestamp; // @synthesize playBeginTimestamp=_playBeginTimestamp;
@property(nonatomic) unsigned long long firstIFrameTimestamp; // @synthesize firstIFrameTimestamp=_firstIFrameTimestamp;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(nonatomic) _Bool hasConnectedSuccess; // @synthesize hasConnectedSuccess=_hasConnectedSuccess;
@property(nonatomic) _Bool hasReceivedFirstIFrame; // @synthesize hasReceivedFirstIFrame=_hasReceivedFirstIFrame;
@property(nonatomic) _Bool hasPlayBegan; // @synthesize hasPlayBegan=_hasPlayBegan;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isInLiveRoom; // @synthesize isInLiveRoom=_isInLiveRoom;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (int)switchStream:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1 minCache:(int)arg2 maxCache:(int)arg3;
- (void)setOrientation:(long long)arg1;
- (void)markIsFullScreenPlaying;
- (void)setMute:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)resume;
- (void)pause;
- (void)stopPlay;
- (void)delayStopPlayingForPreload;
- (void)switchToPlayingForPreloadWithDelayStopTime:(double)arg1;
- (_Bool)startPlayForPreloadWithUrl:(id)arg1 andDelayStopTime:(double)arg2;
- (void)switchToPlaying;
- (void)resetTRTCCdnPlayerDefaultParams;
- (void)resetTRTCCdnPlayerParams;
- (void)cdnPlayerStartPlayWithUrl:(id)arg1 isMuted:(_Bool)arg2;
- (void)startPlayWithUrl:(id)arg1;
- (_Bool)isSameStreamIdFromUrl:(id)arg1;
- (void)clearDelegate;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)resetPlayEventValues:(_Bool)arg1;
- (id)initWithItemId:(id)arg1 delegate:(id)arg2 isInLiveRoom:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

