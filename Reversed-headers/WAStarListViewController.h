//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WAAppItemManagerExtension-Protocol.h"
#import "WAContactMgrExtension-Protocol.h"
#import "WAMainFrameTaskbarOperationViewControllerDelegate-Protocol.h"
#import "WAStarCollectinViewViewLayoutDelegate-Protocol.h"
#import "WAStarCollectionViewLayoutDataSource-Protocol.h"
#import "WAStarListViewModelDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMUILabel, NSString, UICollectionView, UIView, WAMainFrameTaskBarDeleteActionWindow, WAStarCollectionViewLayout, WAStarListViewModel;

@interface WAStarListViewController : MMUIViewController <WCActionSheetDelegate, WAAppItemManagerExtension, WAStarListViewModelDelegate, WAContactMgrExtension, WAMainFrameTaskbarOperationViewControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, WAStarCollectionViewLayoutDataSource, WAStarCollectinViewViewLayoutDelegate>
{
    _Bool _isInEditMode;
    WAMainFrameTaskBarDeleteActionWindow *_operationWindow;
    WAStarListViewModel *_viewModel;
    UICollectionView *_collectionView;
    unsigned long long _scene;
    WAStarCollectionViewLayout *_layout;
    UIView *_tipsView;
    MMUILabel *_emptyLabel;
    double _collectionViewMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double collectionViewMargin; // @synthesize collectionViewMargin=_collectionViewMargin;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) WAStarCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WAStarListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WAMainFrameTaskBarDeleteActionWindow *operationWindow; // @synthesize operationWindow=_operationWindow;
- (void)onModifyWeAppContact:(id)arg1;
- (void)reloadData;
- (_Bool)collectionView:(id)arg1 itemDidCommitToStarAtIdexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemDidCommitToDeleteAtIdexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 itemDidMoveInDeleteAreaAtIndexPath:(id)arg2 viewCenter:(struct CGPoint)arg3;
- (_Bool)collectionView:(id)arg1 itemCenterIsInDeleteArea:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3 indexPath:(id)arg4;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionViewDidTapBackgroundView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGPoint)collectionView:(id)arg1 dragViewToPointForItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 dragViewFromPointForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dragViewForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onComplete;
- (void)onReturn;
- (void)viewDidLayoutSubviews;
- (id)sceneNote:(long long)arg1;
- (unsigned long long)uiScene;
- (void)configureCell:(id)arg1;
- (void)initEmptyView;
- (void)initTipsView;
- (void)updateViewAnimated:(_Bool)arg1;
- (void)initCollectionView;
- (void)initCustomUI;
- (void)hideOperationWindow;
- (void)showOperationWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)createViewModel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

