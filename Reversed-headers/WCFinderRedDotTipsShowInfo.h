//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSMutableArray, NSString, WCFinderTipsShowClientStatsInfo;

@interface WCFinderRedDotTipsShowInfo : NSObject <PBCoding>
{
    unsigned long long showType;
    unsigned long long count;
    NSString *title;
    NSString *iconUrl;
    NSString *path;
    unsigned long long clearType;
    NSString *parent;
    NSString *tipsID;
    unsigned long long showExtInfoType;
    NSData *showExtInfo;
    NSMutableArray *multiIconUrls;
    WCFinderTipsShowClientStatsInfo *clientStatsInfo;
    unsigned long long showLiveTabId;
    unsigned long long ignoreFreqLimit;
    unsigned long long exposeCountLimit;
    unsigned long long exposeLimitStrategy;
    unsigned long long coldTime;
}

+ (id)showInfoWith:(id)arg1 tipsID:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_coldTime;
+ (void)PBArrayAdd_exposeLimitStrategy;
+ (void)PBArrayAdd_exposeCountLimit;
+ (void)PBArrayAdd_ignoreFreqLimit;
+ (void)PBArrayAdd_showLiveTabId;
+ (void)PBArrayAdd_clientStatsInfo;
+ (void)PBArrayAdd_multiIconUrls;
+ (void)PBArrayAdd_showExtInfo;
+ (void)PBArrayAdd_showExtInfoType;
+ (void)PBArrayAdd_tipsID;
+ (void)PBArrayAdd_parent;
+ (void)PBArrayAdd_clearType;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_showType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long coldTime; // @synthesize coldTime;
@property(nonatomic) unsigned long long exposeLimitStrategy; // @synthesize exposeLimitStrategy;
@property(nonatomic) unsigned long long exposeCountLimit; // @synthesize exposeCountLimit;
@property(nonatomic) unsigned long long ignoreFreqLimit; // @synthesize ignoreFreqLimit;
@property(nonatomic) unsigned long long showLiveTabId; // @synthesize showLiveTabId;
@property(retain, nonatomic) WCFinderTipsShowClientStatsInfo *clientStatsInfo; // @synthesize clientStatsInfo;
@property(retain, nonatomic) NSMutableArray *multiIconUrls; // @synthesize multiIconUrls;
@property(retain, nonatomic) NSData *showExtInfo; // @synthesize showExtInfo;
@property(nonatomic) unsigned long long showExtInfoType; // @synthesize showExtInfoType;
@property(retain, nonatomic) NSString *tipsID; // @synthesize tipsID;
@property(retain, nonatomic) NSString *parent; // @synthesize parent;
@property(nonatomic) unsigned long long clearType; // @synthesize clearType;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned long long count; // @synthesize count;
@property(nonatomic) unsigned long long showType; // @synthesize showType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)generateFinderShowInfo;
- (id)getRedDotExtReportInfo;
- (id)tipsShowTabExtInfo;
- (id)tipsShowEntranceExtInfo;
- (id)tipsShowDiscoveryExtInfo;
- (_Bool)isRightCircleImageShowType;
- (_Bool)isImageIconHiddenRedDot;
- (_Bool)isTitleAtRight;
- (_Bool)isSquareIconShowType;
- (_Bool)isLittleIconShowType;
- (_Bool)isImageIconShowType;
- (_Bool)isVaildInfo;
- (_Bool)checkIfNeedSyncSvrColdTimeExpired;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

