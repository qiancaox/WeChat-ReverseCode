//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerMessageCallback <NSObject>
- (void)onError:(TPThumbPlayerWrapper *)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)onInfoObject:(TPThumbPlayerWrapper *)arg1 infoType:(int)arg2 objectParam:(void *)arg3;
- (void)onInfoLong:(TPThumbPlayerWrapper *)arg1 infoType:(int)arg2 lParam1:(long long)arg3 lParam2:(long long)arg4;
- (void)onASyncCallResult:(TPThumbPlayerWrapper *)arg1 callType:(int)arg2 opaque:(long long)arg3 errorType:(int)arg4 errorCode:(int)arg5;
@end

