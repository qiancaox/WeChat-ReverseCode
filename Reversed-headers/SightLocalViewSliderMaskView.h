//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UIView, WCVideoCropImageSliderTouch;
@protocol SightLocalViewSliderMaskViewDelegate;

@interface SightLocalViewSliderMaskView : UIControl
{
    _Bool _startFlagOnTouch;
    _Bool _endFlagOnTouch;
    _Bool _isInLargeMode;
    id <SightLocalViewSliderMaskViewDelegate> _delegate;
    double _totalDuration;
    double _maxDuration;
    double _minDuration;
    UIImageView *_startFlag;
    UIImageView *_endFlag;
    UIView *_playFlag;
    UIColor *_lineColor;
    WCVideoCropImageSliderTouch *_lastTouch;
    struct CGRect _validFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInLargeMode; // @synthesize isInLargeMode=_isInLargeMode;
@property(retain, nonatomic) WCVideoCropImageSliderTouch *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(nonatomic, getter=isEndFlagOnTouch) _Bool endFlagOnTouch; // @synthesize endFlagOnTouch=_endFlagOnTouch;
@property(nonatomic, getter=isStartFlagOnTouch) _Bool startFlagOnTouch; // @synthesize startFlagOnTouch=_startFlagOnTouch;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIView *playFlag; // @synthesize playFlag=_playFlag;
@property(retain, nonatomic) UIImageView *endFlag; // @synthesize endFlag=_endFlag;
@property(retain, nonatomic) UIImageView *startFlag; // @synthesize startFlag=_startFlag;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) struct CGRect validFrame; // @synthesize validFrame=_validFrame;
@property(nonatomic) __weak id <SightLocalViewSliderMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refreshThumbImagesCollectionViewContentInset;
- (void)playFlagDidStopMovingAtStartFlag:(_Bool)arg1;
- (void)positionOfPlayFlagDidChange;
- (void)switchToLargeMode:(_Bool)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)extendedFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setStartFlagPosition:(double)arg1 andEndFlagPosition:(double)arg2;
- (void)stopMovingPlayFlag;
- (void)movePlayFlagFromPosition:(double)arg1 toPosition:(double)arg2 withinTime:(double)arg3;
- (double)positionOfEndFlag;
- (double)positionOfPlayFlag;
- (double)positionOfStartFlag;
- (double)maxRange;
- (double)minimumRange;
- (void)drawRect:(struct CGRect)arg1;
- (void)initView;

@end

