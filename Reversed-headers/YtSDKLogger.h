//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YtSDKLogger : NSObject
{
}

+ (void)showLog:(long long)arg1 withMessage:(id)arg2;
+ (void)logError:(id)arg1;
+ (void)logWarnning:(id)arg1;
+ (void)logInfo:(id)arg1;
+ (void)logDebug:(id)arg1;
+ (_Bool)needNativeLog;
+ (void)registerLoggerListener:(CDUnknownBlockType)arg1 withNativeLog:(_Bool)arg2;

@end

