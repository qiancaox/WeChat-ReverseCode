//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface WCTextStateDB : MMUserService <MMServiceProtocol>
{
    WCTDatabase *_database;
    WCTTable *_likeInfoTable;
    WCTTable *_likeInfoCacheTable;
    WCTTable *_readInfoTable;
    WCTTable *_referenceInfoTable;
    WCTTable *_referenceInfoCacheTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *referenceInfoCacheTable; // @synthesize referenceInfoCacheTable=_referenceInfoCacheTable;
@property(retain, nonatomic) WCTTable *referenceInfoTable; // @synthesize referenceInfoTable=_referenceInfoTable;
@property(retain, nonatomic) WCTTable *readInfoTable; // @synthesize readInfoTable=_readInfoTable;
@property(retain, nonatomic) WCTTable *likeInfoCacheTable; // @synthesize likeInfoCacheTable=_likeInfoCacheTable;
@property(retain, nonatomic) WCTTable *likeInfoTable; // @synthesize likeInfoTable=_likeInfoTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)getAllUnreadReferenceInfo;
- (void)markAllReferenceRead;
- (unsigned int)getUnreadReferenceCountForTextStateId:(id)arg1;
- (void)setReferenceCount:(unsigned int)arg1 textStateId:(id)arg2;
- (unsigned int)getReferenceCountWithTextStateId:(id)arg1;
- (id)getReferenceInfoWithTextStateId:(id)arg1 maxCount:(unsigned int)arg2;
- (_Bool)deleteExistReferenceInfoWithInfo:(id)arg1 table:(id)arg2;
- (void)removeAllTextStateReferenceInfos;
- (void)removeTextStateReferenceInto:(id)arg1;
- (_Bool)addTextStateReferenceInfo:(id)arg1;
- (id)getAllReferenceInfoWithTime:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)getAllReferenceInfoLimit:(unsigned int)arg1;
- (void)clearExpiredReadInfo;
- (_Bool)setReadForTopicId:(id)arg1 members:(id)arg2;
- (_Bool)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3;
- (_Bool)isTextStateRead:(id)arg1;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (unsigned int)getSelfTopicChatNumber;
- (void)setSelfTopicChatNumber:(unsigned int)arg1;
- (_Bool)deleteExistLikeInfosWithInfo:(id)arg1 table:(id)arg2;
- (id)getLikeInfoWithStateID:(id)arg1 limit:(unsigned int)arg2;
- (void)markAllLikeInfoRead;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)getAllLikeInfoLimit:(unsigned int)arg1;
- (unsigned int)getUnreadLikeCountForTextStateId:(id)arg1;
- (id)getAllUnreadLikeInfo;
- (void)removeAllTextStateLikeInfos;
- (void)removeTextStateLikeInto:(id)arg1;
- (_Bool)addTextStateLikeInfo:(id)arg1;
- (void)setLikeCountWithStateId:(id)arg1 likeCount:(unsigned int)arg2;
- (unsigned int)getLikeCountWithStateId:(id)arg1;
- (unsigned int)getLikeAndReferenceCountWithTextStateId:(id)arg1;
- (void)callReceiveNotifyExtensionWithTextStateId:(id)arg1;
- (id)getLatestUnreadBaseInfo;
- (void)markAllNotifyRead;
- (unsigned int)getUnreadNotifyCount;
- (unsigned int)getTotalUnreadMessageCount;
- (void)closeDB;
- (void)createReferenceInfoCacheTable;
- (void)createReferenceInfoTable;
- (void)createReadInfoTable;
- (_Bool)createLikeInfoCacheTable;
- (_Bool)createLikeInfoTable;
- (void)createTables;
- (_Bool)reloadDataBase;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

