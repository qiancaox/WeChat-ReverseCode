//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderItemView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class CAGradientLayer, MMUILabel, NSString, SightIconView, UIView;

@interface VideoReaderItemView : ReaderItemView <MMWebImageViewDelegate>
{
    UIView *m_playIconTimeContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    CAGradientLayer *m_titleShadowLayer;
    _Bool m_bIsCoverImgViewFinishLoad;
    unsigned int _playLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int playLength; // @synthesize playLength=_playLength;
- (id)accessibilityLabel;
- (void)onLoadImageOK:(id)arg1;
- (id)getLabelTextColor;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (void)setupPlayIconView:(_Bool)arg1;
- (void)setupPlayIconTimeContainerView;
- (void)setupTitleView;
- (void)initCoverImageView;
- (void)normalView;
- (void)topView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

