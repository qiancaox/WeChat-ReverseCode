//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderSearchContactCellDelegate-Protocol.h"
#import "WCFinderSearchContactViewModelDelegate-Protocol.h"
#import "WCFinderSearchHistoryListViewDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class MMTagTextField, MMTitleView, NSString, UIImageView, UILabel, UIMonitorTableView, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderRefreshTableFooterView, WCFinderSearchContactViewModel, WCFinderSearchHistoryListView;

@interface WCFinderSearchContactViewController : MMUIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderSearchContactViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderSearchHistoryListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCGeneralMonitorDelegate, WCFinderSearchContactCellDelegate>
{
    _Bool _hideHistoryView;
    MMTagTextField *_navSearchTextField;
    MMTitleView *_titleView;
    UIMonitorTableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderSearchHistoryListView *_historyListView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    WCFinderSearchContactViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderSearchHistoryListView *historyListView; // @synthesize historyListView=_historyListView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIMonitorTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMTagTextField *navSearchTextField; // @synthesize navSearchTextField=_navSearchTextField;
@property(nonatomic) _Bool hideHistoryView; // @synthesize hideHistoryView=_hideHistoryView;
- (void)onFinderSearchContactCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)onDeleteSearchRecord:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)doSearchAction:(id)arg1;
- (void)onSelectSearchRecord:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onFinderSearchContactReload:(id)arg1;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultEmpty;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)viewDidLayoutSubviews;
- (void)onTextFieldChanged:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)setupHistoryListView;
- (void)configTableView;
- (void)initNaviBar;
- (id)navigationBarBackgroundColor;
- (void)willDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

