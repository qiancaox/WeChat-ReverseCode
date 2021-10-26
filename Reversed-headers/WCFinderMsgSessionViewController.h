//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderMsgSessionCellDataSourceDelegate-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"

@class MMBaseSessionCellData, MMTableView, NSString, WCFinderMsgSessionCellDataSource, WCFinderMsgSessionListReporter;

@interface WCFinderMsgSessionViewController : MMUIViewController <WCFinderMsgSessionCellDataSourceDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderRedDotNotifyExt>
{
    WCFinderMsgSessionCellDataSource *_cellDataSource;
    MMTableView *_tableView;
    WCFinderMsgSessionListReporter *_reporter;
    MMBaseSessionCellData *_systemCellData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBaseSessionCellData *systemCellData; // @synthesize systemCellData=_systemCellData;
@property(retain, nonatomic) WCFinderMsgSessionListReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderMsgSessionCellDataSource *cellDataSource; // @synthesize cellDataSource=_cellDataSource;
- (void)reloadViewData;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (id)getSystemCellData;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTableView;
- (void)onWillQuitSessionViewController;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configReportInfoWithReporter:(id)arg1;
- (id)initWithSessionCellDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

