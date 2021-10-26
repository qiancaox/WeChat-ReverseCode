//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveReportCache : NSObject
{
    NSString *_sLastEnterRoomCommentScene;
    NSString *_sLastEnterRoomScenenote;
    unsigned long long _sLastEnterSessionId;
    long long _sLastClickEnterIconType;
    NSString *_sLastClickCommentScene;
    unsigned long long _sLastClickFeedIndex;
    NSString *_sLastClickFeedId;
    NSString *_sLastClickSessionBuffer;
    long long _sLastShareClickType;
    NSString *_sLastShareUserName;
    NSString *_sLastShareTimelineFeedId;
    unsigned long long _sLastEnterEntryScene;
    NSString *_sLastClickChannelExtra;
    NSString *_sLastRefPageId;
    NSString *_sLastEnterFromScene;
}

+ (id)sharedReportCache;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sLastEnterFromScene; // @synthesize sLastEnterFromScene=_sLastEnterFromScene;
@property(retain, nonatomic) NSString *sLastRefPageId; // @synthesize sLastRefPageId=_sLastRefPageId;
@property(retain, nonatomic) NSString *sLastClickChannelExtra; // @synthesize sLastClickChannelExtra=_sLastClickChannelExtra;
@property(nonatomic) unsigned long long sLastEnterEntryScene; // @synthesize sLastEnterEntryScene=_sLastEnterEntryScene;
@property(retain, nonatomic) NSString *sLastShareTimelineFeedId; // @synthesize sLastShareTimelineFeedId=_sLastShareTimelineFeedId;
@property(retain, nonatomic) NSString *sLastShareUserName; // @synthesize sLastShareUserName=_sLastShareUserName;
@property(nonatomic) long long sLastShareClickType; // @synthesize sLastShareClickType=_sLastShareClickType;
@property(retain, nonatomic) NSString *sLastClickSessionBuffer; // @synthesize sLastClickSessionBuffer=_sLastClickSessionBuffer;
@property(retain, nonatomic) NSString *sLastClickFeedId; // @synthesize sLastClickFeedId=_sLastClickFeedId;
@property(nonatomic) unsigned long long sLastClickFeedIndex; // @synthesize sLastClickFeedIndex=_sLastClickFeedIndex;
@property(retain, nonatomic) NSString *sLastClickCommentScene; // @synthesize sLastClickCommentScene=_sLastClickCommentScene;
@property(nonatomic) long long sLastClickEnterIconType; // @synthesize sLastClickEnterIconType=_sLastClickEnterIconType;
@property(nonatomic) unsigned long long sLastEnterSessionId; // @synthesize sLastEnterSessionId=_sLastEnterSessionId;
@property(retain, nonatomic) NSString *sLastEnterRoomScenenote; // @synthesize sLastEnterRoomScenenote=_sLastEnterRoomScenenote;
@property(retain, nonatomic) NSString *sLastEnterRoomCommentScene; // @synthesize sLastEnterRoomCommentScene=_sLastEnterRoomCommentScene;
- (void)cleanCacheExitLive;
- (void)setLastRefPageId:(id)arg1;
- (id)getLastRefPageId;
- (void)setLastClickChannelExtra:(id)arg1;
- (id)getLastClickChannelExtra;
- (void)setLastEnterEntryScene:(unsigned long long)arg1;
- (unsigned long long)getLastEnterEntryScene;
- (void)setLastShareTimelineFeedId:(id)arg1;
- (id)getLastShareTimelineFeedId;
- (void)setLastShareUserName:(id)arg1;
- (id)getLastShareUserName;
- (void)setLastShareClickType:(long long)arg1;
- (long long)getLastShareClickType;
- (void)setLastClickSessionBuffer:(id)arg1;
- (id)getLastClickSessionBuffer;
- (void)setLastClickFeedId:(id)arg1;
- (id)getLastClickFeedId;
- (void)setLastClickFeedIndex:(unsigned long long)arg1;
- (unsigned long long)getLastClickFeedIndex;
- (id)getLastEnterFromScene;
- (void)setLastClickCommentScene:(id)arg1;
- (id)getLastClickCommentScene;
- (void)setLastClickEnterIconType:(long long)arg1;
- (long long)getLastClickEnterIconType;
- (void)setLastEnterSessionId:(unsigned long long)arg1;
- (unsigned long long)getLastEnterSessionId;
- (void)setLastEnterRoomCommentScene:(id)arg1;
- (id)getLastEnterRoomCommentScene;
- (void)setLastEnterRoomScenenote:(id)arg1;
- (id)getLastEnterRoomScenenote;

@end

