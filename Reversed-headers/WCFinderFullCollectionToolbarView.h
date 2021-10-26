//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderLongPressIntervalGestureRecognizerDelegate-Protocol.h"

@class MMUIButton, MMUILabel, NSString, UIImageView, UILabel;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFullCollectionToolbarView : UIView <WCFinderLongPressIntervalGestureRecognizerDelegate, WCActionSheetDelegate>
{
    _Bool _allowFav;
    _Bool _isFav;
    _Bool _isDisableActionExceptLikes;
    _Bool _isCommentClose;
    _Bool _enablePrivateLike;
    _Bool _isPrivateAccount;
    _Bool _allowForward;
    _Bool _disableLikeAction;
    _Bool _disableCommentAction;
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    MMUIButton *_collectionBtn;
    UILabel *_collectionTipsLabel;
    unsigned long long _collectionCount;
    long long _likeFlag;
    unsigned long long _likeNums;
    UILabel *_likeNumLabel;
    MMUIButton *_likeBtn;
    long long _feedObjectType;
    unsigned long long _commentNums;
    UILabel *_commentNumLabel;
    MMUIButton *_commentBtn;
    MMUIButton *_shareBtn;
    UILabel *_shareTipsLabel;
    UIView *_likeDoubleIdentityShadowView;
    MMUILabel *_likeDoubleIdentityLabel;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    unsigned long long _forwardCount;
    unsigned long long _wxStatusRefCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableCommentAction; // @synthesize disableCommentAction=_disableCommentAction;
@property(nonatomic) _Bool disableLikeAction; // @synthesize disableLikeAction=_disableLikeAction;
@property(nonatomic) unsigned long long wxStatusRefCount; // @synthesize wxStatusRefCount=_wxStatusRefCount;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward=_allowForward;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(nonatomic) _Bool enablePrivateLike; // @synthesize enablePrivateLike=_enablePrivateLike;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) MMUILabel *likeDoubleIdentityLabel; // @synthesize likeDoubleIdentityLabel=_likeDoubleIdentityLabel;
@property(retain, nonatomic) UIView *likeDoubleIdentityShadowView; // @synthesize likeDoubleIdentityShadowView=_likeDoubleIdentityShadowView;
@property(retain, nonatomic) UILabel *shareTipsLabel; // @synthesize shareTipsLabel=_shareTipsLabel;
@property(retain, nonatomic) MMUIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) MMUIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *commentNumLabel; // @synthesize commentNumLabel=_commentNumLabel;
@property(nonatomic) unsigned long long commentNums; // @synthesize commentNums=_commentNums;
@property(nonatomic) long long feedObjectType; // @synthesize feedObjectType=_feedObjectType;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(nonatomic) _Bool isDisableActionExceptLikes; // @synthesize isDisableActionExceptLikes=_isDisableActionExceptLikes;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(nonatomic) unsigned long long likeNums; // @synthesize likeNums=_likeNums;
@property(nonatomic) long long likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(nonatomic) _Bool allowFav; // @synthesize allowFav=_allowFav;
@property(nonatomic) unsigned long long collectionCount; // @synthesize collectionCount=_collectionCount;
@property(retain, nonatomic) UILabel *collectionTipsLabel; // @synthesize collectionTipsLabel=_collectionTipsLabel;
@property(retain, nonatomic) MMUIButton *collectionBtn; // @synthesize collectionBtn=_collectionBtn;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isStarButtonRankedFirst;
- (_Bool)isStarButtonShow;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)triggerCollectionAnimation;
- (void)didClickCollectionBtn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didClickCommentBtn:(id)arg1;
- (void)didClickShareBtn:(id)arg1;
- (void)triggerLikeAnimationIsPrivate:(_Bool)arg1;
- (void)didClickLikeBtn:(id)arg1;
- (void)showAnonymousLikeActionSheet;
- (void)onFinderLongPressIntervalClick:(id)arg1 isInterval:(_Bool)arg2;
- (void)hiddenlikeDoubleIdentityLabel:(_Bool)arg1;
- (void)updateLikeEducateTipsLayout;
- (void)initlikeDoubleIdentityLabel;
- (void)updateCenterAlignment;
- (void)setLikeBtn:(id)arg1 withIconName:(id)arg2 iconColor:(id)arg3;
- (void)updateLikeContainer:(_Bool)arg1 disableLikeAction:(_Bool)arg2;
- (void)updateCommentContaier;
- (void)updateShareContainer:(_Bool)arg1;
- (void)updateCollectionContainer:(_Bool)arg1;
- (_Bool)isShowingLikeEducateTips;
- (void)needsShowLikeTips:(_Bool)arg1;
- (void)updateLikeEducateTipsContainer:(id)arg1;
- (id)getToolbarLabelWithText:(id)arg1;
- (void)updateCommentContainer:(_Bool)arg1;
- (void)updateCommentCount:(long long)arg1 commentClose:(_Bool)arg2 isDisableActionExceptLikes:(_Bool)arg3 likeFlag:(long long)arg4 feedObjectType:(long long)arg5 likeNum:(unsigned long long)arg6 collectNum:(unsigned long long)arg7 isFav:(_Bool)arg8 likeEducateTips:(id)arg9 allowForward:(_Bool)arg10 allowFav:(_Bool)arg11 isPrivateAccount:(_Bool)arg12 forwardCount:(unsigned long long)arg13 wxStatusRefCount:(unsigned long long)arg14 disableLikeAction:(_Bool)arg15 disableCommentAction:(_Bool)arg16;
- (void)setupSubView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

