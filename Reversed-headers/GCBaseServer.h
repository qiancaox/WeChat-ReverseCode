//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GCBaseServer : NSObject
{
    _Bool _exited;
    NSMutableDictionary *_longPollingTimeDict;
    long long _requestSeq;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestSeq; // @synthesize requestSeq=_requestSeq;
@property(retain, nonatomic) NSMutableDictionary *longPollingTimeDict; // @synthesize longPollingTimeDict=_longPollingTimeDict;
@property(nonatomic) _Bool exited; // @synthesize exited=_exited;
- (float)delaySecondsAfterFaile;
- (void)onExitRoom;
- (void)exitRoom;
- (void)invalidatePreviousRequest;
- (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(_Bool)arg5 additionalInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)checkResponseError:(id)arg1;
- (_Bool)defaultSpeedRequeset;
- (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

