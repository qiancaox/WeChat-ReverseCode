//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString, WCFinderAdJumpInfoMutableArray, WCFinderhotSpotJumpInfoMutableArray;

@interface WCFinderJumpInfoContainer : NSObject <WCTTableCoding, PBCoding>
{
    NSString *tid;
    unsigned long long cacheTime;
    unsigned long long scene;
    WCFinderAdJumpInfoMutableArray *adJumpInfoArray;
    WCFinderhotSpotJumpInfoMutableArray *hotSpotJumpInfoArray;
}

+ (_Bool)arrayIsEqual:(id)arg1 toArray:(id)arg2;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)__wcdb_index_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hotSpotJumpInfoArray;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)adJumpInfoArray;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)scene;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_hotSpotJumpInfoArray;
+ (void)PBArrayAdd_adJumpInfoArray;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderhotSpotJumpInfoMutableArray *hotSpotJumpInfoArray; // @synthesize hotSpotJumpInfoArray;
@property(retain, nonatomic) WCFinderAdJumpInfoMutableArray *adJumpInfoArray; // @synthesize adJumpInfoArray;
@property(nonatomic) unsigned long long scene; // @synthesize scene;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid;
- (_Bool)isEqual:(id)arg1;
- (_Bool)removeAdJumpInfoWithBusinessType:(int)arg1;
- (void)startMiniAppPreload;
- (id)adEntryJumpInfo;
- (_Bool)adJumpInfoIsValid;
- (_Bool)isValid;
- (id)initWithTid:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

