//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class CdnTaskInfo, NSMutableArray, NSMutableDictionary, NSString, PreloadVideoCleanLogic;

@interface DownloadVideoCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrPreloadTask;
    NSMutableDictionary *m_dicDownloadVideoCache;
    _Bool _bEnablePreload;
    PreloadVideoCleanLogic *m_preloadCacheCleanLogic;
    CdnTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)updateVideoDownloadModeWithClientId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (_Bool)IsVideoMoovHasDownloadedByMessageWrap:(id)arg1;
- (_Bool)StopVideoStreamingDownload:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)ResumePreload;
- (void)PausePreload;
- (void)Stop;
- (void)StopDownloadByChatName:(id)arg1;
- (_Bool)StopDownload:(id)arg1 downloadTaskInfo:(id *)arg2 needNotify:(_Bool)arg3;
- (_Bool)StopDownload:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StopCurDownload:(id *)arg1;
- (_Bool)canUseVideoStreamFullDownloadLogic:(id)arg1;
- (_Bool)shouldUseOldVideoDownloadLogic:(id)arg1;
- (_Bool)canUseStreamStopLogic:(id)arg1;
- (unsigned long long)GetVideoMessageDownloadingMode:(id)arg1;
- (void)StartPreloadVideo:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4 Silent:(_Bool)arg5;
- (unsigned long long)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4;
- (_Bool)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2;
- (_Bool)IsMsgCurrentDownloading:(id)arg1 inNormalDownloadQueue:(_Bool)arg2;
- (_Bool)IsMsgInPreloadQueue:(id)arg1;
- (_Bool)IsMsgInDownloadQueue:(id)arg1;
- (void)updateFileAndCache:(id)arg1;
- (_Bool)isFirstDownloadTask:(id)arg1;
- (_Bool)checkDownloadState:(id)arg1;
- (void)CheckQueue;
- (void)localCacheDownloadSuccess;
- (void)deleteCacheForChatNames:(id)arg1;
- (void)deleteCacheForChatName:(id)arg1;
- (_Bool)CheckForLocalCache:(id)arg1;
- (void)DelTask:(id)arg1 inQueue:(id)arg2;
- (void)DelTaskInPreloadQueue:(id)arg1;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)videoKVReportWithResult:(const struct C2CDownloadResult *)arg1;
- (void)DownloadFail:(int)arg1 oDownloadInfo:(id)arg2;
- (void)DownloadOk;
- (void)updateVideoThumb;
- (void)updateVideoThumbImage;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2 result:(const struct C2CDownloadResult *)arg3;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2;
- (unsigned long long)CleanAllPreloadTempFile;
- (void)CleanOutOfDatePreloadTempFile;
- (void)RemovePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)AddPreloadRecord:(id)arg1;
- (_Bool)IsNextPreloadOverDailyMaxCount;
- (void)RemoveCacheByLRU;
- (void)SaveCacheData;
- (void)LoadCacheData;
- (id)GetVideoCachePath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

