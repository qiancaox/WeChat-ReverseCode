//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, MMWebImageView, NSString, UIButton, UIImageView, UIView;
@protocol MMWebMenuHeaderViewDelegate;

@interface MMWebMenuHeaderView : MMUIView
{
    id <MMWebMenuHeaderViewDelegate> _menuHeaderDelegate;
    NSString *_brandNanme;
    NSString *_headImageUrl;
    MMWebImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIImageView *_arrowImageView;
    UIButton *_headerButton;
    UIView *_seperator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UIButton *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *brandNanme; // @synthesize brandNanme=_brandNanme;
@property(nonatomic) __weak id <MMWebMenuHeaderViewDelegate> menuHeaderDelegate; // @synthesize menuHeaderDelegate=_menuHeaderDelegate;
- (void)onViewClick;
- (void)layoutSubviews;
- (void)initView;
- (double)contentViewWidth;
- (double)contentViewHeight;
- (id)initWithBrandName:(id)arg1 headImageUrl:(id)arg2;

@end

