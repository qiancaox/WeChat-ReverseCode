//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedImageViewProtocol-Protocol.h"
#import "WCFinderPlayerControlViewDelegate-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"
#import "WCPlayerEventExt-Protocol.h"

@class NSString, UIImageView, UILabel, WCFinderFeedContentVM, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderPlayerControlView, WCFinderShortTapGestureRecognizer, WCPlayerView;
@protocol WCFinderFeedContentMediaActionProtocol;

@interface WCFinderFeedVideoCollectionViewCell : UICollectionViewCell <WCFinderPlayerControlViewDelegate, WCFinderFeedImageViewProtocol, WCPlayerDownloaderExt, UIGestureRecognizerDelegate, WCAudioSessionExt, WCPlayerEventExt, WCFinderFeedContentVMExt>
{
    _Bool _disableProgressBar;
    _Bool _hiddenPlayerControlView;
    _Bool _enableLongVideoPlayBeforePostSuc;
    _Bool _isCurrentPlaying;
    _Bool _needsRestThumb;
    _Bool _needsUpdateThumb;
    _Bool _hasCallStopCallBack;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    unsigned long long _currentIndex;
    unsigned long long _scene;
    double _loadingTopOffset;
    unsigned long long _feedScreenStyle;
    WCPlayerView *_playerView;
    WCFinderFeedImageView *_thumbImageView;
    WCFinderPlayerControlView *_playerConfigControlView;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
    WCFinderShortTapGestureRecognizer *_likeGes;
    NSString *_currentVideoTid;
    WCFinderFeedContentVM *_feedContentVM;
    unsigned long long _dataPos;
    long long _updateTag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCallStopCallBack; // @synthesize hasCallStopCallBack=_hasCallStopCallBack;
@property(nonatomic) long long updateTag; // @synthesize updateTag=_updateTag;
@property(nonatomic) unsigned long long dataPos; // @synthesize dataPos=_dataPos;
@property(retain, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsUpdateThumb; // @synthesize needsUpdateThumb=_needsUpdateThumb;
@property(nonatomic) _Bool needsRestThumb; // @synthesize needsRestThumb=_needsRestThumb;
@property(retain, nonatomic) WCFinderShortTapGestureRecognizer *likeGes; // @synthesize likeGes=_likeGes;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) WCFinderFeedImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool enableLongVideoPlayBeforePostSuc; // @synthesize enableLongVideoPlayBeforePostSuc=_enableLongVideoPlayBeforePostSuc;
@property(nonatomic) unsigned long long feedScreenStyle; // @synthesize feedScreenStyle=_feedScreenStyle;
@property(nonatomic) _Bool hiddenPlayerControlView; // @synthesize hiddenPlayerControlView=_hiddenPlayerControlView;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool disableProgressBar; // @synthesize disableProgressBar=_disableProgressBar;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_reloadPlayView:(id)arg1;
- (void)onFeedContentUpdateByURLExpired:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)refreshImageIfFromShare;
- (_Bool)videoIsOnPlayState;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onPlayerStopPlay:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadStart:(id)arg1;
- (void)OnPlayerMoovReady:(id)arg1 waitTime:(unsigned int)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 duration:(float)arg5;
- (void)loadingRetry;
- (void)checkPreloadTaskStatus;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)hideLoadingView;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (_Bool)WCFinderPlayerControlViewCanProcessGesture;
- (void)WCFinderPlayerControlViewDidTapWithTapState:(_Bool)arg1;
- (void)_pauseVideo:(_Bool)arg1 isFakeStopAction:(_Bool)arg2;
- (void)WCFinderPlayerControlViewProgressBarValueChange:(double)arg1 dragState:(unsigned long long)arg2 playVideo:(_Bool)arg3;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (void)setPlayRate:(double)arg1;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)pauseVideoIfSupport;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (id)getCurrendThumb;
- (void)progressBarValueChange:(double)arg1 dragState:(unsigned long long)arg2 playVideo:(_Bool)arg3;
- (void)captureVideoIfPossible;
- (void)stopVideoIfSupport;
- (void)_performStopActionCallback;
- (_Bool)isH265;
- (void)fakeStopPlayAction;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)onLikeFeed;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 dataScene:(long long)arg3 dataTid:(id)arg4 dataPos:(long long)arg5 fetchFeedTime:(double)arg6 isFullScreenViewScene:(_Bool)arg7 pauseVideo:(_Bool)arg8 playRate:(double)arg9;
- (void)createPlayerView:(double)arg1 isFullScreen:(_Bool)arg2 commentScene:(unsigned long long)arg3;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 dataScene:(long long)arg3 dataTid:(id)arg4 dataPos:(long long)arg5 fetchFeedTime:(double)arg6 playRate:(double)arg7;
- (void)layoutSubviews;
- (void)updateImage:(id)arg1;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)resetVideoReloadHidden:(_Bool)arg1;
- (void)initVideoReloadAction;
- (void)onClickRetry:(id)arg1;
- (id)generateConfig;
- (long long)getThumbMediaType;
- (void)changeDataSource:(id)arg1 currentIndex:(long long)arg2 useThumb:(id)arg3 startPlayTime:(double)arg4 isFullScreen:(_Bool)arg5;
- (void)initSubView;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

