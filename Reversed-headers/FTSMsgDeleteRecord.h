//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@interface FTSMsgDeleteRecord : NSObject <WCTTableCoding>
{
    unsigned int _userNameId;
    unsigned int _localId;
}

+ (void)__wcdb_table_constraint_53:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_52:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_51:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localId;
+ (const struct WCTProperty *)__wcdb_synthesize_50:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userNameId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

