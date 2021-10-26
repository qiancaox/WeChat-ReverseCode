//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString, UIImage;
@protocol MMLiveHalfScreenTitleBarViewDelegate;

@interface MMLiveHalfScreenTitleBarView : UIView
{
    id <MMLiveHalfScreenTitleBarViewDelegate> _delegate;
    NSString *_title;
    NSString *_subTitle;
    UIImage *_leftButtonImage;
    MMUIButton *_closeBtn;
    UIView *_titleView;
    UIView *_indicatorView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImage *leftButtonImage; // @synthesize leftButtonImage=_leftButtonImage;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MMLiveHalfScreenTitleBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLeftButton:(id)arg1;
- (void)setTitleLabelColor:(id)arg1;
- (void)setTitleLabelFont:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

