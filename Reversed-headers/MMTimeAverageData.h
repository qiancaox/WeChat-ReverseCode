//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMTimeAverageData : NSObject
{
    NSMutableArray *_allRecord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allRecord; // @synthesize allRecord=_allRecord;
- (void)addRawDataToStr:(id)arg1 dict:(id)arg2 sortedArray:(id)arg3;
- (id)copyAllRawDataAndAverageDataExceptFirst;
- (id)descForFirstAndOtherAverage;
- (id)stringWithDict:(id)arg1;
- (id)numberObject:(id)arg1;
- (id)averageDictFromArray:(id)arg1;
- (id)firstDict;
- (id)averageDictExceptFirst;
- (id)averageDict;
- (void)addRecord:(id)arg1;
- (id)init;

@end

