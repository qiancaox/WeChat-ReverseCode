//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderPreloadInfo, FinderStreamLayoutInfo, FinderStreamPrefechTimeIntervalConf, NSArray, NSData, NSString;

@interface WCFinderStreamPreFetchCache : NSObject
{
    _Bool _isPrefetchReported;
    _Bool _shouldFetchHistory;
    _Bool _needClear;
    _Bool _getHistoryNow;
    _Bool _forceChangePrefetchResult;
    _Bool _shouldAbandonCache;
    unsigned long long _prefetchType;
    unsigned long long _prefetchId;
    unsigned long long _cacheTime;
    double _userWaitingTime;
    NSData *_lastBuffer;
    NSArray *_dataArray;
    unsigned long long _prefetchLastFeedCount;
    unsigned long long _historyType;
    NSArray *_categoryInfoArray;
    NSString *_curLocation;
    FinderPreloadInfo *_preloadInfo;
    NSString *_historyHeadWording;
    FinderStreamPrefechTimeIntervalConf *_intervalConf;
    FinderStreamLayoutInfo *_layoutInfo;
    NSArray *_liveDataArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *liveDataArray; // @synthesize liveDataArray=_liveDataArray;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(retain, nonatomic) FinderStreamPrefechTimeIntervalConf *intervalConf; // @synthesize intervalConf=_intervalConf;
@property(nonatomic) _Bool shouldAbandonCache; // @synthesize shouldAbandonCache=_shouldAbandonCache;
@property(copy, nonatomic) NSString *historyHeadWording; // @synthesize historyHeadWording=_historyHeadWording;
@property(nonatomic) _Bool forceChangePrefetchResult; // @synthesize forceChangePrefetchResult=_forceChangePrefetchResult;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(retain, nonatomic) NSString *curLocation; // @synthesize curLocation=_curLocation;
@property(copy, nonatomic) NSArray *categoryInfoArray; // @synthesize categoryInfoArray=_categoryInfoArray;
@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(nonatomic) unsigned long long prefetchLastFeedCount; // @synthesize prefetchLastFeedCount=_prefetchLastFeedCount;
@property(nonatomic) _Bool getHistoryNow; // @synthesize getHistoryNow=_getHistoryNow;
@property(nonatomic) _Bool needClear; // @synthesize needClear=_needClear;
@property(nonatomic) _Bool shouldFetchHistory; // @synthesize shouldFetchHistory=_shouldFetchHistory;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) double userWaitingTime; // @synthesize userWaitingTime=_userWaitingTime;
@property(nonatomic) _Bool isPrefetchReported; // @synthesize isPrefetchReported=_isPrefetchReported;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long prefetchId; // @synthesize prefetchId=_prefetchId;
@property(nonatomic) unsigned long long prefetchType; // @synthesize prefetchType=_prefetchType;
- (_Bool)isStillValidWithTopObjectTidArray:(id)arg1;

@end

