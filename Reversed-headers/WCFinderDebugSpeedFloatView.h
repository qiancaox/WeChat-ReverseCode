//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, UILabel;

@interface WCFinderDebugSpeedFloatView : UIView
{
    UILabel *_speedLabel;
    MMTimer *_timer;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
- (void)updateSpeedTitle;
- (void)pauseTimer;
- (void)hideDebugFlow;
- (void)showDebugFlow;
- (void)startTimer;
- (id)init;

@end

