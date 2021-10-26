//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WALitePackageDelegate <NSObject>
- (void)setupFileInfoByWxaPkgPath:(NSString *)arg1;
- (NSString *)getAppWebPageFullUrlWithAppid:(NSString *)arg1 version:(unsigned long long)arg2 relativePath:(NSString *)arg3 isDebugMode:(unsigned long long)arg4;
- (NSData *)getLocalCacheDataWithFullUrl:(NSString *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)hasLocalCacheDataWithFullUrl:(NSString *)arg1;
- (void)setupDownloadFinishedBlock:(void (^)(void))arg1;
- (void)download;
@end

