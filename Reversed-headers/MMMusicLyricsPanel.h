//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMusicPlayerExt-Protocol.h"
#import "MMMusicLyricVcCalculatorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMMusicFadeOutView, MMMusicInfo, MMMusicLyricVcCalculator, MMUIButton, NSString, UITableView, UITapGestureRecognizer;
@protocol MMMusicLyricsPanelDelegate;

@interface MMMusicLyricsPanel : UIView <UITableViewDelegate, UITableViewDataSource, MMMusicLyricVcCalculatorDelegate, IMusicPlayerExt, UIGestureRecognizerDelegate>
{
    MMMusicInfo *m_musicInfo;
    UITableView *_lyricsView;
    unsigned int _currentLyricIndex;
    unsigned int _lastLyricIndex;
    MMMusicLyricVcCalculator *m_lyricCalcuator;
    MMMusicFadeOutView *m_lyricBgView;
    UIView *m_bottomView;
    MMUIButton *m_upBtn;
    struct CGRect lyricsViewFrame;
    _Bool isFirstLocation;
    unsigned long long mode;
    id <MMMusicLyricsPanelDelegate> _delegate;
    double _lyricsViewCenterY;
    double _lyricsViewHeight;
    double _upBtnTop;
    double _animLimitLyricsViewMinHeight;
    double _animLimitLyricsViewMaxHeight;
    double _animLimitUpBtnMinTop;
    double _animLimitUpBtnMaxTop;
    UITapGestureRecognizer *_exitTapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *exitTapGestureRecognizer; // @synthesize exitTapGestureRecognizer=_exitTapGestureRecognizer;
@property(nonatomic) double animLimitUpBtnMaxTop; // @synthesize animLimitUpBtnMaxTop=_animLimitUpBtnMaxTop;
@property(nonatomic) double animLimitUpBtnMinTop; // @synthesize animLimitUpBtnMinTop=_animLimitUpBtnMinTop;
@property(nonatomic) double animLimitLyricsViewMaxHeight; // @synthesize animLimitLyricsViewMaxHeight=_animLimitLyricsViewMaxHeight;
@property(nonatomic) double animLimitLyricsViewMinHeight; // @synthesize animLimitLyricsViewMinHeight=_animLimitLyricsViewMinHeight;
@property(nonatomic) double upBtnTop; // @synthesize upBtnTop=_upBtnTop;
@property(nonatomic) double lyricsViewHeight; // @synthesize lyricsViewHeight=_lyricsViewHeight;
@property(nonatomic) double lyricsViewCenterY; // @synthesize lyricsViewCenterY=_lyricsViewCenterY;
@property(nonatomic) __weak id <MMMusicLyricsPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)runCloseStep2Animation;
- (void)runCloseAnimation;
- (void)reset;
- (_Bool)isOverMinLimit;
- (void)resetValue;
- (double)calculateNewMovement:(double)arg1;
- (void)updateValueWithMovement:(double)arg1;
- (void)markPreviousValue;
- (void)tapGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tryToLocateProperLyricInBottomArea;
- (void)tryToLocateProperLyricInTopArea;
- (void)tryToLocateFirstProperLyricInRightPos;
- (void)updateUIWithCurrIndex:(unsigned int)arg1;
- (void)onCurrentLyricChangeTo:(id)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;
- (_Bool)shouldPlayLyricAnimation;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)textFontForSection:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)close;
- (void)onClickUpBtn;
- (void)layoutSubviews;
- (void)addBottomViewPanGesture:(id)arg1;
- (void)updateLyrics:(id)arg1;
- (void)initUpBtn;
- (void)initLyricsListView;
- (void)initView;
- (void)dealloc;
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

