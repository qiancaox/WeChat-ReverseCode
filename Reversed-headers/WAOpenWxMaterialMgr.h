//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAOpenWxMaterialMgr : MMUserService <PBMessageObserverDelegate, MMResourceMgrExt, MMServiceProtocol>
{
    NSMutableDictionary *_materialWeAppDic;
}

+ (id)htmlTransPathForUpdatedWebResource;
+ (id)htmlPathForUpdatedWebResource;
+ (id)confPathForUpdatedWebResource;
+ (id)dirForUpdatedWebResource;
+ (id)confPathForDefaultWebResource;
+ (id)dirForDefaultWebResource;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *materialWeAppDic; // @synthesize materialWeAppDic=_materialWeAppDic;
- (void)reportOpenMaterialOpenItem:(id)arg1;
- (void)reportOpenMaterialListItem:(id)arg1;
- (void)reportOpenMaterialItem:(id)arg1;
- (id)adjustOneLine:(id)arg1;
- (id)adjustRecommName:(id)arg1 appName:(id)arg2;
- (id)getExtByMime:(id)arg1;
- (id)getMimeByExt:(id)arg1;
- (id)getExtMimeDic;
- (id)makeExtMimeDic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onMaterialWeAppRsp:(id)arg1 req:(id)arg2;
- (void)openApp:(id)arg1;
- (void)showAllAppForMaterial:(id)arg1 matarialTypeName:(id)arg2;
- (id)safeArr:(id)arg1;
- (id)safeStr:(id)arg1;
- (id)getWeAppIcon:(id)arg1;
- (id)getInfoForMaterial:(id)arg1;
- (id)getInfoForMaterial:(id)arg1 type:(unsigned int)arg2;
- (void)requestWeAppList:(id)arg1;
- (id)updateWeAppForFile:(id)arg1;
- (id)updateWeAppForVideo;
- (id)updateWeAppForWebview;
- (id)updateWeAppForImageFilePath:(id)arg1;
- (void)updateWeAppForMaterial:(id)arg1 type:(unsigned int)arg2;
- (id)getAppInfo:(id)arg1;
- (_Bool)forbidMaterialType:(unsigned int)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)tryCopyWebResource;
- (void)updateWebResource;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

