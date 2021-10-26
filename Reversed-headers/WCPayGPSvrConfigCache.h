//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayGPSvrConfigCache : NSObject <PBCoding>
{
    unsigned int aaMaxTotalNum;
    unsigned int aaMaxPayerNum;
    unsigned int aaMaxReceiverNum;
    unsigned int aaDefaultMod;
    unsigned long long aaMaxTotalAmount;
    unsigned long long aaMaxPerAmount;
}

+ (void)initialize;
+ (void)PBArrayAdd_aaDefaultMod;
+ (void)PBArrayAdd_aaMaxReceiverNum;
+ (void)PBArrayAdd_aaMaxPayerNum;
+ (void)PBArrayAdd_aaMaxPerAmount;
+ (void)PBArrayAdd_aaMaxTotalAmount;
+ (void)PBArrayAdd_aaMaxTotalNum;
@property(nonatomic) unsigned int aaDefaultMod; // @synthesize aaDefaultMod;
@property(nonatomic) unsigned int aaMaxReceiverNum; // @synthesize aaMaxReceiverNum;
@property(nonatomic) unsigned int aaMaxPayerNum; // @synthesize aaMaxPayerNum;
@property(nonatomic) unsigned long long aaMaxPerAmount; // @synthesize aaMaxPerAmount;
@property(nonatomic) unsigned long long aaMaxTotalAmount; // @synthesize aaMaxTotalAmount;
@property(nonatomic) unsigned int aaMaxTotalNum; // @synthesize aaMaxTotalNum;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

