//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UILabel;
@protocol MMAlbumAccessAuthViewDelegate;

@interface MMAlbumAccessAuthView : UIView
{
    id <MMAlbumAccessAuthViewDelegate> _delegate;
    double _topPadding;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_openSettingButton;
    MMUIButton *_showLimitPhotoButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *showLimitPhotoButton; // @synthesize showLimitPhotoButton=_showLimitPhotoButton;
@property(retain, nonatomic) UIButton *openSettingButton; // @synthesize openSettingButton=_openSettingButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) __weak id <MMAlbumAccessAuthViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onShowLimitedPhoto:(id)arg1;
- (void)onOpenSetting:(id)arg1;
- (void)layoutSubviews;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

