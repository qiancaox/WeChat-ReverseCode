//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

#import "IMsgExt-Protocol.h"

@interface CommonMessageViewModel : BaseMessageViewModel <IMsgExt>
{
    unsigned long long m_bgBubbleType;
    unsigned long long m_maskBubbleType;
    _Bool m_isShowChatRoomDisplayName;
    _Bool m_isChatRoomOwnerOrAdmin;
    unsigned long long _shakeHeadAnimationType;
    double _shakeHeadAnimationProgress;
}

@property(nonatomic) double shakeHeadAnimationProgress; // @synthesize shakeHeadAnimationProgress=_shakeHeadAnimationProgress;
@property(nonatomic) unsigned long long shakeHeadAnimationType; // @synthesize shakeHeadAnimationType=_shakeHeadAnimationType;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)customJumpAppId;
- (_Bool)hasSetRoomTodoFlag;
- (_Bool)shouldShowRoomTodoView;
- (id)maskBubbleInfo;
- (id)bgBubbleInfo;
- (_Bool)isShowSendFailView;
- (_Bool)isShowSendingView;
- (_Bool)isShowAppMessageBlockButton;
- (id)sourceIconUrlString;
- (id)sourceTag;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isSupportSourceViewBottomClick;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isShowSourceView;
- (_Bool)checkIsChatRoomOwnerOrAdmin;
- (_Bool)calIsShowChatRoomDisplayName;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImage;
- (void)updateChatContact:(id)arg1;
- (void)getReferImageAsync:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2;
- (_Bool)hasReferImage;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)onMessageDownloadThumbImageOK;
- (void)downloadThumbImageIfNeed;
@property(readonly, nonatomic) unsigned int thumbDownloadStatus;

@end

