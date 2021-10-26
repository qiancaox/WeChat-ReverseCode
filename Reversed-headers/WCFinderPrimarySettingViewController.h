//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderContactExt-Protocol.h"
#import "WCFinderUserPrepareCgiDelegate-Protocol.h"

@class DataCenterConfig, FinderUserPrepareResponse, NSString, WCFinderContact, WCTableViewManager;

@interface WCFinderPrimarySettingViewController : MMUIViewController <WCFinderContactExt, WCFinderUserPrepareCgiDelegate>
{
    _Bool _hasExposeShowInWXProfile;
    _Bool _hasExposeAnchorTaskEntrance;
    _Bool _hasExposeAnchorTaskRedDot;
    FinderUserPrepareResponse *_prepareResponse;
    WCFinderContact *_contact;
    DataCenterConfig *_dataCenterConfig;
    WCTableViewManager *_tableViewManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasExposeAnchorTaskRedDot; // @synthesize hasExposeAnchorTaskRedDot=_hasExposeAnchorTaskRedDot;
@property(nonatomic) _Bool hasExposeAnchorTaskEntrance; // @synthesize hasExposeAnchorTaskEntrance=_hasExposeAnchorTaskEntrance;
@property(nonatomic) _Bool hasExposeShowInWXProfile; // @synthesize hasExposeShowInWXProfile=_hasExposeShowInWXProfile;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) DataCenterConfig *dataCenterConfig; // @synthesize dataCenterConfig=_dataCenterConfig;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
- (void)updateOriginalPlainRedDotWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)openAccountSettingVC;
- (void)clickPOI;
- (void)clickPrivacy;
- (void)clickAuthorToolCell;
- (id)produceGuideUrl;
- (void)clickNameCard;
- (void)clickHeadCell;
- (void)makeHeadCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeSectionSeparator;
- (void)addConfigShowInWXProfileSwitch:(id)arg1;
- (void)addHeaderSection:(id)arg1;
- (void)reloadTableView;
- (_Bool)enableShowOriginalEntry;
- (void)configureTableView;
- (void)pushDefaultOrAuthorDataCenterMiniAppWithUserName:(id)arg1 pagePath:(id)arg2;
- (void)fetchUserPrepareForUpdateContact;
- (void)fetchUserPrepareForAuthorDataCenter;
- (void)dealloc;
- (void)reportSettingExpose;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

