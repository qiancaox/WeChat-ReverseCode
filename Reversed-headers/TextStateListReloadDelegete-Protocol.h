//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TextStatusHistoryInfo;

@protocol TextStateListReloadDelegete <NSObject>
- (void)removeAtRow:(long long)arg1 withHistoryItem:(TextStatusHistoryInfo *)arg2 success:(void (^)(void))arg3 fail:(void (^)(void))arg4;
@end

