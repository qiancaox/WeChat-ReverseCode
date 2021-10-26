//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WADesktopStarListReportDelegate-Protocol.h"
#import "WAMainFrameDesktopWeAppViewControllerDelegate-Protocol.h"
#import "WCWebSearchViewControllerDelegate-Protocol.h"

@class MMUIViewController, NSString, UIBarButtonItem, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, UISearchBar, WAMainFrameDesktopWeAppViewController;
@protocol WAMainFrameDesktopContainerViewDelegate;

@interface WAMainFrameDesktopContainerView : UIView <WADesktopStarListReportDelegate, UIGestureRecognizerDelegate, WAMainFrameDesktopWeAppViewControllerDelegate, WCWebSearchViewControllerDelegate>
{
    UIView *_blurView;
    UIView *_transformContainerView;
    WAMainFrameDesktopWeAppViewController *_weAppVC;
    _Bool _isMyWeApp;
    _Bool _shouldRecoverLeftButton;
    id <WAMainFrameDesktopContainerViewDelegate> _delegate;
    MMUIViewController *_containerVC;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    unsigned long long _backAction;
    NSString *_openSession;
    UISearchBar *_realSearchBar;
    UIView *_fakeTopTitleView;
    UIImageView *_fakeTopTitleIcon;
    UILabel *_fakeTopTitleLabel;
    UIView *_fakeTopTitleSeperateLine;
    UIBarButtonItem *_savedLeftButtonItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRecoverLeftButton; // @synthesize shouldRecoverLeftButton=_shouldRecoverLeftButton;
@property(retain, nonatomic) UIBarButtonItem *savedLeftButtonItem; // @synthesize savedLeftButtonItem=_savedLeftButtonItem;
@property(retain, nonatomic) UIView *fakeTopTitleSeperateLine; // @synthesize fakeTopTitleSeperateLine=_fakeTopTitleSeperateLine;
@property(retain, nonatomic) UILabel *fakeTopTitleLabel; // @synthesize fakeTopTitleLabel=_fakeTopTitleLabel;
@property(retain, nonatomic) UIImageView *fakeTopTitleIcon; // @synthesize fakeTopTitleIcon=_fakeTopTitleIcon;
@property(retain, nonatomic) UIView *fakeTopTitleView; // @synthesize fakeTopTitleView=_fakeTopTitleView;
@property(nonatomic) __weak UISearchBar *realSearchBar; // @synthesize realSearchBar=_realSearchBar;
@property(retain, nonatomic) NSString *openSession; // @synthesize openSession=_openSession;
@property(nonatomic) _Bool isMyWeApp; // @synthesize isMyWeApp=_isMyWeApp;
@property(nonatomic) unsigned long long backAction; // @synthesize backAction=_backAction;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WAMainFrameDesktopContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportItemMove:(id)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2 isMy:(long long)arg3;
- (void)reportItemStared:(id)arg1 index:(long long)arg2 isMy:(long long)arg3;
- (void)reportExposure;
- (id)getReportSessionId;
- (_Bool)isSweepFastInVelocity:(struct CGPoint)arg1;
- (void)handlerScreenEdgeGesture:(id)arg1;
- (void)notifyWeAppChanged;
- (void)onDragUpToClose;
- (void)onTapSearchArea;
- (void)initRealSearchBarViewIfNeeded;
- (void)onWCWebSearchViewReturn:(id)arg1;
- (void)animateToHide;
- (void)doShowAnimate;
- (void)animateToShow:(_Bool)arg1 sessionId:(id)arg2;
- (void)setCloseLeftButton;
- (void)showRealLeftButton;
- (void)showFakeLeftButton;
- (void)onBack;
- (void)reset;
- (void)switchWeAppType:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateAlphaProgress:(double)arg1;
- (void)initFakeTopTitleView;
- (void)initContentView;
- (void)initView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

