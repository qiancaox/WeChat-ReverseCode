//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMAppMsgUploadModel : MMObject <NSCopying, WCTTableCoding>
{
    unsigned int _m_uiCreateTime;
    unsigned int _uploadSize;
    unsigned int _m_uiMesLocalID;
    NSString *_m_nsToUsr;
}

+ (id)genSendFileUploadMsgFileInfo:(id)arg1;
+ (id)genAMUItem:(id)arg1;
+ (void)__wcdb_table_constraint_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiMesLocalID;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uploadSize;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiCreateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsToUsr;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID=_m_uiMesLocalID;
@property(nonatomic) unsigned int uploadSize; // @synthesize uploadSize=_uploadSize;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr=_m_nsToUsr;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

