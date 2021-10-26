//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMLiveTaskMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString, SafeMutableDictionary;

@interface MMLiveCommentDataMgr : MMUserService <MMLiveTaskMgrExt, MMServiceProtocol>
{
    SafeMutableDictionary *_commentDataDict;
    unsigned long long _maxCacheCommentCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxCacheCommentCount; // @synthesize maxCacheCommentCount=_maxCacheCommentCount;
@property(retain, nonatomic) SafeMutableDictionary *commentDataDict; // @synthesize commentDataDict=_commentDataDict;
- (void)onExitLiveSuccessWithLiveTask:(id)arg1;
- (unsigned long long)maxCommentTempCacheCountForTaskId:(id)arg1;
- (unsigned long long)maxCommentCount;
- (id)getCommentDataWithoutCreatedWithTaskId:(id)arg1;
- (id)getCommentDataWithTaskId:(id)arg1;
- (void)checkBanCommentNotifyMsgFromAppendedComments:(id)arg1 forTaskId:(id)arg2;
- (void)checkSpecificMsgFromAppendedComments:(id)arg1 forTaskId:(id)arg2;
- (void)updateSelfHasCommitComment:(_Bool)arg1 forTaskId:(id)arg2;
- (id)getLastComment:(long long)arg1 taskId:(id)arg2;
- (unsigned long long)maxCommentCountInCache;
- (void)deleteComment:(long long)arg1 taskId:(id)arg2;
- (void)appendSelfInvokeAppMsgComment:(id)arg1 forTaskId:(id)arg2;
- (void)appendSelfCommitLiveComment:(id)arg1 forTaskId:(id)arg2 cacheSelfUnCompleted:(_Bool)arg3;
- (void)appendLiveCommentImmediately:(id)arg1 forTaskId:(id)arg2;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2;
- (id)getMMLiveCommentDataWithTaskId:(id)arg1;
- (void)initData;
- (void)updateMaxCacheCommentCount;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

