//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FullScreenGestureDelegate-Protocol.h"
#import "WCStoryVideoControlViewDelegate-Protocol.h"

@class NSString, WCPlayerPlayArgs, WCPlayerView, WCStoryDataItem, WCStoryMediaItem, WCStoryPlayRecord, WCStoryPreviewReportObj, WCStoryVideoControlView, WXFullScreenGestureRecognizer;
@protocol WCStoryVideoPlayerViewDelegate;

@interface WCStoryVideoPlayerView : UIView <WCStoryVideoControlViewDelegate, FullScreenGestureDelegate>
{
    _Bool _bCanDragToClose;
    _Bool _bStartPlayed;
    WCStoryDataItem *_dataItem;
    id <WCStoryVideoPlayerViewDelegate> _delegate;
    WCStoryPreviewReportObj *_previewReportObj;
    WCStoryMediaItem *_mediaItem;
    WCPlayerPlayArgs *_playerInfo;
    WCPlayerView *_playerView;
    WCStoryPlayRecord *_playRecord;
    WCStoryVideoControlView *_controlView;
    WXFullScreenGestureRecognizer *_fullScreenGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer; // @synthesize fullScreenGestureRecognizer=_fullScreenGestureRecognizer;
@property(retain, nonatomic) WCStoryVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCStoryPlayRecord *playRecord; // @synthesize playRecord=_playRecord;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) _Bool bStartPlayed; // @synthesize bStartPlayed=_bStartPlayed;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
@property(nonatomic) __weak id <WCStoryVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool bCanDragToClose; // @synthesize bCanDragToClose=_bCanDragToClose;
- (void)didTakeVideoSnapshot:(id)arg1;
- (void)onVideoPlayStarted;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (_Bool)isPlayerViewForMediaItem:(id)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)stopAndCleanPlayer;
- (void)stopPlay;
- (void)pauseVideo;
- (void)playVideoWithMute:(_Bool)arg1;
- (void)playVideo;
- (void)reloadPlayerInfo;
- (void)initSubview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 DataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

