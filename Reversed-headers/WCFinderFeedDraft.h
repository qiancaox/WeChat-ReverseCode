//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCFinderDraftUploadProgress, WCFinderEventModel, WCFinderReportPostStateModel;

@interface WCFinderFeedDraft : NSObject <WCTTableCoding>
{
    _Bool _isNoServerDraft;
    _Bool _cloudDraft;
    NSString *_draftId;
    long long _objectType;
    WCFinderReportPostStateModel *_postStateModel;
    double _createTime;
    WCFinderEventModel *_eventInfo;
    WCFinderDraftUploadProgress *_progress;
}

+ (void)__wcdb_column_constraint_8:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)eventInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cloudDraft;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isNoServerDraft;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)postStateModel;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)objectType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)draftId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDraftUploadProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) WCFinderEventModel *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) _Bool cloudDraft; // @synthesize cloudDraft=_cloudDraft;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool isNoServerDraft; // @synthesize isNoServerDraft=_isNoServerDraft;
@property(retain, nonatomic) WCFinderReportPostStateModel *postStateModel; // @synthesize postStateModel=_postStateModel;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSString *draftId; // @synthesize draftId=_draftId;
- (_Bool)isModifyDraft;
- (long long)compareWithSorttime:(id)arg1;
- (long long)compareWithUploadStatus:(id)arg1;
- (void)setDataItem:(id)arg1;
- (id)dataItem;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

