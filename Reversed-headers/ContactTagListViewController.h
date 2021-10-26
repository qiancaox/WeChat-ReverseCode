//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactTagNewDetailViewControllerDelegate-Protocol.h"
#import "IContactLabelMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString, UIButton, UILabel;

@interface ContactTagListViewController : MMUIViewController <IContactLabelMgrExt, UITableViewDelegate, UITableViewDataSource, ContactTagNewDetailViewControllerDelegate>
{
    _Bool _needReload;
    _Bool _needGetTagFromSvr;
    unsigned int _m_uiFromScene;
    UILabel *_tipsTtileLabel;
    UILabel *_tipsContentLabel;
    UIButton *_createTagButton;
    MMTableView *_tableView;
    NSMutableArray *_arrContactTagData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrContactTagData; // @synthesize arrContactTagData=_arrContactTagData;
@property(nonatomic) _Bool needGetTagFromSvr; // @synthesize needGetTagFromSvr=_needGetTagFromSvr;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *createTagButton; // @synthesize createTagButton=_createTagButton;
@property(retain, nonatomic) UILabel *tipsContentLabel; // @synthesize tipsContentLabel=_tipsContentLabel;
@property(retain, nonatomic) UILabel *tipsTtileLabel; // @synthesize tipsTtileLabel=_tipsTtileLabel;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
- (void)reloadContactTagListView;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeContactItemCellContent:(id)arg1 withIndexPath:(id)arg2;
- (void)makeCreateNewTagCellContent:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeNewContactTag:(id)arg1;
- (void)onEditContactLabel:(id)arg1;
- (void)UpdateViewForNoContactTag;
- (id)getMemberDesc:(id)arg1;
- (void)ResetViews;
- (void)reloadDataAndView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

