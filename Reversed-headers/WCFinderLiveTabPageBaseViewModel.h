//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderLiveTabPageBaseViewModel : NSObject
{
    long long _scene;
    NSArray *_liveTabList;
    NSString *_title;
    unsigned long long _hideTabs;
    unsigned long long _prefechTabPullType;
    unsigned long long _prefechPreTabPullType;
    unsigned long long _prefechNextTabPullType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long prefechNextTabPullType; // @synthesize prefechNextTabPullType=_prefechNextTabPullType;
@property(nonatomic) unsigned long long prefechPreTabPullType; // @synthesize prefechPreTabPullType=_prefechPreTabPullType;
@property(nonatomic) unsigned long long prefechTabPullType; // @synthesize prefechTabPullType=_prefechTabPullType;
@property(nonatomic) unsigned long long hideTabs; // @synthesize hideTabs=_hideTabs;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *liveTabList; // @synthesize liveTabList=_liveTabList;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (_Bool)hasTabDataUpdated:(id)arg1;
- (_Bool)isEqualWith:(id)arg1;
- (void)updateVmWith:(id)arg1;
- (void)checkSyncToLocalLiveTabsCache:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)checkLoadLocalLiveTabsCache;

@end

