//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMainSessionMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "IWXTalkPresentExt-Protocol.h"

@class MMTimer, MainFrameCellDataManager, NSMutableArray, NSMutableDictionary, NSString, WAContactGetter;
@protocol MainFrameLogicControllerDelegate;

@interface MainFrameLogicController : MMObject <INewSyncExt, IMainSessionMgrExt, IGroupMgrExt, INetworkStatusMgrExt, IMMNewSessionMgrExt, IWXTalkPresentExt, IContactMgrExt>
{
    id <MainFrameLogicControllerDelegate> m_delegate;
    _Bool m_bPlayNewMsgDuringOneSync;
    NSMutableArray *m_arrFilteredSession;
    NSString *m_nsLastSearchText;
    MMTimer *m_updateTimeLabelTimer;
    _Bool m_bReadyToLoadData;
    NSMutableDictionary *m_dicPlayNewMsgNotify;
    unsigned int m_shownCellMaxIndex;
    _Bool m_bIsPreCreatingCellData;
    long long m_lastPreCreateCellIndex;
    WAContactGetter *m_contactGetter;
    MainFrameCellDataManager *m_cellDataMgr;
    NSMutableArray *m_frontSessionArray;
    long long m_enableFoldMinCount;
    NSString *m_delayFoldSessionForGuide;
}

+ (id)getFakeCellDataFromCellData:(id)arg1;
+ (id)getPathOfLastFrontUserName;
+ (id)getLastFrontSessionArray;
+ (_Bool)hasMainFrameCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_delayFoldSessionForGuide; // @synthesize m_delayFoldSessionForGuide;
@property(nonatomic) long long m_enableFoldMinCount; // @synthesize m_enableFoldMinCount;
@property(retain, nonatomic) NSMutableArray *m_frontSessionArray; // @synthesize m_frontSessionArray;
@property(retain, nonatomic) NSString *m_nsLastSearchText; // @synthesize m_nsLastSearchText;
@property(readonly, nonatomic) _Bool m_bReadyToLoadData; // @synthesize m_bReadyToLoadData;
@property(nonatomic) __weak id <MainFrameLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)unfoldAllTopSessionWithAnimte:(_Bool)arg1;
- (void)foldSessionUsernames:(id)arg1 animate:(_Bool)arg2;
- (void)foldAllTopUnreadSession;
- (long long)getUnreadTopSessionCount;
- (void)checkUnfoldSession;
- (_Bool)canFoldTopSession;
- (_Bool)isTopSessionFolding;
- (void)deleteSessionInfoAndReload:(id)arg1;
- (long long)indexInAllVisibleSessions:(id)arg1;
- (id)indexPathOfSessionUserName:(id)arg1;
- (long long)indexOfSessionUserName:(id)arg1 inSection:(long long)arg2;
- (void)checkLoadSessions;
- (void)pluginsChanged:(id)arg1;
- (void)onNetworkStatusChange:(int)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnQuitGroup:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onNewSyncBegin;
- (void)reportBizSessionDelete:(id)arg1;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onWillDeleteSession:(id)arg1;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onNeedRebuild;
- (void)onSessionRebuildEnd;
- (void)onSessionRebuildBegin;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(_Bool)arg2;
- (void)onMainSessionReload;
- (void)clearResource;
- (unsigned int)getCurNetworkStatusType;
- (id)getSessionInfoByContact:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (id)findFirstIndexPathFrom:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)getFirstHasUnreadMsgSessionIndexFrom:(id)arg1;
- (id)getFilteredSessionInfo:(unsigned int)arg1;
- (unsigned long long)getFilteredSessionCount;
- (_Bool)isHasActiveUsr;
- (void)hideSession:(id)arg1;
- (void)deleteSession:(id)arg1;
- (unsigned int)getTotalUnreadCountInRedDot;
- (unsigned int)getTotalUnreadCountForAppIcon;
- (unsigned int)getTotalUnreadCount;
- (id)getSessionRawInfoAtIndexPath:(id)arg1;
- (id)getSessionInfoAtIndexPath:(id)arg1;
- (unsigned int)getVisibleSessionCount;
- (long long)getSessionCountForSection:(long long)arg1;
- (unsigned int)getSessionCount;
- (void)setReadyToLoadData;
- (void)onPageDidSelectTab;
- (void)onTableViewReloadDataWithVisibleCellsIndexPath:(id)arg1;
- (void)onPageDisappearWithVisibleCellsIndexPath:(id)arg1;
- (void)onPageAppearWithVisibleCellsIndexPath:(id)arg1;
- (void)onViewDidAppear;
- (void)onDidSelectCellAt:(id)arg1;
- (void)didEndDisplayCell:(id)arg1 isReloadingData:(_Bool)arg2;
- (void)willDisplayCell:(id)arg1 isReloadingData:(_Bool)arg2;
- (void)updateTimeForAllCellDatas;
- (id)getCellDataByUsrName:(id)arg1;
- (void)cleanupPreLoadCacheIfNeed:(unsigned int)arg1;
- (void)cleanupCellDataCache;
- (id)updateCellData:(id)arg1;
- (id)getCellDataForFilterSession:(unsigned int)arg1;
- (id)getCellDataAtIndexPath:(id)arg1;
- (id)getFakeCellData:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)asyncSaveFrontUserName;
- (void)syncSaveFrontUserName;
- (void)fixSelfHeadImage;
- (void)removeNotificationCenterObservers;
- (void)addNotificationCenterObservers;
- (void)unRegisterExt;
- (void)registerExt;
- (void)callUpdateSessionByName:(id)arg1;
- (void)callUpdateSession:(id)arg1;
- (void)playNewMsgNotify:(id)arg1 NotifyFlag:(long long)arg2;
- (_Bool)isPlayingOrRecording;
- (_Bool)isMsgUnread:(id)arg1 NotifyFlag:(long long)arg2;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)stopUpdateTimeLabelTimer;
- (void)startUpdateTimeLabelTimer;
- (void)startupPreCreateForCellData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

