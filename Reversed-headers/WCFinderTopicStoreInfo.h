//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCFinderTopicStoreInfo : NSObject <PBCoding>
{
    unsigned long long topicId;
    NSString *topic;
}

+ (id)fromTopicInfoList:(id)arg1;
+ (id)fromTopicInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_topicId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId;
- (id)converTopicInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

