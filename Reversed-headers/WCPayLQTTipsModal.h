//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol WCPayLQTTipsModalDelegate;

@interface WCPayLQTTipsModal : UIView
{
    id <WCPayLQTTipsModalDelegate> _delegate;
    NSString *_title;
    NSString *_content;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayLQTTipsModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showInView;
- (void)dissmissView;
- (void)onTapConfirm;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 content:(id)arg2 delegate:(id)arg3;

@end

