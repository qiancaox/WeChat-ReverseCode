//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMOnlineDeviceFunctionMsg, NSString;

@protocol IOnlineClientMgrExt <NSObject>

@optional
- (void)onExtDeviceSyncedDeviceNameWithMessage:(MMOnlineDeviceFunctionMsg *)arg1;
- (void)onExtDeviceNotifyUnlockWithMessage:(MMOnlineDeviceFunctionMsg *)arg1;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onExtDeviceActiveChanged:(_Bool)arg1 withActiveMessage:(MMOnlineDeviceFunctionMsg *)arg2;
- (void)onMarkTimelineListReadWithTid:(NSString *)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onOnlineInfoUpdated;
- (void)onLogoutWebFailed;
- (void)onLogoutWeb;
- (void)onLoginWeb;
@end

