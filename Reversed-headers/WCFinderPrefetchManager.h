//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, WCFinderWCDB;
@protocol OS_dispatch_queue;

@interface WCFinderPrefetchManager : NSObject
{
    NSMutableDictionary *_managerDict;
    NSArray *_prefetchSceneArray;
    WCFinderWCDB *_finderDB;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSMutableArray *_allPrefetchFeatureArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allPrefetchFeatureArray; // @synthesize allPrefetchFeatureArray=_allPrefetchFeatureArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(retain, nonatomic) WCFinderWCDB *finderDB; // @synthesize finderDB=_finderDB;
@property(retain, nonatomic) NSArray *prefetchSceneArray; // @synthesize prefetchSceneArray=_prefetchSceneArray;
@property(retain, nonatomic) NSMutableDictionary *managerDict; // @synthesize managerDict=_managerDict;
- (id)_getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (id)getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (void)addPrefetchFeature:(id)arg1;
- (unsigned long long)maxValidPeriod;
- (void)saveAllData;
- (id)modelWithPrefetchScene:(unsigned long long)arg1;
- (id)initWithFinderDB:(id)arg1;

@end

