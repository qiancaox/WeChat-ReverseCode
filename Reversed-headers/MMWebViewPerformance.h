//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MMWebViewPerformance : NSObject
{
    NSMutableArray *_timeRecordList;
    NSMutableDictionary *_timeRecordDic;
    unsigned long long _startTime;
}

+ (unsigned long long)currentTimeInMs;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *timeRecordDic; // @synthesize timeRecordDic=_timeRecordDic;
@property(retain, nonatomic) NSMutableArray *timeRecordList; // @synthesize timeRecordList=_timeRecordList;
- (int)relativeRecordTimeForName:(id)arg1;
- (void)removeAllRecords;
- (void)sortTimeRecord;
- (void)recordTimeWithName:(id)arg1 time:(unsigned long long)arg2 newCategory:(_Bool)arg3 detail:(id)arg4;
- (void)recordTimeWithName:(id)arg1 newCategory:(_Bool)arg2 detail:(id)arg3;
- (id)description;
- (id)init;

@end

