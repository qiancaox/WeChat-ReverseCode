//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyFromPrtlDelegate-Protocol.h"

@class NSThread;

@interface CBaseEvent : NSObject <NotifyFromPrtlDelegate>
{
    _Bool m_bStart;
    unsigned int m_uiEventType;
    unsigned int m_uiWXUin;
    unsigned int m_uiEventID;
    _Bool m_bStop;
    _Bool m_bEventFinish;
    _Bool m_bNeedNotify;
    _Bool m_bSyncRun;
    NSThread *m_oCurThread;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bEventFinish; // @synthesize m_bEventFinish;
@property(nonatomic) _Bool m_bStop; // @synthesize m_bStop;
@property __weak NSThread *m_oCurThread; // @synthesize m_oCurThread;
@property(nonatomic) _Bool m_bSyncRun; // @synthesize m_bSyncRun;
@property(nonatomic) _Bool m_bNeedNotify; // @synthesize m_bNeedNotify;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiWXUin; // @synthesize m_uiWXUin;
@property(nonatomic, getter=GetEventType) unsigned int m_uiEventType; // @synthesize m_uiEventType;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)AddOperationQueueEvent:(id)arg1;
- (void)emptyThreadTimer:(id)arg1;
- (_Bool)IsStart;
- (void)ForceStop;
- (void)SetStart:(_Bool)arg1;
- (void)TerminateIfNotReceived;
- (void)Stop;
- (void)TryStart;
- (void)dealloc;
- (id)init;

@end

