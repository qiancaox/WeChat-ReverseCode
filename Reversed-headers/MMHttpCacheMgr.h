//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMHttpConnectionDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface MMHttpCacheMgr : MMUserService <MMServiceProtocol, MMHttpConnectionDelegate>
{
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (void)ClearCacheDirByUsrName:(id)arg1;
+ (void)ClearCacheDir:(unsigned int)arg1;
+ (id)GetFilePath:(id)arg1 Type:(unsigned int)arg2;
+ (id)GetCacheKey:(id)arg1;
+ (id)GetCacheDir:(unsigned int)arg1;
+ (unsigned int)GetCacheType:(id)arg1;
- (void)HttpConnectionFail:(id)arg1;
- (void)HttpConnectionFinished:(id)arg1 cachekey:(id)arg2 response:(id)arg3 ErrNo:(int)arg4;
- (void)LoadCache:(id *)arg1 CacheKey:(id)arg2 Type:(unsigned int)arg3;
- (_Bool)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4 RefererHeader:(id)arg5;
- (_Bool)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

