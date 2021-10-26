//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "IExptServiceExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCCrashBlockConfigMgr : MMRootService <IExptServiceExt, MMServiceProtocol>
{
    NSMutableDictionary *_dicMainThreadMonitorCongfig;
}

+ (id)getConfigFilePath;
+ (_Bool)isMMLiveHeavyUser;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicMainThreadMonitorCongfig; // @synthesize dicMainThreadMonitorCongfig=_dicMainThreadMonitorCongfig;
- (_Bool)getShouldPrintCPUFrequency;
- (int)getTotalWriteLimit;
- (int)getTotalReadLimit;
- (int)getSingleWriteLimit;
- (int)getSingleReadLimit;
- (_Bool)getShouldGetDiskIOStack;
- (float)getPowerConsumeCPULimit;
- (_Bool)getShouldGetPowerConsumeStack;
- (_Bool)getShouldGetCPUHighLog;
- (int)getMainThreadCount;
- (unsigned int)getPerStackInterval;
- (int)getDeviceUnder;
- (_Bool)getMainThreadHandle;
- (float)getCPUUsagePercent;
- (unsigned int)getCheckPeriodTime;
- (unsigned int)getRunloopTimeOut;
- (_Bool)getBlockMonitorOpen;
- (void)saveDumpReportConfig;
- (void)loadDumpReportConfig;
- (void)onExptItemListChange;
- (id)getBlockMointorConfiguration;
- (_Bool)isLiveHeavyUser;
- (float)finderSampleRatio;
- (float)liveUserSampleRatio;
- (void)addCustomStrategy:(id)arg1 sampleRatio:(float)arg2 lagMaxCount:(long long)arg3 network:(unsigned long long)arg4;
- (void)setupStrategy;
- (void)lazyInitConfigMgr;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

