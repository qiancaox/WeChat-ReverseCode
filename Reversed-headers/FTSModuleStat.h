//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTSModuleStat : NSObject
{
    unsigned int _moduleType;
    unsigned int _resultCnt;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

@property(nonatomic) unsigned int resultCnt; // @synthesize resultCnt=_resultCnt;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int moduleType; // @synthesize moduleType=_moduleType;
- (unsigned int)calTime;

@end

