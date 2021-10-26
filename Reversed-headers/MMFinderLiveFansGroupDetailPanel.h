//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMFinderLiveFansGroupDetailNavBar, MMFinderLiveFansGroupIntimacyInfo, MMFinderLiveFansGroupSignView, MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, NSMutableArray, NSString, RichTextView, UICollectionView, UIView, WCFinderAnimationLoadingView;

@interface MMFinderLiveFansGroupDetailPanel : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isFetching;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveTask *_liveTask;
    UIView *_panelView;
    MMFinderLiveFansGroupDetailNavBar *_navBar;
    UIView *_upgradeHeaderView;
    MMUILabel *_myWarmHeartLabel;
    MMUILabel *_myWarmHeartValueLabel;
    MMUILabel *_currentLevelLabel;
    MMFinderLiveFansGroupSignView *_signView;
    RichTextView *_upgradeTipLabel;
    UICollectionView *_upgradeDetailCollectView;
    NSMutableArray *_fansGroupUpgradeInfoList;
    WCFinderAnimationLoadingView *_loadingView;
    MMFinderLiveFansGroupIntimacyInfo *_fansGroupIntimacyInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *fansGroupIntimacyInfo; // @synthesize fansGroupIntimacyInfo=_fansGroupIntimacyInfo;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *fansGroupUpgradeInfoList; // @synthesize fansGroupUpgradeInfoList=_fansGroupUpgradeInfoList;
@property(retain, nonatomic) UICollectionView *upgradeDetailCollectView; // @synthesize upgradeDetailCollectView=_upgradeDetailCollectView;
@property(retain, nonatomic) RichTextView *upgradeTipLabel; // @synthesize upgradeTipLabel=_upgradeTipLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *signView; // @synthesize signView=_signView;
@property(retain, nonatomic) MMUILabel *currentLevelLabel; // @synthesize currentLevelLabel=_currentLevelLabel;
@property(retain, nonatomic) MMUILabel *myWarmHeartValueLabel; // @synthesize myWarmHeartValueLabel=_myWarmHeartValueLabel;
@property(retain, nonatomic) MMUILabel *myWarmHeartLabel; // @synthesize myWarmHeartLabel=_myWarmHeartLabel;
@property(retain, nonatomic) UIView *upgradeHeaderView; // @synthesize upgradeHeaderView=_upgradeHeaderView;
@property(retain, nonatomic) MMFinderLiveFansGroupDetailNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportForOpenFansGroupDetailPage;
- (void)showWithAnimated:(_Bool)arg1;
- (void)updateFansGroupUpgradeInfoList;
- (void)refreshUI;
- (void)refreshFansGroupIntimacy;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)createLoadingView;
- (void)layoutLoadingView;
- (void)layoutUpgradeDetailCollectView;
- (void)layoutUpgradeTipLabel;
- (void)layoutCurrentLevelAndSign;
- (void)layoutMyWarmHeartValueLabel;
- (void)layoutMyWarmHeartLabel;
- (void)layoutNavBar;
- (double)contentHeight;
- (double)contentWidth;
- (double)getUpgradeHeaderViewHeight;
- (void)updateUpgradeHeaderViewHeight;
- (void)layoutUpgradeHeaderView;
- (void)layoutPanelView;
- (void)updateWidgetsAlpha;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)innerInit;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

