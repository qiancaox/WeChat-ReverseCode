//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IExptServiceExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MPChannelGetEntryDataTask, MemoryMappedKV, NSString;

@interface MPChannelMgr : MMUserService <MMImageLoaderObserver, IExptServiceExt, MMServiceProtocol>
{
    MemoryMappedKV *_mappedKV;
    MPChannelGetEntryDataTask *_currentTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPChannelGetEntryDataTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)updateWeAppChannelFeeds:(id)arg1;
- (id)getChannelAppId;
- (void)resetMappedKv;
- (unsigned long long)getChannelAbTestOption;
- (_Bool)shouldAutoSwitchDefaultLogo;
- (_Bool)shouldUpdateWhenEnterVideoPage;
- (_Bool)shouldUpdateWhenEnterBrandSession;
- (_Bool)shouldUpdateWhenMainSessionTabSwitch;
- (_Bool)shouldUpdateEntryWhenBrandCellExpose;
- (void)checkAndUpdateWeAppChannelFeeds;
- (id)getWeAppChannelFeedsData;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)prefetchEntryLogoImage;
- (id)getStrategyInfo;
- (void)updateStrategyInfo:(id)arg1;
- (void)updateEntryData:(id)arg1;
- (id)tryGetLocalChannelEntryData;
- (_Bool)isChannelABtestOpen;
- (void)handleGetChannelEntryDataResp:(_Bool)arg1 entryData:(id)arg2 strategyInfo:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)checkUpdateEntry:(id)arg1 videoPageUrl:(id)arg2 scene:(unsigned int)arg3;
- (_Bool)checkTimelineUpdateTimeout;
- (void)checkUpdateEntryWhenEnterVideoPage:(id)arg1;
- (void)checkUpdateEntryWhenEnterBrandSession:(id)arg1;
- (void)checkUpdateEntryWhenEnterBrandTimeline;
- (void)advanceCheckUpdateEntry:(unsigned int)arg1;
- (void)updateEntryWhenOpenChannelWeApp;
- (id)tryGetLocalTopBarChannelEntryData;
- (_Bool)isTopBarChannelOpen;
- (void)dealloc;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

