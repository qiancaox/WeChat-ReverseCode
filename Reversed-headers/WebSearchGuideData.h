//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WebSearchGuideData : MMObject <PBCoding>
{
    _Bool isPreloadData;
    unsigned long long expiredTime;
    NSString *json;
    NSString *searchID;
}

+ (void)initialize;
+ (void)PBArrayAdd_isPreloadData;
+ (void)PBArrayAdd_searchID;
+ (void)PBArrayAdd_json;
+ (void)PBArrayAdd_expiredTime;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPreloadData; // @synthesize isPreloadData;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID;
@property(retain, nonatomic) NSString *json; // @synthesize json;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

