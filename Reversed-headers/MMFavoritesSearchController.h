//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "FavBaseSearchViewControllerDelegate-Protocol.h"
#import "FavBaseTableDataControllerDelegate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "FavSearchTopFilterViewDelegate-Protocol.h"
#import "FavTagSearchFilterDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "IFavoritesRepairSvrDataExt-Protocol.h"
#import "MMSearchPanGestureControlDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class FavBaseTableDataController, FavClickStreamData, FavMultiSelectToolView, FavSearchTopFilterView, FavTagSearchFilter, MMSearchPanGestureController, MMUIButton, MMUILabel, NSString, UILabel, UITextField, UIView, WCSearcher;
@protocol FavSearchControllerDelegate;

@interface MMFavoritesSearchController : MMObject <IFavoritesRepairSvrDataExt, FavSearchTopFilterViewDelegate, FavBaseSearchViewControllerDelegate, FavBaseTableDataControllerDelegate, WCActionSheetDelegate, FavTagSearchFilterDelegate, UISearchBarDelegate, FavForwardLogicDelegate, IFavoritesExt, MMTipsViewControllerDelegate, MMSearchPanGestureControlDelegate, WCSearchDelegate>
{
    FavMultiSelectToolView *m_multiSelectToolView;
    MMUIButton *m_multiSelectCancelBtn;
    MMUILabel *m_multiSelectTitle;
    UIView *m_multiSelectTopCoverView;
    FavSearchTopFilterView *m_searchTopFilterView;
    UIView *m_savedHeaderView;
    UIView *m_loadingView;
    UILabel *m_loadingLabel;
    FavClickStreamData *m_clickData;
    FavBaseTableDataController *m_dataController;
    NSString *m_searchText;
    NSString *m_tagText;
    _Bool m_bSearching;
    _Bool m_bInSearchSession;
    FavTagSearchFilter *m_filterView;
    WCSearcher *_searcher;
    UITextField *m_searchField;
    id <FavSearchControllerDelegate> m_delegate;
    MMSearchPanGestureController *_panCancelGesture;
    int m_deleteType;
    MMUILabel *m_tipsLabel;
    NSString *m_searchTaskKey;
    int m_nCurrentType;
    unsigned int _entranceScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int entranceScene; // @synthesize entranceScene=_entranceScene;
@property(nonatomic) int m_nCurrentType; // @synthesize m_nCurrentType;
@property(retain, nonatomic) NSString *m_tagText; // @synthesize m_tagText;
@property(retain, nonatomic) NSString *m_searchText; // @synthesize m_searchText;
@property(nonatomic) __weak id <FavSearchControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTriggerToCancelMove;
- (void)onTriggerToMoveRight;
- (void)resetPanGesture;
- (void)preparePanGesture;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onClickSearchFilter:(id)arg1 type:(unsigned int)arg2;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)onMultiSelectDone;
- (void)onMultiSelectEdit;
- (void)deleteData:(id)arg1;
- (void)onDeleteData;
- (void)onForwardData;
- (void)forwardDataAndItems:(id)arg1;
- (void)onLoadMore;
- (id)getCurrentViewController;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)onShowEmptyView;
- (void)tryHideSearchInternalBlackView;
- (void)hideKeyboard;
- (void)hideKeyboardOnScroll;
- (void)doSearch;
- (void)doSearchByFilter;
- (void)cancelSearch;
- (void)cancelSearchByTap;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)resetTypingAttributes;
- (id)getTextFromType:(int)arg1;
- (void)initTipsView;
- (void)updateSearchFieldText;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (double)getContentViewY;
- (void)searchControllerWillDisappear;
- (void)hideVisibleCellMenu;
- (void)searchControllerWillAppear;
- (void)onViewBePoped;
- (void)UISplitViewWillChangeSplitMode;
- (void)relayoutSubviews;
- (void)dealloc;
- (void)initMultiSelectToolView;
- (void)initSearchTopFilterView;
- (id)initWithViewController:(id)arg1 SuperView:(id)arg2;
- (_Bool)isSearchActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

