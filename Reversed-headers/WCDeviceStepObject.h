//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface WCDeviceStepObject : MMObject
{
    unsigned int beginTime;
    unsigned int endTime;
    unsigned int m7StepCount;
    unsigned int hkStepCount;
    NSMutableArray *allHKSampleSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allHKSampleSource; // @synthesize allHKSampleSource;
@property(nonatomic) unsigned int hkStepCount; // @synthesize hkStepCount;
@property(nonatomic) unsigned int m7StepCount; // @synthesize m7StepCount;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime;

@end

