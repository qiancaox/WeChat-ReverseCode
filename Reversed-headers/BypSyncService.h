//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "INewSyncPluginExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class BypSyncKeyBuff, MMLRUCache, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface BypSyncService : MMUserService <MMKernelExt, INewSyncPluginExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    _Bool _syncPaused;
    _Bool _enableBypSync;
    int _syncingScene;
    int _lastSyncScene;
    int _retryCount;
    NSSet *_allKnownSelectors;
    BypSyncKeyBuff *_syncBuff;
    NSMutableArray *_syncingSelectors;
    NSMutableSet *_needSyncSelectors;
    unsigned long long _firstAuthTime;
    MMLRUCache *_notifyUUIDCache;
}

+ (id)parseMsgWrapFromBypSyncItem:(id)arg1;
+ (_Bool)IsSupportMsgItemTypeWithSyncKeyType:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *notifyUUIDCache; // @synthesize notifyUUIDCache=_notifyUUIDCache;
@property(nonatomic) unsigned long long firstAuthTime; // @synthesize firstAuthTime=_firstAuthTime;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool enableBypSync; // @synthesize enableBypSync=_enableBypSync;
@property(retain, nonatomic) NSMutableSet *needSyncSelectors; // @synthesize needSyncSelectors=_needSyncSelectors;
@property(nonatomic) int lastSyncScene; // @synthesize lastSyncScene=_lastSyncScene;
@property(nonatomic) int syncingScene; // @synthesize syncingScene=_syncingScene;
@property(retain, nonatomic) NSMutableArray *syncingSelectors; // @synthesize syncingSelectors=_syncingSelectors;
@property(retain, nonatomic) BypSyncKeyBuff *syncBuff; // @synthesize syncBuff=_syncBuff;
@property(retain, nonatomic) NSSet *allKnownSelectors; // @synthesize allKnownSelectors=_allKnownSelectors;
@property(nonatomic) _Bool syncPaused; // @synthesize syncPaused=_syncPaused;
- (void)NotifyCheckSelector;
- (void)onAuthOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)mergeSyncBuffer:(id)arg1 newBuffer:(id)arg2;
- (void)onSyncFailed;
- (void)onSyncSuccessedWithResponse:(id)arg1;
- (void)tryRetrySync;
- (void)createSyncEventWithSelectors:(id)arg1 scene:(int)arg2;
- (_Bool)isSyncing;
- (void)checkQueue;
- (void)saveSyncKeyBuff;
- (void)syncWithSelectors:(id)arg1 syncAll:(_Bool)arg2 scene:(int)arg3;
- (void)syncWithActionNotifyData:(id)arg1 uuid:(id)arg2;
- (void)syncWithNotifyData:(id)arg1;
- (void)updateAllKnownSelectors:(id)arg1;
- (void)startSyncFinder;
- (void)config;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

