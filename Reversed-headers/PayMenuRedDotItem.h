//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface PayMenuRedDotItem : NSObject <PBCoding>
{
    unsigned int expireTime;
    NSString *itemName;
    NSString *wording;
}

+ (void)initialize;
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_itemName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName;
- (void)copyFrom:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

