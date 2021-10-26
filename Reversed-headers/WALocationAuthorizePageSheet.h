//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthorizePageSheet.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, UILabel, UITableView, WALocationAuthorizeSheetInfo;

@interface WALocationAuthorizePageSheet : WAAuthorizePageSheet <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _enableJsapiScope;
    UILabel *_locationUsageLabel;
    UITableView *_scopeListTableView;
    WALocationAuthorizeSheetInfo *_locationInfo;
    NSIndexPath *_currentSelectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *currentSelectedIndexPath; // @synthesize currentSelectedIndexPath=_currentSelectedIndexPath;
@property(nonatomic) _Bool enableJsapiScope; // @synthesize enableJsapiScope=_enableJsapiScope;
@property(retain, nonatomic) WALocationAuthorizeSheetInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) UITableView *scopeListTableView; // @synthesize scopeListTableView=_scopeListTableView;
@property(retain, nonatomic) UILabel *locationUsageLabel; // @synthesize locationUsageLabel=_locationUsageLabel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubViews;
- (void)loadExtraSubviewsWithInfo;
- (double)contentHeight;
- (double)tableViewHeight;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

