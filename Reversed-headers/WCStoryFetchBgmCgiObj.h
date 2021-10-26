//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCStoryBaseCGIObj.h"

@class NSMutableArray;

@interface WCStoryFetchBgmCgiObj : WCStoryBaseCGIObj
{
    int _businessId;
    NSMutableArray *_imageDatas;
    unsigned long long _videoDuration;
    unsigned long long _requestId;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) int businessId; // @synthesize businessId=_businessId;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSMutableArray *imageDatas; // @synthesize imageDatas=_imageDatas;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)buildRequest;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

