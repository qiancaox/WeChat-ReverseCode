//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMImageLoaderObserver-Protocol.h"
#import "WCCardHomeCommonDetailIconsViewDelegate-Protocol.h"

@class MMBadgeView, MMUIImageView, MMUILabel, NSArray, NSString, NSURL, UIImage, UIView, WCCardHomeCommonDetailIconsView, WCPayWebImageView;

@interface WCCardHomeCommonCardCell : UICollectionViewCell <MMImageLoaderObserver, WCCardHomeCommonDetailIconsViewDelegate>
{
    _Bool _showRedIcon;
    _Bool _showDivideLine;
    UIImage *_iconImage;
    NSString *_title;
    NSString *_subTitle;
    NSArray *_shareCardIcons;
    NSURL *_iconImageUrl;
    MMUIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUIImageView *_detailImageView;
    WCCardHomeCommonDetailIconsView *_iconsView;
    MMBadgeView *_redDotImageView;
    UIView *_maskView;
    UIView *_lineView;
    WCPayWebImageView *_iconWebImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWebImageView *iconWebImageView; // @synthesize iconWebImageView=_iconWebImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMBadgeView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) WCCardHomeCommonDetailIconsView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) MMUIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSURL *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
@property(nonatomic) _Bool showDivideLine; // @synthesize showDivideLine=_showDivideLine;
@property(nonatomic) _Bool showRedIcon; // @synthesize showRedIcon=_showRedIcon;
@property(retain, nonatomic) NSArray *shareCardIcons; // @synthesize shareCardIcons=_shareCardIcons;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void)WCCardHomeCommonDetailShouldSizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (void)confiUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

