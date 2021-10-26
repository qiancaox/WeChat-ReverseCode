//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "INewSyncExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FIFOFileQueue, NSMutableDictionary, NSString;
@protocol WCAdvertiseCommentUploadMgrDelegate;

@interface WCAdvertiseCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt>
{
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    int m_uploadingCount;
    id <WCAdvertiseCommentUploadMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdvertiseCommentUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onNewSyncOplogOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)pushBackTopTask;
- (void)popTopTask;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (_Bool)doComment:(id)arg1;
- (void)tryStartNextTask;
- (void)addCommentToWCObjectCache:(id)arg1;
- (void)deleteAllCommentInQueue;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (void)addComment:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

