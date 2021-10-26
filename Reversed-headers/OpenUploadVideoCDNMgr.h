//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CdnTaskInfo, FIFOFileQueue, NSMutableArray, NSString;
@protocol OpenUploadCDNMgrDelegate;

@interface OpenUploadVideoCDNMgr : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned int _curEventId;
    CdnTaskInfo *_curTaskInfo;
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <OpenUploadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(nonatomic) __weak id <OpenUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (_Bool)CreateCurUploadEvent:(unsigned int)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)ClearEventID;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(long long)arg1 aeskey:(id)arg2;
- (void)CheckQueue;
- (void)InitQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

