//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface LiveChooseClarityCacheInfo : NSObject <PBCoding>
{
    unsigned int settingTime;
    unsigned int cdnQualityTag;
    unsigned int currentUin;
    unsigned long long liveTaskId;
    NSString *tagName;
    NSString *videoQualityLevelDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_currentUin;
+ (void)PBArrayAdd_cdnQualityTag;
+ (void)PBArrayAdd_settingTime;
+ (void)PBArrayAdd_videoQualityLevelDesc;
+ (void)PBArrayAdd_tagName;
+ (void)PBArrayAdd_liveTaskId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int currentUin; // @synthesize currentUin;
@property(nonatomic) unsigned int cdnQualityTag; // @synthesize cdnQualityTag;
@property(nonatomic) unsigned int settingTime; // @synthesize settingTime;
@property(retain, nonatomic) NSString *videoQualityLevelDesc; // @synthesize videoQualityLevelDesc;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName;
@property(nonatomic) unsigned long long liveTaskId; // @synthesize liveTaskId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

