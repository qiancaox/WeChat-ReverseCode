//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "TemplateMsgSearchHelperDelegate-Protocol.h"

@class NSString, TemplateMsgSearchHelper;

@interface TemplateMsgViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate>
{
    TemplateMsgSearchHelper *_searchHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TemplateMsgSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (void)msgSearchBarActive;
- (void)makeNotifyMsgExpose;
- (void)onTableEndScroll;
- (void)onSearchButton:(id)arg1;
- (void)onRightButton:(id)arg1;
- (void)reloadTabeView;
- (void)didReceiveMemoryWarning;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

