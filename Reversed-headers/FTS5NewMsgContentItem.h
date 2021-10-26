//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTS5NewMsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _reservedInt;
    NSString *_msg;
    NSString *_reservedText;
}

+ (void)__wcdb_column_constraint_24:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_23:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_22:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_21:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_20:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_19:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_18:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_17:(struct WCTBinding *)arg1;
+ (void)__wcdb_virtual_table_16:(struct WCTBinding *)arg1;
+ (void)__wcdb_virtual_table_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reservedText;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reservedInt;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userNameId;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msg;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;
- (id)description;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

