//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMFinderLiveGiftResourceMgrExt-Protocol.h"

@class CAGradientLayer, MMFinderLiveFansGroupSignView, MMFinderLiveGiftNotificationItem, MMFinderLiveGlobalRankSignView, MMUILabel, NSString, PAGView, UIImageView, UIView;

@interface MMLiveRewardGiftNotificationView : MMUIView <MMFinderLiveGiftResourceMgrExt>
{
    unsigned int _slot;
    MMFinderLiveGiftNotificationItem *_giftNotificationItem;
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_gradientLayerForOtherAnchor;
    MMUILabel *_nicknameLabel;
    MMUILabel *_descriptionLabel;
    UIImageView *_giftImageView;
    PAGView *_giftAnimationView;
    MMUILabel *_giftCountLabel;
    unsigned long long _growingGiftCount;
    unsigned long long _growingStep;
    unsigned long long _currentGiftCount;
    unsigned long long _isMultiRecipentMode;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(nonatomic) unsigned long long isMultiRecipentMode; // @synthesize isMultiRecipentMode=_isMultiRecipentMode;
@property(nonatomic) unsigned long long currentGiftCount; // @synthesize currentGiftCount=_currentGiftCount;
@property(nonatomic) unsigned long long growingStep; // @synthesize growingStep=_growingStep;
@property(nonatomic) unsigned long long growingGiftCount; // @synthesize growingGiftCount=_growingGiftCount;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) PAGView *giftAnimationView; // @synthesize giftAnimationView=_giftAnimationView;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayerForOtherAnchor; // @synthesize gradientLayerForOtherAnchor=_gradientLayerForOtherAnchor;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(nonatomic) unsigned int slot; // @synthesize slot=_slot;
@property(retain, nonatomic) MMFinderLiveGiftNotificationItem *giftNotificationItem; // @synthesize giftNotificationItem=_giftNotificationItem;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (long long)getGiftNotificationUIStyle;
- (long long)getFansGroupUIStyle;
- (long long)getGlobalRankSignUIStyle;
- (_Bool)needDisplayFansGroupRank;
- (_Bool)needDisplayGlobalRank;
- (void)countLabelDanceAnimation:(double)arg1;
- (void)stopGiftAnimation;
- (void)playGiftAnimation;
- (void)startCountLabelDance;
- (void)updateFromGitfCount:(unsigned long long)arg1 toGitfCount:(unsigned long long)arg2;
- (void)internalUpdateGitfCount:(unsigned long long)arg1;
- (void)updateGitfCount:(unsigned long long)arg1;
- (void)updateWithNotificationItem:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isMultiRecipentMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

