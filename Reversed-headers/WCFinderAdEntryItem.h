//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WCFinderAdEntryItem : NSObject <WCTColumnCoding, PBCoding>
{
    unsigned int productType;
    unsigned int posType;
    NSString *tid;
    unsigned long long destType;
    NSString *iconUrl;
    NSString *recommendReason;
    NSString *wording;
    NSString *url;
    unsigned long long cacheTime;
    NSString *uxinfo;
    NSString *rl;
    NSString *apUrl;
    NSString *traceId;
    NSString *adPosId;
    NSString *aid;
    NSString *groupId;
    unsigned long long pt;
    unsigned long long scene;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)__wcdb_column_constraint_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)scene;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)pt;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)posType;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)groupId;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)aid;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)productType;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)adPosId;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)traceId;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)apUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rl;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uxinfo;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)url;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wording;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)recommendReason;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)iconUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)destType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_pt;
+ (void)PBArrayAdd_posType;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_aid;
+ (void)PBArrayAdd_productType;
+ (void)PBArrayAdd_adPosId;
+ (void)PBArrayAdd_traceId;
+ (void)PBArrayAdd_apUrl;
+ (void)PBArrayAdd_rl;
+ (void)PBArrayAdd_uxinfo;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_destType;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene;
@property(nonatomic) unsigned long long pt; // @synthesize pt;
@property(nonatomic) unsigned int posType; // @synthesize posType;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId;
@property(copy, nonatomic) NSString *aid; // @synthesize aid;
@property(nonatomic) unsigned int productType; // @synthesize productType;
@property(copy, nonatomic) NSString *adPosId; // @synthesize adPosId;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId;
@property(copy, nonatomic) NSString *apUrl; // @synthesize apUrl;
@property(copy, nonatomic) NSString *rl; // @synthesize rl;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *wording; // @synthesize wording;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(nonatomic) unsigned long long destType; // @synthesize destType;
@property(copy, nonatomic) NSString *tid; // @synthesize tid;
- (_Bool)isEqual:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

