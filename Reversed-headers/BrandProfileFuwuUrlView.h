//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileFuwuBaseView.h"

@class BrandProfileFuwuInfo, MMUIButton, UIView;

@interface BrandProfileFuwuUrlView : BrandProfileFuwuBaseView
{
    BrandProfileFuwuInfo *_fuwuInfo;
    UIView *_topDividingView;
    MMUIButton *_button;
    double _cachedFuwuViewHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double cachedFuwuViewHeight; // @synthesize cachedFuwuViewHeight=_cachedFuwuViewHeight;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *topDividingView; // @synthesize topDividingView=_topDividingView;
@property(retain, nonatomic) BrandProfileFuwuInfo *fuwuInfo; // @synthesize fuwuInfo=_fuwuInfo;
- (void)onFuwuButtonClicked:(id)arg1;
- (void)updateFuwuInfo:(id)arg1;
- (double)calcuteFuwuViewHeight;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

@end

