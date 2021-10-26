//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCLazyInitObjectProtocol-Protocol.h"

@class MMLanguageCache, NSBundle, NSString;

@interface MMLanguageMgr : MMRootService <WCLazyInitObjectProtocol, MMServiceProtocol>
{
    NSString *m_nsCurSystemLanguage;
    NSString *m_curLanguage;
    NSBundle *m_curBundle;
    NSBundle *m_updateBundle;
    NSBundle *m_backupBundle;
    NSBundle *m_updateBackupBundle;
    MMLanguageCache *m_lanCache;
    _Bool m_lanCacheIsSaved;
    _Bool m_firstInitLanguage;
    _Bool haveLazyInit;
    _Bool _downloadPackageRightNow;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(nonatomic) _Bool downloadPackageRightNow; // @synthesize downloadPackageRightNow=_downloadPackageRightNow;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (_Bool)isVersionString:(id)arg1 olderThanMajor:(unsigned int *)arg2 minor:(unsigned int *)arg3 minorex:(unsigned int *)arg4;
- (void)ClearOlderVersionData;
- (void)refreshNewVersionForCurLanguage:(id)arg1 fromViewScene:(unsigned int)arg2;
- (void)setCurLanguage:(id)arg1 shouldChangeMainFrame:(_Bool)arg2;
- (void)setCurLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
- (_Bool)curLanguageIsChineseTraditional;
- (_Bool)curLanguageIsChinese;
- (_Bool)curLanguageIsEnglish;
- (id)getStringForLanguage:(id)arg1 withID:(id)arg2;
- (id)p_getStringForCurLanguage:(id)arg1;
- (id)getStringForCurLanguageWithBackupBundle:(id)arg1 table:(id)arg2;
- (id)getSupportedLanguageDisplayNames;
- (id)getSupportedLanguages;
- (id)getCurLanguageDisplayName;
- (id)getCurLanguage;
- (id)getCurBundle;
- (id)init;
- (id)correctMainBundle;
- (void)initLanguage;
- (void)resetString:(id)arg1 for:(id)arg2;
- (id)getCacheString:(id)arg1;
- (void)initCache;
- (_Bool)isLanaguageValid;
- (void)initBackUpLanguage:(id)arg1;
- (id)getBackUpLanguage;
- (id)isSupportedLanguage:(id)arg1;
- (id)getRealCurSystemLanguage;
- (id)getCurSystemLanguage;
- (id)trimForiOS9Plus:(id)arg1;
- (void)internalSetCurLanguage:(id)arg1;
- (void)internalChangeCurLanguage;
- (id)internalGetCurLanguage;
- (id)getLanguagePath;
- (id)getLangPackageFileForLang:(id)arg1;
- (id)getLangPackagePathForLang:(id)arg1;
- (id)getLangPackageRootPath;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)getStringForCurLanguage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

