//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, MMUILabel, UIImageView;

@interface MMFinderLiveGlobalRankSignView : UIView
{
    _Bool _isCustomizedAccessibilityLabel;
    unsigned int _rank;
    long long _uiStyle;
    long long _uiMode;
    UIImageView *_rankImgView;
    MMUILabel *_signLabel;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
    double _currentLayoutFontScale;
}

+ (double)insetTopForStyle:(long long)arg1;
+ (double)fixHeightForStyle:(long long)arg1;
+ (double)insetRightForStyle:(long long)arg1;
+ (double)insetLeftForStyle:(long long)arg1;
+ (double)signIconHeightForStyle:(long long)arg1;
+ (double)signIconWidthForStyle:(long long)arg1 forRank:(unsigned int)arg2;
+ (id)signLabelFontForStyle:(long long)arg1;
+ (struct CGSize)getGlobalRankSizeWithRank:(unsigned int)arg1 uiStyle:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) double currentLayoutFontScale; // @synthesize currentLayoutFontScale=_currentLayoutFontScale;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UIImageView *rankImgView; // @synthesize rankImgView=_rankImgView;
@property(nonatomic) long long uiMode; // @synthesize uiMode=_uiMode;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool isCustomizedAccessibilityLabel; // @synthesize isCustomizedAccessibilityLabel=_isCustomizedAccessibilityLabel;
- (void)createColorLayer;
- (void)createGradientLayer;
- (id)getRankImage;
- (id)getSignTextColor;
- (void)updateLayers;
- (void)updateSignLabelShadow;
- (void)updateRankImgViewShadow;
- (void)updateSelfSize;
- (void)initDefaultLayoutFontScale;
- (id)accessibilityLabel;
- (void)refresh;
- (void)updateLayoutFontScale;
- (void)updateRank:(unsigned int)arg1;
- (void)updateUIStyle:(long long)arg1;
- (void)layoutSignLabel;
- (void)layoutRankImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2;

@end

