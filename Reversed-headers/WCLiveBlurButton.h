//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, NSString, UIColor, UIImage, UILabel, WCLiveBlurButtonAnimationHandler, WCLiveBlurButtonBackView;

@interface WCLiveBlurButton : MMUIView
{
    _Bool _removeBlurBacked;
    _Bool _isRoundCorner;
    WCLiveBlurButtonBackView *_backView;
    UIColor *_blurEffectColor;
    UIImage *_blurEffectImage;
    WCLiveBlurButtonAnimationHandler *_animationHandler;
    UILabel *_badgeLabel;
    NSString *_badgeValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) WCLiveBlurButtonAnimationHandler *animationHandler; // @synthesize animationHandler=_animationHandler;
@property(nonatomic) _Bool isRoundCorner; // @synthesize isRoundCorner=_isRoundCorner;
@property(nonatomic) _Bool removeBlurBacked; // @synthesize removeBlurBacked=_removeBlurBacked;
@property(retain, nonatomic) UIImage *blurEffectImage; // @synthesize blurEffectImage=_blurEffectImage;
@property(retain, nonatomic) UIColor *blurEffectColor; // @synthesize blurEffectColor=_blurEffectColor;
@property(retain, nonatomic) WCLiveBlurButtonBackView *backView; // @synthesize backView=_backView;
- (void)updateBadgePosition;
- (void)updateBadgeValue:(id)arg1 isNum:(_Bool)arg2;
- (void)updateBadgeNum:(unsigned long long)arg1;
- (void)updateBadgeValue:(id)arg1;
@property(readonly, nonatomic) MMUIButton *topButton;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateBlurEffect;
- (id)getBlurButtonBackView;
- (void)layoutBackView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)startEnlargeReduceAnimation;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectColor:(id)arg2 roundCorner:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 roundCorner:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

