//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TextStateBaseNotifyInfo-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface TextStateReferenceInfo : NSObject <WCTTableCoding, TextStateBaseNotifyInfo>
{
    _Bool _isRead;
    _Bool _notify;
    unsigned int _createTime;
    unsigned int _type;
    unsigned int _referenceCount;
    NSString *_textStateId;
    NSString *_username;
    NSString *_extInfo;
}

+ (id)referenceInfoFromStatusReferenced:(id)arg1 textStateId:(id)arg2;
+ (id)referenceInfoFromXMLInfo:(id)arg1 extInfo:(id)arg2;
+ (void)__wcdb_table_constraint_10:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_9:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)notify;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isRead;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)referenceCount;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)textStateId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool notify; // @synthesize notify=_notify;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) unsigned int referenceCount; // @synthesize referenceCount=_referenceCount;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

