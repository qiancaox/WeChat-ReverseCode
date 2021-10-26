//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, NSString, UILabel;

@interface WCLiveCountdownToastView : UIView
{
    CDUnknownBlockType _timerTimeOutCallback;
    UIView *_toastViewContainer;
    UIView *_toastView;
    MMTimer *_coundownTimer;
    UILabel *_coundownTips;
    UILabel *_wordingLabel;
    NSString *_wordings;
    long long _timerCountdown;
    long long _countDown;
}

- (void).cxx_destruct;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(nonatomic) long long timerCountdown; // @synthesize timerCountdown=_timerCountdown;
@property(retain, nonatomic) NSString *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) UILabel *coundownTips; // @synthesize coundownTips=_coundownTips;
@property(retain, nonatomic) MMTimer *coundownTimer; // @synthesize coundownTimer=_coundownTimer;
@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIView *toastViewContainer; // @synthesize toastViewContainer=_toastViewContainer;
@property(copy, nonatomic) CDUnknownBlockType timerTimeOutCallback; // @synthesize timerTimeOutCallback=_timerTimeOutCallback;
- (void)adjustContentViews;
- (void)layoutWordingLabel;
- (void)layoutCoundownTips;
- (void)layoutToastView;
- (void)clearCountdownTimer;
- (void)updateCountTimer;
- (void)startCountdownTimer;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 countTime:(long long)arg2 wordings:(id)arg3;

@end

