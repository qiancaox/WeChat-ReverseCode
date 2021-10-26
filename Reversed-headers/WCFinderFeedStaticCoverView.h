//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderFeedImageCDNViewDelegate-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class CAGradientLayer, NSString, UIImageView, WCFinderFeedImageCDNView, WCFinderFeedStaticCoverInfoView, WCFinderLiveNowView, WCFinderStaticCoverCollectionViewCellConfig;
@protocol WCFinderLiveIconAnimationProtocol;

@interface WCFinderFeedStaticCoverView : UIView <WCFinderFeedImageCDNViewDelegate, WCFinderLiveExt>
{
    _Bool _isShowStickyTop;
    WCFinderFeedImageCDNView *_coverImageView;
    UIView<WCFinderLiveIconAnimationProtocol> *_liveNowView;
    WCFinderFeedStaticCoverInfoView *_infoView;
    UIImageView *_privateImageView;
    WCFinderLiveNowView *_liveEndView;
    unsigned long long _topLeftType;
    WCFinderStaticCoverCollectionViewCellConfig *_config;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WCFinderStaticCoverCollectionViewCellConfig *config; // @synthesize config=_config;
@property(nonatomic) unsigned long long topLeftType; // @synthesize topLeftType=_topLeftType;
@property(nonatomic) _Bool isShowStickyTop; // @synthesize isShowStickyTop=_isShowStickyTop;
@property(retain, nonatomic) WCFinderLiveNowView *liveEndView; // @synthesize liveEndView=_liveEndView;
@property(retain, nonatomic) UIImageView *privateImageView; // @synthesize privateImageView=_privateImageView;
@property(retain, nonatomic) WCFinderFeedStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView<WCFinderLiveIconAnimationProtocol> *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (id)accessibilityLabel;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id)fetchDisplayedLikedIconWithColor:(id)arg1 finderType:(long long)arg2;
- (void)finderFeedImageLoadFinish;
- (void)hiddenLiveNowView:(_Bool)arg1;
- (void)startLiveAnimation;
- (void)setInfoIconHidden:(_Bool)arg1;
- (void)setLiveNowViewHidden:(_Bool)arg1;
- (void)updateCoverImageWithMediaWrap:(id)arg1;
- (void)updateCoverHeight:(double)arg1;
- (void)removeCoverBlurEffect;
- (void)addCoverBlurEffect;
- (void)updateCustomLeftTitle:(id)arg1 rightImageUrl:(id)arg2 hiddenSeparateLine:(_Bool)arg3 leftTextFont:(id)arg4;
- (void)updateCustomLeftTitle:(id)arg1 rightImage:(id)arg2 leftTextFont:(id)arg3;
- (void)updateCustomTitle:(id)arg1;
- (void)updateInfoViewWithText:(id)arg1;
- (void)updateInfoViewMaxWidth:(double)arg1;
- (void)addInfoViewGradientView;
- (void)setInfoViewCornerRadius:(double)arg1;
- (void)removeInfoViewBlurEffect;
- (void)adjustMargin;
- (void)adjustInfoViewMargin:(double)arg1;
- (void)layoutSubviews;
- (void)updateContentWithDataItem:(id)arg1 config:(id)arg2;
- (void)adjustEndViewWith:(unsigned long long)arg1;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupLiveIconView;
- (void)layoutGradientView;
- (void)updateTopLeftViewType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

