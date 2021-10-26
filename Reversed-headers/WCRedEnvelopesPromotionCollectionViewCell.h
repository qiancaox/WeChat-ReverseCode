//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCRedEnvelopesReceiveHomeTemplateViewDelegate-Protocol.h"

@class HbEnvelopSource, NSString, UIImageView, UILabel, UIView, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView;

@interface WCRedEnvelopesPromotionCollectionViewCell : UICollectionViewCell <WCRedEnvelopesReceiveHomeTemplateViewDelegate>
{
    _Bool _isSkinSelected;
    UIView *_promotionCellBackgroundView;
    UIView *_borderView;
    WCRedEnvelopesReceiveHomeTemplateView *_templateItemView;
    UILabel *_corporationLabel;
    UILabel *_corporationLabel2;
    UILabel *_promotionWordingLabel;
    HbEnvelopSource *_hbShowResource;
    WCRedEnvelopesReceiveHomeTemplateItem *_templateItem;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool isSkinSelected; // @synthesize isSkinSelected=_isSkinSelected;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(retain, nonatomic) HbEnvelopSource *hbShowResource; // @synthesize hbShowResource=_hbShowResource;
@property(retain, nonatomic) UILabel *promotionWordingLabel; // @synthesize promotionWordingLabel=_promotionWordingLabel;
@property(retain, nonatomic) UILabel *corporationLabel2; // @synthesize corporationLabel2=_corporationLabel2;
@property(retain, nonatomic) UILabel *corporationLabel; // @synthesize corporationLabel=_corporationLabel;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView; // @synthesize templateItemView=_templateItemView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *promotionCellBackgroundView; // @synthesize promotionCellBackgroundView=_promotionCellBackgroundView;
- (void)startDoneAnimation;
- (void)setPromotionCellSelected:(_Bool)arg1;
- (void)updateCellData:(id)arg1;
- (void)layoutSubviews;
- (void)updateBackgroundView;
- (void)updateView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

