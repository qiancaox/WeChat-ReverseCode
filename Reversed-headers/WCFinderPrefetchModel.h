//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, WCFinderUserPrefetchRelatedInfo;
@protocol WCFinderPrefetchModelDelegate;

@interface WCFinderPrefetchModel : NSObject
{
    id <WCFinderPrefetchModelDelegate> _delegate;
    WCFinderUserPrefetchRelatedInfo *_userRelatedInfo;
    NSTimer *_updateTimer;
    unsigned long long _scene;
    NSMutableArray *_probMatrix;
    NSMutableArray *_timeProbArray;
}

+ (id)prefetchConfigWithScene:(unsigned long long)arg1;
+ (id)MMKVKeyWithPrfetchScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *timeProbArray; // @synthesize timeProbArray=_timeProbArray;
@property(retain, nonatomic) NSMutableArray *probMatrix; // @synthesize probMatrix=_probMatrix;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) WCFinderUserPrefetchRelatedInfo *userRelatedInfo; // @synthesize userRelatedInfo=_userRelatedInfo;
@property(nonatomic) __weak id <WCFinderPrefetchModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getPrefetchSceneWithLastFeature:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)addCountFromScene:(unsigned long long)arg1 toScene:(unsigned long long)arg2;
- (void)calculateTimeRelatedDataWithConfig:(id)arg1;
- (void)calculateProbMatrixWithConfig:(id)arg1;
- (void)resumeModel;
- (_Bool)isPrefetchSwitchOn;
- (double)probDueToSeriesWithConfig:(id)arg1;
- (double)probDueToTime:(unsigned long long)arg1 config:(id)arg2;
- (double)currentEnterProbWithCurrentTimestamp:(unsigned long long)arg1 config:(id)arg2;
- (double)currentEnterProb;
- (void)updateUserRelatedInfoIfNeeded:(unsigned long long)arg1 config:(id)arg2;
- (_Bool)shouldPrefetchNow;
- (void)updateModel;
- (void)save;
- (void)dealloc;
- (id)initWithPrefetchScene:(unsigned long long)arg1;

@end

