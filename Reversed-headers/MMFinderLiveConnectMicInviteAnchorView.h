//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUISearchBar, NSArray, NSDictionary, NSMutableArray, NSString, UILabel, UIView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectMicInviteAnchorView : MMPageSheetBaseView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _cellActionDelegate;
    UIView *_contentView;
    MMUISearchBar *_searchBar;
    UILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMTableView *_tableView;
    MMFinderLiveTaskId *_taskId;
    NSArray *_connectMicAuchorUserList;
    NSDictionary *_connectMicAuchorUserDict;
    NSMutableArray *_candicateAnchorUserInfoList;
    NSString *_curSearchText;
    NSMutableArray *_displaySearchUserInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *displaySearchUserInfoList; // @synthesize displaySearchUserInfoList=_displaySearchUserInfoList;
@property(retain, nonatomic) NSString *curSearchText; // @synthesize curSearchText=_curSearchText;
@property(retain, nonatomic) NSMutableArray *candicateAnchorUserInfoList; // @synthesize candicateAnchorUserInfoList=_candicateAnchorUserInfoList;
@property(retain, nonatomic) NSDictionary *connectMicAuchorUserDict; // @synthesize connectMicAuchorUserDict=_connectMicAuchorUserDict;
@property(retain, nonatomic) NSArray *connectMicAuchorUserList; // @synthesize connectMicAuchorUserList=_connectMicAuchorUserList;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveConnectedMicUserCellViewDelegate> cellActionDelegate; // @synthesize cellActionDelegate=_cellActionDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (_Bool)isOnSearching;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultArray:(id)arg2;
- (void)onBeginSearchFromService;
- (void)doSearchWithText:(id)arg1;
- (void)onCancelSearch;
- (void)tryActiveSearch;
- (void)updateWithConnectMicAuchorUserList:(id)arg1 candicateAnchorList:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)layoutTableView;
- (void)layoutSearchBar;
- (void)layoutContentView;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

