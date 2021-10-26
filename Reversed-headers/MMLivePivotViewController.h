//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLiveConflictHandling-Protocol.h"
#import "MMLiveContainerLogicControllerDelegate-Protocol.h"
#import "MMLivePivotViewDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FinderCommByPass, MMFinderLivePivotEducationView, MMLivePivotView, MMLiveTaskId, MMLiveView, MMTimer, NSArray, NSData, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIImageView, WCFinderLiveBaseLogReporter;
@protocol MMLiveMorphDismissTarget;

@interface MMLivePivotViewController : MMUIViewController <UICollectionViewDelegate, MMLivePivotViewDelegate, MMLiveContainerLogicControllerDelegate, MMLiveConflictHandling>
{
    _Bool _isPresentingWithCustomTransition;
    _Bool _presented;
    _Bool _hasFetchedLivesSinceScrolling;
    _Bool _isRecommendationLoading;
    _Bool _isLiveInMainScene;
    _Bool _isShowEducationView;
    _Bool _needShowScrollUpTips;
    _Bool _needShowScrollDownTips;
    _Bool _isForceShowRoundCorner;
    int _tabType;
    unsigned int _hasMoreData;
    NSMutableArray *_finderDataItems;
    long long _currentIndex;
    MMLivePivotView *_pivotView;
    UICollectionView *_pivotCollectionView;
    NSMutableArray *_itemControllers;
    unsigned long long _commentScene;
    id <MMLiveMorphDismissTarget> _morphDismissTarget;
    long long _startPreviewIndex;
    NSMutableSet *_dataItemsSet;
    NSData *_lastBuffer;
    FinderCommByPass *_fetchMoreByPass;
    NSArray *_replacementDataItems;
    NSIndexPath *_replacementSelectedIndexPath;
    NSMutableArray *_scheduledRemoveIndices;
    long long _currOrientation;
    MMFinderLivePivotEducationView *_scrollUpTipsView;
    unsigned long long _watchHistoryLiveCount;
    NSArray *_exportIds;
    NSMutableDictionary *_exportIdDictionary;
    long long _selectedExportIdIndex;
    long long _exportIdFetchStatus;
    MMTimer *_recommendationRefreshTimer;
    long long _recommendationRefreshInvokeTime;
    long long _bottomMostSeenLiveIndex;
    WCFinderLiveBaseLogReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveBaseLogReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isForceShowRoundCorner; // @synthesize isForceShowRoundCorner=_isForceShowRoundCorner;
@property(nonatomic) _Bool needShowScrollDownTips; // @synthesize needShowScrollDownTips=_needShowScrollDownTips;
@property(nonatomic) _Bool needShowScrollUpTips; // @synthesize needShowScrollUpTips=_needShowScrollUpTips;
@property(nonatomic) long long bottomMostSeenLiveIndex; // @synthesize bottomMostSeenLiveIndex=_bottomMostSeenLiveIndex;
@property(nonatomic) long long recommendationRefreshInvokeTime; // @synthesize recommendationRefreshInvokeTime=_recommendationRefreshInvokeTime;
@property(retain, nonatomic) MMTimer *recommendationRefreshTimer; // @synthesize recommendationRefreshTimer=_recommendationRefreshTimer;
@property(nonatomic) _Bool isShowEducationView; // @synthesize isShowEducationView=_isShowEducationView;
@property(nonatomic) _Bool isLiveInMainScene; // @synthesize isLiveInMainScene=_isLiveInMainScene;
@property(nonatomic) _Bool isRecommendationLoading; // @synthesize isRecommendationLoading=_isRecommendationLoading;
@property(nonatomic) long long exportIdFetchStatus; // @synthesize exportIdFetchStatus=_exportIdFetchStatus;
@property(nonatomic) long long selectedExportIdIndex; // @synthesize selectedExportIdIndex=_selectedExportIdIndex;
@property(retain, nonatomic) NSMutableDictionary *exportIdDictionary; // @synthesize exportIdDictionary=_exportIdDictionary;
@property(retain, nonatomic) NSArray *exportIds; // @synthesize exportIds=_exportIds;
@property(nonatomic) unsigned long long watchHistoryLiveCount; // @synthesize watchHistoryLiveCount=_watchHistoryLiveCount;
@property(retain, nonatomic) MMFinderLivePivotEducationView *scrollUpTipsView; // @synthesize scrollUpTipsView=_scrollUpTipsView;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(retain, nonatomic) NSMutableArray *scheduledRemoveIndices; // @synthesize scheduledRemoveIndices=_scheduledRemoveIndices;
@property(retain, nonatomic) NSIndexPath *replacementSelectedIndexPath; // @synthesize replacementSelectedIndexPath=_replacementSelectedIndexPath;
@property(retain, nonatomic) NSArray *replacementDataItems; // @synthesize replacementDataItems=_replacementDataItems;
@property(nonatomic) _Bool hasFetchedLivesSinceScrolling; // @synthesize hasFetchedLivesSinceScrolling=_hasFetchedLivesSinceScrolling;
@property(retain, nonatomic) FinderCommByPass *fetchMoreByPass; // @synthesize fetchMoreByPass=_fetchMoreByPass;
@property(nonatomic) unsigned int hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableSet *dataItemsSet; // @synthesize dataItemsSet=_dataItemsSet;
@property long long startPreviewIndex; // @synthesize startPreviewIndex=_startPreviewIndex;
@property _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) __weak id <MMLiveMorphDismissTarget> morphDismissTarget; // @synthesize morphDismissTarget=_morphDismissTarget;
@property(nonatomic) _Bool isPresentingWithCustomTransition; // @synthesize isPresentingWithCustomTransition=_isPresentingWithCustomTransition;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain) NSMutableArray *itemControllers; // @synthesize itemControllers=_itemControllers;
@property(retain) UICollectionView *pivotCollectionView; // @synthesize pivotCollectionView=_pivotCollectionView;
@property(retain) MMLivePivotView *pivotView; // @synthesize pivotView=_pivotView;
@property long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain) NSMutableArray *finderDataItems; // @synthesize finderDataItems=_finderDataItems;
- (void)udpateScrollEducationTipsFlag;
- (unsigned long long)displayEducationScrollTips;
- (void)showFollowConfirmTips:(_Bool)arg1;
- (void)onFollowConfirmPopup:(_Bool)arg1;
- (void)showScrollUpTips;
- (void)scrollToNextLiveTask;
- (void)scrollToNextLiveTaskAndDismissEducationView;
- (void)scrollToLastLiveTaskAndDismissEducationView;
- (void)showScrollTipsViewWithHeight:(double)arg1 viewModel:(id)arg2;
- (_Bool)isShowingStickyLoadingFooterView;
- (void)completeScrollingOfScrollView:(id)arg1;
- (id)toWatchHistoryReporter;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)updateCurrOrientation;
- (void)scrollDeferredToItemAtIndex:(id)arg1;
- (id)currentItemController;
- (void)fetchLivesForPendingExportIdsWithOnCompleted:(CDUnknownBlockType)arg1;
- (void)purgeUnseenLives;
- (void)fetchRecommendedLivesPurgingUnseen:(_Bool)arg1;
- (void)refreshRecommendedLives;
- (void)fetchRecommendedLives;
- (void)fetchHistoryLives;
- (void)extendAndReplaceFinderDataItems:(id)arg1 selectedIndex:(id)arg2;
- (void)prependFinderLiveHistoryDataItems;
- (void)initializeStateWithFinderDataItem:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3;
- (void)initializeStateWithFinderDataItems:(id)arg1 selectedIndex:(id)arg2;
- (void)didMoveToNewScene:(id)arg1;
- (void)filterFinderDataItems:(id)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (id)currentLiveTask;
- (id)currentLiveViewController;
- (void)hideView;
- (void)showView;
@property(nonatomic) _Bool isForcePortraitForExtend;
@property(readonly, nonatomic) MMLiveView *liveView;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) UIImageView *blurView;
- (long long)itemCount;
- (id)itemViewControllerWithIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkAndApplyLiveViewScrollingFxWithScrollView:(id)arg1 isForce:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
@property(nonatomic) _Bool forbidScroll;
- (void)replaceLiveWithFinderDataItem:(id)arg1 selectedIndex:(id)arg2;
- (void)replaceCurrentLiveWithFinderDataItem:(id)arg1;
- (void)switchLiveWithFinderDataItems:(id)arg1 selectedIndex:(id)arg2 commentScene:(unsigned long long)arg3;
- (void)switchLiveWithFinderDataItems:(id)arg1 selectedIndex:(id)arg2;
- (void)rejoinCurrentLive;
- (_Bool)switchLiveAliasRoleType:(int)arg1 liveTask:(id)arg2;
- (_Bool)handleConflictWithNewFinderDataItems:(id)arg1 selectedIndex:(id)arg2 navigationController:(id)arg3 tabType:(int)arg4 commentScene:(unsigned long long)arg5;
- (_Bool)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (_Bool)resolveExternalConflicts;
- (void)scheduleRemoveFinderDataItemAtIndex:(unsigned long long)arg1;
- (void)removeFinderDataItemAtIndex:(unsigned long long)arg1;
- (void)appendFinderDataItems:(id)arg1;
- (void)prependFinderDataItems:(id)arg1 isWatchHistoryLive:(_Bool)arg2;
- (void)prependFinderDataItems:(id)arg1;
- (void)replaceFinderDataItems:(id)arg1 selectedIndex:(id)arg2;
- (void)joinCurrentLive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (unsigned long long)currentOrientationMask;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)resetView;
- (void)loadView;
- (void)layoutPivotCollectionView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initNotifications;
- (void)initData;
- (id)initWithFinderDataItem:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 inMainScene:(_Bool)arg4;
- (id)initWithFinderDataItems:(id)arg1 selectedIndex:(id)arg2 inMainScene:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

