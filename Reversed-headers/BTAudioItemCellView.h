//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellView.h"

#import "IAudioReceiverExt-Protocol.h"
#import "IMusicPlayerExt-Protocol.h"
#import "MMMusicPlayerContollerDelegate-Protocol.h"
#import "MMUIViewControllerExt-Protocol.h"

@class BTAudioItemCellViewModel, MMMusicPlayerContoller, MMUILabel, NSString, UIView, WCBrandAudioPlayView;

@interface BTAudioItemCellView : BTReaderItemCellView <MMUIViewControllerExt, IAudioReceiverExt, IMusicPlayerExt, MMMusicPlayerContollerDelegate>
{
    WCBrandAudioPlayView *m_audioPlayView;
    MMMusicPlayerContoller *m_audioPlayController;
    MMUILabel *m_timeLabel;
    UIView *m_containView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onMusicPlayStatusChanged;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)getChatName:(id)arg1;
- (void)StopPlay;
- (void)updateVoiceStatus;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)onUpdateViewModel;
- (id)getFriendRelatedInfoTextColor;
- (void)initFriendsReadLabel;
- (void)initTitleView;
- (void)initTitleAndTimeLabel;
- (void)initPlayView;
- (void)initNormalReaderItem;
- (void)initCoverView;
- (void)initContainView;
- (void)initTopReaderItem;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTAudioItemCellViewModel *viewModel; // @dynamic viewModel;

@end

