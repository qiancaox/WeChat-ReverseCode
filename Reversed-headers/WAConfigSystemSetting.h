//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WAConfigSystemSetting : NSObject
{
    NSDictionary *_dicSetting;
}

- (void).cxx_destruct;
- (id)packageManager;
- (id)httpSetting;
- (id)syncVersionSetting;
- (id)usePackageConfirmSubDescScopeList;
- (unsigned int)widgetImageFlowLimitMaxSize;
- (unsigned int)widgetImageFlowLimitDuration;
- (unsigned int)deadThreadBanDuration;
- (unsigned int)deadThreadMaxTimeToLive;
- (unsigned int)bluetoothBackgroundTimeoutWithoutConnectionInSeconds;
- (unsigned int)getValidStarNumberLimitation;
- (unsigned int)defaultStarNumberLimitation;
- (unsigned int)starNumberLimitation;
- (unsigned int)defaultAttrSyncForceUpdateTime;
- (unsigned int)attrSyncForceUpdateTime;
- (unsigned long long)globalStorageMaxSize;
- (unsigned long long)globalStorageItemMaxSize;
- (unsigned long long)defaultLocalStorageItemMaxSize;
- (unsigned long long)localStorageItemMaxSize;
- (unsigned long long)defaultCacheTotalFileMaxSize;
- (unsigned long long)cacheTotalFileMaxSize;
- (_Bool)containSyncLaunchScene:(unsigned int)arg1;
- (id)defaultSyncLaunchSceneList;
- (id)syncLaunchSceneList;
- (_Bool)reloadTaskWithScene:(unsigned int)arg1 homePath:(_Bool)arg2;
- (unsigned int)memoryWarningInterval;
- (unsigned int)defaultFetchTaskBarItemInterval;
- (unsigned int)gameAppMaxRunningCount;
- (unsigned int)defaultAppMaxRunningCount;
- (unsigned int)appMaxBackgroundBluetoothCount;
- (unsigned int)appMaxBackgroundLocationUpdatingCount;
- (unsigned int)appMaxRunningCount;
- (id)cdnPreConnectURL;
- (id)defaultCDNBaseURL;
- (id)cdnBaseURL;
- (unsigned int)performanceIndexReportGapInSeconds;
- (id)memoryWarningReleasePolicies;
- (unsigned int)mainFrameTaskItemLineCount;
- (unsigned int)wxDataMaxDataSizeInKB;
- (unsigned int)wxDataMaxRequestConcurrent;
- (unsigned int)packageSweeperClientStorageMinMB;
- (unsigned int)packageSweeperClientStorageMaxPercent;
- (unsigned int)packageSweeperWithoutContactOutdatedDuration;
- (unsigned int)packageSweeperCheckInterval;
- (long long)gamePerfCollectInterval;
- (double)gamePerfCollectSamplePercentage;
- (unsigned int)defaultPullVersionMaxCountPerRequest;
- (id)preDownloadUserNameBlackList;
- (id)preDownloadWalletWhiteList;
- (id)syncVersionPredownloadList;
- (unsigned int)pullVersionMaxCountPerRequest;
- (unsigned int)defaultPullVersionMaxCount;
- (unsigned int)pullVersionMaxCount;
- (unsigned int)defaultPullVersionWxaUsageLastInterval;
- (unsigned int)contactExpireInterval;
- (unsigned int)pullVersionWxaUsageLastInterval;
- (unsigned int)defaultSyncVersionInterval;
- (unsigned int)syncVersionInterval;
- (unsigned int)invalidContactFreqBlockSeconds;
- (id)subContextImgDomainList;
- (unsigned int)nativeBufferQueueLimitByte;
- (unsigned int)nativeBufferSizeLimitByte;
- (unsigned int)defaultAppServiceMaxDataSize;
- (unsigned int)appServiceMaxDataSize;
- (unsigned long long)gameDownloadFileMaxSize;
- (unsigned long long)defaultDownloadFileMaxSize;
- (unsigned long long)downloadFileMaxSize;
- (unsigned int)downloadFileMaxTimeoutMS;
- (unsigned int)uploadFileMaxTimeoutMS;
- (unsigned int)webSocketMaxTimeoutMS;
- (unsigned int)requestMaxTimeoutMS;
- (id)defaultPreloadHttpHeaderReferer;
- (id)defaultHttpHeaderReferer;
- (id)httpHeaderReferer;
- (id)httpHeaderWhiteList;
- (id)httpHeaderBlackList;
- (id)httpHeaderMode;
- (id)initWithSetting:(id)arg1;

@end

