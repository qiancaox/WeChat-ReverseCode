//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem20635 : KvReportBaseItem
{
    unsigned int _RecallType_23;
    unsigned int _IsMsgExposed_24;
    NSString *_AId_21;
    NSString *_TraceId_22;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int IsMsgExposed_24; // @synthesize IsMsgExposed_24=_IsMsgExposed_24;
@property(nonatomic) unsigned int RecallType_23; // @synthesize RecallType_23=_RecallType_23;
@property(copy, nonatomic) NSString *TraceId_22; // @synthesize TraceId_22=_TraceId_22;
@property(copy, nonatomic) NSString *AId_21; // @synthesize AId_21=_AId_21;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;

@end

