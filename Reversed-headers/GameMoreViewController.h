//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterGameInfoCellDelegate-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GameCenterLoadingFooterView, GameMoreGameInfo, MMLoadingView, MMTableView, NSString;

@interface GameMoreViewController : MMUIViewController <GameCenterGameInfoCellDelegate, UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, MMWebImageViewDelegate, IGameCenterExt>
{
    GameMoreGameInfo *_moreGameInfo;
    MMTableView *_tableView;
    GameCenterLoadingFooterView *_footerView;
    unsigned int _nextOffset;
    MMLoadingView *_loadingView;
    int _sourceScene;
    _Bool _isClassfiyGame;
    NSString *_classifyName;
    NSString *_classifyID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *classifyID; // @synthesize classifyID=_classifyID;
@property(retain, nonatomic) NSString *classifyName; // @synthesize classifyName=_classifyName;
@property(nonatomic) _Bool isClassfiyGame; // @synthesize isClassfiyGame=_isClassfiyGame;
- (void)onStopSearch;
- (void)onStartSearch;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(unsigned int)arg2;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)initRightBarBtns;
- (unsigned int)getGameType;
- (void)saveCacheData;
- (void)loadCacheData;
- (id)getCachePath;
- (void)showWebViewWithUrl:(id)arg1 title:(id)arg2;
- (long long)openDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)onSubscribeNewGameWithAppID:(id)arg1 alertTitle:(id)arg2 message:(id)arg3 extraInfo:(id)arg4 error:(long long)arg5;
- (void)onGetMoreGameList:(id)arg1 classifyID:(id)arg2 errCode:(int)arg3;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)gameInfoCellDownloadButtonClicked:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSourceScene:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

