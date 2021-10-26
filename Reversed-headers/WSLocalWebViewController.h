//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "HandleHaokanActionExt-Protocol.h"
#import "ITopStoryPluginMsgExt-Protocol.h"
#import "IWebSearchRedPointMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMWebSearchViewDelegate-Protocol.h"
#import "WCFinderShareCustomTransitionProtocol-Protocol.h"
#import "WSWebRecommendTabsViewDelegate-Protocol.h"
#import "WSWebViewPluginableProtocol-Protocol.h"

@class MMTipsViewController, MMUILabel, MMUIScrollView, MMWebSearchController, NSDictionary, NSString, UIButton, UIImageView, UILongPressGestureRecognizer, UIView, WCStatTimerHelper, WSDotLoadingView, WSWebRecommendTabsView, WSWebViewPluginScheduler;
@protocol WSLocalWebViewControllerDelegate;

@interface WSLocalWebViewController : MMUIViewController <WCFinderShareCustomTransitionProtocol, MMWebSearchViewDelegate, ITopStoryPluginMsgExt, IWebSearchRedPointMgrExt, HandleHaokanActionExt, MMKernelExt, WSWebRecommendTabsViewDelegate, MMTipsViewControllerDelegate, WSWebViewPluginableProtocol>
{
    unsigned long long _scene;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool m_bShouldForcedRotationToPortrait;
    long long _orientation;
    struct CGRect _videoFrame;
    _Bool _hasInitContainerView;
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _hasSendOnUiInitEvent;
    _Bool _hasDisplayedView;
    unsigned long long _beginPreloadTime;
    long long _contentInsetAdjustmentBehavior;
    long long _currentIndex;
    long long _currentCategory;
    long long _firstLoadCategory;
    _Bool _isAppInForeground;
    _Bool _hasReloadWebView;
    _Bool _needReloadWebView;
    UIImageView *_retryIcon;
    MMUILabel *_retryLabel;
    UIButton *_retryButton;
    MMUIScrollView *_loadingContainerView;
    UIImageView *_headView;
    WSDotLoadingView *_WSDotLoadingView;
    UIView *_rightBarReddotView;
    UIView *_midView;
    UIView *_navShadowView;
    UILongPressGestureRecognizer *_debugGesture;
    UILongPressGestureRecognizer *_debugGesture2;
    NSString *_lowestVersionForUserCenter;
    MMTipsViewController *_confirmView;
    NSString *_lastExposeNumReddotId;
    NSString *_lastExposeContentReddotId;
    NSString *_lastExposeRecommendReddotId;
    NSString *_lastExposeSettingReddotId;
    _Bool _shouldForbidCache;
    _Bool _bForbidNavigationItems;
    _Bool _bForbidNavigationTabs;
    _Bool _needExposeWhenUpdate;
    unsigned long long _businessType;
    NSString *_contentTitle;
    NSDictionary *_tabsInfo;
    id <WSLocalWebViewControllerDelegate> _delegate;
    unsigned long long _VCType;
    NSString *_redDotMsgId;
    unsigned long long _navigationBarStyle;
    NSString *_nsInitExtText;
    NSDictionary *_userWowProfileParams;
    NSString *_extParams;
    NSString *_passSvrParamStr;
    MMWebSearchController *_webSearchController;
    WSWebRecommendTabsView *_tabContainer;
    WSWebViewPluginScheduler *_pluginScheduler;
    unsigned long long _enterTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(retain, nonatomic) WSWebRecommendTabsView *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(nonatomic) _Bool needExposeWhenUpdate; // @synthesize needExposeWhenUpdate=_needExposeWhenUpdate;
@property(retain, nonatomic) MMWebSearchController *webSearchController; // @synthesize webSearchController=_webSearchController;
@property(retain, nonatomic) NSString *passSvrParamStr; // @synthesize passSvrParamStr=_passSvrParamStr;
@property(retain, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSDictionary *userWowProfileParams; // @synthesize userWowProfileParams=_userWowProfileParams;
@property(retain, nonatomic) NSString *nsInitExtText; // @synthesize nsInitExtText=_nsInitExtText;
@property(nonatomic) _Bool bForbidNavigationTabs; // @synthesize bForbidNavigationTabs=_bForbidNavigationTabs;
@property(nonatomic) _Bool bForbidNavigationItems; // @synthesize bForbidNavigationItems=_bForbidNavigationItems;
@property(nonatomic) unsigned long long navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(retain, nonatomic) NSString *redDotMsgId; // @synthesize redDotMsgId=_redDotMsgId;
@property(readonly, nonatomic) _Bool shouldForbidCache; // @synthesize shouldForbidCache=_shouldForbidCache;
@property(nonatomic) unsigned long long VCType; // @synthesize VCType=_VCType;
@property(nonatomic) __weak id <WSLocalWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *tabsInfo; // @synthesize tabsInfo=_tabsInfo;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (void)OnSharePreConfirmViewStayAtWeChat;
- (void)OnSharePreConfirmViewBackToApp:(id)arg1;
- (void)handleOpenWowColikeSettingPage:(id)arg1;
- (void)handleUpdateNumReddotWithParams:(id)arg1;
- (void)handleHaokanActionWithClientData:(id)arg1 serverData:(id)arg2;
- (void)onTopStoryRecieveSettingReddot;
- (void)onTopStoryUpdateReddotFinish;
- (void)onWebRecommendNotifyMsgToJs:(id)arg1;
- (void)onWebRecommendReddotNotifyToJs:(id)arg1;
- (void)onWebRecommendNumRedPointChange:(id)arg1;
- (void)onRequestSetCommontEnd:(id)arg1 requestOpType:(unsigned int)arg2;
- (void)onRequestPostCommentEnd:(id)arg1 oriRequest:(id)arg2 docId:(id)arg3;
- (void)startForcedRotation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onOpenWowColikeSetting:(id)arg1;
- (void)onPostComments:(id)arg1;
- (void)onSetComments:(id)arg1;
- (void)onControllerWillBeginDetailSearch:(id)arg1;
- (void)onSearchBackToPreviousView;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onWebPageActive:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)windowHide:(id)arg1;
- (double)webSearchViewPosY;
- (void)stopLoadingAnimation;
- (void)handleLoadingTimeout;
- (void)startLoadingAnimation;
- (void)layoutAnimatingView;
- (void)tryInitAnimatingView;
- (void)webViewReload;
- (void)onClickWebViewReload:(id)arg1;
- (id)fetchTabNeededParamsWith:(id)arg1;
- (void)handleTabSelected:(long long)arg1 tabItemInfo:(id)arg2 byClicked:(_Bool)arg3;
- (void)viewDidTransitionToNewSize;
- (unsigned int)getInitTabId;
- (id)getWebViewInitParam;
- (void)initWebView;
- (void)updateTitleViewWithTitle:(id)arg1;
- (void)updateTabContainer;
- (void)judgeCurrentTabIndexWithTabList:(id)arg1;
- (_Bool)initNavTabsWith:(id)arg1;
- (void)initTitleView;
- (void)onOpenUserCenter:(id)arg1;
- (void)onOpenWebSearch:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)setRightTabItemReddotHidden:(_Bool)arg1;
- (void)onLongPressView:(id)arg1;
- (void)setNavigationRightItemHidden:(_Bool)arg1;
- (_Bool)canShowUserCenter;
- (void)setNavigationBarTabHidden:(_Bool)arg1;
- (void)initNavigationBar;
- (void)showShareFrom3rdAppView:(id)arg1;
- (void)forceTriggerFrom3rdAppAlert;
- (void)reloadNavigationBar;
- (void)onWSLocalWebViewReturn;
- (void)willDisappear;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)trySendNewIntentEvent;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tryInitContainerView;
- (_Bool)tryParallelAsyncWebRecommend:(unsigned long long)arg1 reddotMsgId:(id)arg2;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)preInitContainerView;
@property(readonly, copy) NSString *description;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)initWebSearchController;
- (void)initPlugins;
- (void)onSystemEnterBackground;
- (void)onSystemEnterForeground;
- (id)initWithScene:(unsigned long long)arg1;
- (id)currentResultView;
- (_Bool)needShowReddot:(unsigned long long)arg1;
- (id)fetchWebRecommendLatestNumReddotMsgId;
- (void)reportTabReddotExpose;
- (void)updateExposeReddot;
- (void)clearLastExposeReddotIds;
- (void)doShareAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

