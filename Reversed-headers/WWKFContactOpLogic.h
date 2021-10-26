//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface WWKFContactOpLogic : MMObject <PBMessageObserverDelegate>
{
    NSString *_key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSyncContactDeleteOperationToSvr:(id)arg1;
- (void)requestUnBindWWKFContactWithUserName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)onSyncContactAddOperationToSvr:(id)arg1;
- (void)requestBindWWKFContact:(id)arg1 url:(id)arg2 shareTicket:(id)arg3 notifyCtx:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)onFetchWWKFContactFromSvr:(id)arg1;
- (void)fetchWWKFContactFromSvr:(id)arg1 clientStatus:(id)arg2 scene:(int)arg3 completeBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)clientStatusForUserName:(id)arg1;
- (void)fetchWWKFContactWithUrl:(id)arg1 scene:(int)arg2 onSuccess:(CDUnknownBlockType)arg3 onFail:(CDUnknownBlockType)arg4;
- (void)fetchWWKFContactWithUserName:(id)arg1 scene:(int)arg2 onSuccess:(CDUnknownBlockType)arg3 onFail:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

