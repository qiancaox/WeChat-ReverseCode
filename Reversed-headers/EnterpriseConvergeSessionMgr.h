//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IEnterpriseBrandSessionMgrExt-Protocol.h"
#import "IEnterpriseSessionMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface EnterpriseConvergeSessionMgr : MMUserService <IEnterpriseSessionMgrExt, IEnterpriseBrandSessionMgrExt, MMServiceProtocol>
{
    NSMutableDictionary *_dicMainUserName2ConvergedSessionList;
}

- (void).cxx_destruct;
- (void)updateAndConvergeMainSession:(id)arg1;
- (id)sortAndConvergeSessionList:(id)arg1 chatSessionList:(id)arg2;
- (void)updateConvergeSessionList:(id)arg1;
- (void)onEnterpriseChatSessionChanged:(id)arg1;
- (void)onEnterpriseBrandSessionsChanged:(id)arg1;
- (unsigned int)sessionCountForMainBrand:(id)arg1;
- (id)getAllSessionInfoList:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

