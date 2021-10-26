//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EmoticonStoreDownloadViewDelegate-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"

@class EmoticonStoreDownloadView, EmoticonStoreItem, MMEmoticonStoreDownloadViewConfig, NSString, UIImageView;
@protocol MMEmoticonStoreDownloadLogicDelegate;

@interface MMEmoticonStoreDownloadLogic : NSObject <EmoticonStoreDownloadViewDelegate, IEmoticonPackageStateMgrExt, IEmoticonPackageMgrExt>
{
    _Bool _isReleaseBuild;
    long long _scene;
    long long _downloadType;
    id <MMEmoticonStoreDownloadLogicDelegate> _delegate;
    MMEmoticonStoreDownloadViewConfig *_config;
    UIImageView *_downloadedCheck;
    EmoticonStoreDownloadView *_downloadView;
    EmoticonStoreItem *_storeItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReleaseBuild; // @synthesize isReleaseBuild=_isReleaseBuild;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) EmoticonStoreDownloadView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIImageView *downloadedCheck; // @synthesize downloadedCheck=_downloadedCheck;
@property(retain, nonatomic) MMEmoticonStoreDownloadViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMEmoticonStoreDownloadLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnBuyItemCancel:(id)arg1;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)stopLoadingIfNeededForPid:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)curViewController;
- (void)checkEmoticonBuyRet:(int)arg1;
- (void)onAlertViewQuitDownloadBtnClick;
- (void)onTapDownloadActivity;
- (void)onTapCancelDownload;
- (void)onTapUninstall;
- (void)onTapUse;
- (void)onTapReward;
- (void)onTapDownload;
- (void)showAlertWith:(id)arg1;
- (void)onState:(int)arg1;
- (void)initDownloadedCheckIfNeeded;
- (void)initDownloadViewIfNeeded;
- (void)initViewIfNeeded;
- (void)dealloc;
- (id)displayView;
- (void)updateStoreItem:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

