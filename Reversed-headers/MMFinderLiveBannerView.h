//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FinderJumpInfo, MMWebImageView, UIButton, UILabel;

@interface MMFinderLiveBannerView : UIControl
{
    CDUnknownBlockType _jumpAction;
    CDUnknownBlockType _closeAction;
    FinderJumpInfo *_bannerInfo;
    UIButton *_closeButton;
    MMWebImageView *_imageView;
    UILabel *_titleLabel;
}

+ (struct CGSize)viewSizeByBannerInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) FinderJumpInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType jumpAction; // @synthesize jumpAction=_jumpAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

