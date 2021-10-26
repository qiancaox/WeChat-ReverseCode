//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTabPageViewController.h"

#import "MMLimitedModeEntryViewControllerExt-Protocol.h"
#import "SeePeopleNearbyViewControllerDelegate-Protocol.h"
#import "WCFinderLocationServiceExt-Protocol.h"
#import "WCFinderNearbyTabPageViewModelDelegate-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"

@class MMUIButton, NSMutableArray, NSString, UIView, WCFinderCreateCoordinator, WCFinderLiveNearbyReporter, WCFinderNearbyTabPageCacheModel, WCFinderNearbyTabPageViewModel, WCFinderRedDotCtrlInfo, WCFinderTabPageModel;

@interface WCFinderNearbyTabPageViewController : WCFinderTabPageViewController <WCFinderLocationServiceExt, SeePeopleNearbyViewControllerDelegate, WCFinderNearbyTabPageViewModelDelegate, WCFinderRedDotExt, MMLimitedModeEntryViewControllerExt>
{
    _Bool _isLocationServiceAuthrized;
    CDUnknownBlockType _cacheModelUpdateBlock;
    MMUIButton *_nearbyPeopleMoreButton;
    UIView *_placeHolderView;
    NSMutableArray *_childModelArray;
    WCFinderTabPageModel *_liveTabPageModel;
    WCFinderTabPageModel *_feedTabPageModel;
    WCFinderTabPageModel *_peopleTabPageModel;
    WCFinderCreateCoordinator *_createCoordinator;
    WCFinderLiveNearbyReporter *_reporter;
    unsigned long long _initSelectedType;
    unsigned long long _currentSelectedType;
    WCFinderNearbyTabPageCacheModel *_cacheModel;
    unsigned long long _selectedSubTabId;
    WCFinderNearbyTabPageViewController *_selfVC;
    unsigned long long _prefetchType;
    WCFinderNearbyTabPageViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNearbyTabPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long prefetchType; // @synthesize prefetchType=_prefetchType;
@property(retain, nonatomic) WCFinderNearbyTabPageViewController *selfVC; // @synthesize selfVC=_selfVC;
@property(nonatomic) unsigned long long selectedSubTabId; // @synthesize selectedSubTabId=_selectedSubTabId;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(retain, nonatomic) WCFinderNearbyTabPageCacheModel *cacheModel; // @synthesize cacheModel=_cacheModel;
@property(nonatomic) unsigned long long currentSelectedType; // @synthesize currentSelectedType=_currentSelectedType;
@property(nonatomic) unsigned long long initSelectedType; // @synthesize initSelectedType=_initSelectedType;
@property(retain, nonatomic) WCFinderLiveNearbyReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) WCFinderTabPageModel *peopleTabPageModel; // @synthesize peopleTabPageModel=_peopleTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *feedTabPageModel; // @synthesize feedTabPageModel=_feedTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *liveTabPageModel; // @synthesize liveTabPageModel=_liveTabPageModel;
@property(retain, nonatomic) NSMutableArray *childModelArray; // @synthesize childModelArray=_childModelArray;
@property(retain, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) MMUIButton *nearbyPeopleMoreButton; // @synthesize nearbyPeopleMoreButton=_nearbyPeopleMoreButton;
@property(copy, nonatomic) CDUnknownBlockType cacheModelUpdateBlock; // @synthesize cacheModelUpdateBlock=_cacheModelUpdateBlock;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)checkAbnormalLiveIfNeeded;
- (void)onFinderGetLiveTabsInfoFinished;
- (_Bool)switchToLiveTab;
- (_Bool)shouldInteractivePop;
- (void)willDisappear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
@property(nonatomic) _Bool directlyOpenWebOrMiniApp;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *nearbyLiveEntryRedDotCtrlInfo;
- (void)resetLiveTabBlock;
- (void)_openWebOrMiniAppWithCtrlInfo:(id)arg1;
- (void)updateLiveTabName;
- (void)updateFeedTabName;
- (long long)indexOfTabPageType:(unsigned long long)arg1;
- (void)startLive;
- (void)showLiveHalfVC;
- (void)onClickMoreItem;
- (void)setLiveVCSelectSubTab:(id)arg1;
- (void)genChildModelArray;
- (void)_restoreTabPage;
- (void)refreshTabPage;
- (void)onBackButtonClicked:(id)arg1;
- (id)getNearbyPeopleViewController;
- (void)setRedDotModeObjectID:(id)arg1;
- (void)setRightButtonItemWithPageModel:(id)arg1;
- (void)updateLastestSelectedIndex:(unsigned long long)arg1;
- (unsigned int)getNearbyTabType;
- (void)setSelectVCIndex:(unsigned long long)arg1;
- (unsigned long long)getCurrenSelectCommentScene;
- (void)switchToInitSeletedIndex;
- (id)cacheViewModel;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLiveCacheModel:(id)arg1 selectedType:(unsigned long long)arg2 prefetchType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

