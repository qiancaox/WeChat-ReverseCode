//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FriendAsistSessionMgr : MMUserService <MMServiceProtocol, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt>
{
    NSMutableDictionary *m_dicUnReadCount;
}

- (void).cxx_destruct;
- (void)onNewContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onSessionUpgrade;
- (void)moveOldData;
- (void)OnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)OnAddMsgForSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (void)AddHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3;
- (id)GetLastMessage:(id)arg1 HelloUser:(id)arg2 OnlyTo:(_Bool)arg3;
- (id)GetLastMessage:(id)arg1 OnlyTo:(_Bool)arg2;
- (void)ClearMsg:(id)arg1 HelloUser:(id)arg2;
- (void)ClearMsg:(id)arg1;
- (void)ClearUnRead:(id)arg1 HelloUser:(id)arg2;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(_Bool)arg4;
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(_Bool)arg3;
- (unsigned int)getCountForChat:(id)arg1;
- (unsigned int)getUnreadCountForChat:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

