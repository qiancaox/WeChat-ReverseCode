//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABTestItem, NSArray, NSString;

@interface AsyncEmoticonRecommendationTask : NSObject
{
    _Bool _localTaskFinish;
    _Bool _remoteTaskFinish;
    NSString *_identifier;
    NSString *_recSessionId;
    NSArray *_localList;
    NSArray *_remoteList;
    unsigned long long _startTime;
    ABTestItem *_abTestItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABTestItem *abTestItem; // @synthesize abTestItem=_abTestItem;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *remoteList; // @synthesize remoteList=_remoteList;
@property(retain, nonatomic) NSArray *localList; // @synthesize localList=_localList;
@property(nonatomic) _Bool remoteTaskFinish; // @synthesize remoteTaskFinish=_remoteTaskFinish;
@property(nonatomic) _Bool localTaskFinish; // @synthesize localTaskFinish=_localTaskFinish;
@property(retain, nonatomic) NSString *recSessionId; // @synthesize recSessionId=_recSessionId;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *sessionId;
- (void)dealloc;
- (id)description;
- (id)init;

@end

