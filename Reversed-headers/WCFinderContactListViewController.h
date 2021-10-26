//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderContactListCellDelegate-Protocol.h"
#import "WCFinderContactListViewModelDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFollowSearchContactViewControllerDelegate-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class MMUISearchBar, NSString, UILabel, UITapGestureRecognizer, UIView, WCFinderContactListViewModel, WCFinderFollowSearchContactViewController, WCFinderRefreshTableFooterView, WCMonitorTableView;

@interface WCFinderContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderContactListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderRedDotNotifyExt, UISearchBarDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFollowSearchContactViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderContactListCellDelegate>
{
    WCMonitorTableView *_tableView;
    WCFinderContactListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    MMUISearchBar *_searchBar;
    UIView *_searchContainer;
    WCFinderFollowSearchContactViewController *_searchContactVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFollowSearchContactViewController *searchContactVC; // @synthesize searchContactVC=_searchContactVC;
@property(retain, nonatomic) UIView *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderContactListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCMonitorTableView *tableView; // @synthesize tableView=_tableView;
- (void)onFinderContactListCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)didCancelSelectSearchContact;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)onFinderNotifyFollowCountNeedReload;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderContactListUpdateFollowingCount;
- (void)finderContactListFollowContact:(id)arg1;
- (void)finderContactListUnFollowContact:(id)arg1 index:(unsigned long long)arg2;
- (void)finderContactListViewFetchFailWithErrorCode:(int)arg1;
- (void)finderContactListViewNeedReloadWithContinueFlag:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clickSearchBar;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)updateTitle;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

