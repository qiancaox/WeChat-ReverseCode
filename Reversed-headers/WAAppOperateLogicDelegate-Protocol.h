//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WAAppItemOperation;

@protocol WAAppOperateLogicDelegate <NSObject>

@optional
- (void)onOprationExcuted:(WAAppItemOperation *)arg1 errCode:(int)arg2;
- (void)onGetNearByStateFromSvrWithState:(_Bool)arg1 scene:(unsigned int)arg2 errCode:(int)arg3;
- (void)onGetLastestAppItemsFromSvrByStarList:(NSArray *)arg1 scene:(unsigned int)arg2 errCode:(int)arg3;
- (void)onGetLastestAppItemsFromSvrByRecordList:(NSArray *)arg1 scene:(unsigned int)arg2 hasMore:(_Bool)arg3 errCode:(int)arg4;
@end

