//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString, RecommendConfiguration;

@interface WCFinderDataItemRecommendConfiguration : NSObject <PBCoding, WCTColumnCoding>
{
    _Bool favRelateListEnable;
    _Bool favRelateListEnableOnClick;
    _Bool likeRelateListEnable;
    unsigned long long maxUnreadCount;
    RecommendConfiguration *config;
}

+ (id)configurationWithConfig:(id)arg1 isFeedContainVideo:(_Bool)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_likeRelateListEnable;
+ (void)PBArrayAdd_favRelateListEnableOnClick;
+ (void)PBArrayAdd_favRelateListEnable;
+ (void)PBArrayAdd_config;
+ (void)PBArrayAdd_maxUnreadCount;
- (void).cxx_destruct;
@property(nonatomic) _Bool likeRelateListEnable; // @synthesize likeRelateListEnable;
@property(nonatomic) _Bool favRelateListEnableOnClick; // @synthesize favRelateListEnableOnClick;
@property(nonatomic) _Bool favRelateListEnable; // @synthesize favRelateListEnable;
@property(retain, nonatomic) RecommendConfiguration *config; // @synthesize config;
@property(nonatomic) unsigned long long maxUnreadCount; // @synthesize maxUnreadCount;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

