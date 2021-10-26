//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveGoodsCell.h"

#import "MMFinderLiveGoodsCellDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveGoodsViewModel, MMLiveRichTextLabel, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIView;

@interface MMFinderLiveAdsCell : MMFinderLiveGoodsCell <MMFinderLiveGoodsCellDelegate>
{
    MMLiveRichTextLabel *_adsTitleLabel;
    MMUILabel *_descLabel;
    MMWebImageView *_goodsImageView;
    MMUIButton *_actionButton;
    CAShapeLayer *_shapeLayer;
    MMFinderLiveGoodsViewModel *_goodsViewModel;
    UIView *_gradientShawdowView;
    UIImageView *_promotingIconView;
    MMUILabel *_promotingLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) UIImageView *promotingIconView; // @synthesize promotingIconView=_promotingIconView;
@property(retain, nonatomic) UIView *gradientShawdowView; // @synthesize gradientShawdowView=_gradientShawdowView;
@property(retain, nonatomic) MMFinderLiveGoodsViewModel *goodsViewModel; // @synthesize goodsViewModel=_goodsViewModel;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMLiveRichTextLabel *adsTitleLabel; // @synthesize adsTitleLabel=_adsTitleLabel;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createActionButton;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

