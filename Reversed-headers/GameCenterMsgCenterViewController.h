//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGameUIViewController.h"

#import "GameCenterMsgCenterCellDataSource-Protocol.h"
#import "GameCenterMsgCenterCellViewDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView, WCTimeLineFooterView;

@interface GameCenterMsgCenterViewController : MMGameUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, WCActionSheetDelegate, MMRefreshTableFooterDelegate, GameCenterMsgCenterCellDataSource, GameCenterMsgCenterCellViewDelegate>
{
    _Bool _hasMore;
    _Bool _showHeader;
    NSString *_msgId;
    MMTableView *_msgTableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_readMsgList;
    NSMutableArray *_unReadMsgList;
    UIView *_splitView;
    NSMutableDictionary *_cellCache;
    NSMutableDictionary *_cellHeightCache;
    long long _msgListType;
    NSString *_msgCenterSettingUrl;
    NSMutableSet *_reportExposureMsgItems;
    NSIndexPath *_quickJumpMsgIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *quickJumpMsgIndexPath; // @synthesize quickJumpMsgIndexPath=_quickJumpMsgIndexPath;
@property(retain, nonatomic) NSMutableSet *reportExposureMsgItems; // @synthesize reportExposureMsgItems=_reportExposureMsgItems;
@property(retain, nonatomic) NSString *msgCenterSettingUrl; // @synthesize msgCenterSettingUrl=_msgCenterSettingUrl;
@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(nonatomic) long long msgListType; // @synthesize msgListType=_msgListType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *cellCache; // @synthesize cellCache=_cellCache;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) NSMutableArray *unReadMsgList; // @synthesize unReadMsgList=_unReadMsgList;
@property(retain, nonatomic) NSMutableArray *readMsgList; // @synthesize readMsgList=_readMsgList;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *msgTableView; // @synthesize msgTableView=_msgTableView;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void)didReceiveMemoryWarning;
- (long long)jumpToDetailView:(id)arg1;
- (void)jumpToWebView:(id)arg1;
- (void)loadReadMsgNextPageList:(unsigned int)arg1;
- (void)onMsgCenterHeaderBtnClicked;
- (long long)getCurrentMsgListType;
- (void)initCurrentMsgListType;
- (id)getMsgItem:(long long)arg1 MsgIndex:(long long *)arg2 isInUnRead:(_Bool *)arg3;
- (void)onLoadMore;
- (id)getCellContentView:(id)arg1;
- (id)getSplitView;
- (long long)getRowNum;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearMsgList;
- (void)onMessageCardClick:(id)arg1;
- (void)onMergeUserImageClick:(id)arg1 Url:(id)arg2;
- (void)onUserNickNameClick:(id)arg1;
- (void)onUserHeadClick:(id)arg1;
- (void)jumpWithPosition:(unsigned int)arg1 JumpInfo:(id)arg2 MsgItem:(id)arg3;
- (void)onContentPicClick:(id)arg1;
- (void)onSecondLineClick:(id)arg1;
- (void)onSourceClick:(id)arg1;
- (void)cellForView:(id)arg1;
- (void)tryReportForMsgExpoluse:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTableFooterView;
- (void)initHeaderView;
- (id)getFirstPageReadMsgList:(unsigned int)arg1;
- (unsigned int)getUnReadMsgList;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)handleQuickJump;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)initFirstPageMsgList;
- (id)initWithSourceScene:(unsigned int)arg1 msgId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int sourceScene;
@property(readonly) Class superclass;

@end

