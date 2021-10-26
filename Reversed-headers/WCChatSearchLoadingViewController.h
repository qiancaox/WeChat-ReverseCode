//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WCImageSearchEventDelegate-Protocol.h"
#import "WCStoryDismissInteractiveTransitionDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, WAAppDismissAnimateTransition, WCImageSearchLogic, WCStoryDismissInteractiveTransition;

@interface WCChatSearchLoadingViewController : MMUIViewController <WCImageSearchEventDelegate, UIViewControllerTransitioningDelegate, WCStoryDismissInteractiveTransitionDelegate>
{
    _Bool _isLoading;
    unsigned long long _status;
    UIImageView *_loadingView;
    UILabel *_tipLabel;
    UIButton *_tapButton;
    UIButton *_whiteTapButton;
    WCImageSearchLogic *_searchLogic;
    WCStoryDismissInteractiveTransition *_dismissInteractiveTransition;
    WAAppDismissAnimateTransition *_dismissAnimateTransition;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) WAAppDismissAnimateTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *dismissInteractiveTransition; // @synthesize dismissInteractiveTransition=_dismissInteractiveTransition;
@property(retain, nonatomic) WCImageSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIButton *whiteTapButton; // @synthesize whiteTapButton=_whiteTapButton;
@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)getViewController;
- (void)onGetNoResult;
- (void)onImageExpired;
- (void)onNetworkError;
- (void)internalSetLoadingTip:(unsigned long long)arg1;
- (double)referenceHeight;
- (void)internalSetStatus:(unsigned long long)arg1;
- (void)changeStatusTo:(unsigned long long)arg1;
- (void)onTapButton;
- (void)onTapNavBackButton;
- (void)initView;
- (void)setNavigationBar;
- (void)addLoadingAnimation;
- (void)viewDidLoad;
- (id)initWithSearchEntity:(id)arg1;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)addPopBackInteractivePopGesture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

