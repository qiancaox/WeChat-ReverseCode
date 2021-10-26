//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSData, NSString;

@interface WCFinderLiveRelateListCGI : WCFinderBaseCgi
{
    NSData *_lastBuff;
    NSString *_tid;
    NSString *_nonceID;
    NSString *_sessionID;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    unsigned long long _commentScene;
    NSData *_liveRelatedLastBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveRelatedLastBuff; // @synthesize liveRelatedLastBuff=_liveRelatedLastBuff;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLastBuff:(id)arg1 tid:(id)arg2 nonceID:(id)arg3 sessionID:(id)arg4 location:(id)arg5 scene:(long long)arg6 commentScene:(unsigned long long)arg7 clientStatus:(id)arg8 liveClientStatus:(id)arg9 lbsTabTipsInfo:(id)arg10 liveRelatedLastBuff:(id)arg11 commByPass:(id)arg12 pullType:(long long)arg13 successful:(CDUnknownBlockType)arg14 failure:(CDUnknownBlockType)arg15;

@end

