//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface MMLanguagePackageDownloadMgr : MMUserService <MMServiceProtocol, MMResourceMgrExt>
{
    NSString *m_sLangRootPath;
    _Bool m_hasUpdate;
    _Bool isCheckingPackageList;
    unsigned int uiInterval;
}

- (void).cxx_destruct;
- (void)checkIfUpdatedForLang:(id)arg1 andRefreshOn:(unsigned int)arg2;
- (void)checkResouce;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)doCheckUpdateOnMainThread:(_Bool)arg1;
- (void)doCheckUpdateDelay;
- (void)doCheckUpdate;
- (_Bool)checkInterval:(_Bool)arg1;
- (unsigned int)getLangVersion;
- (void)updateVersion:(id)arg1;
- (id)getLangVersionFile;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

