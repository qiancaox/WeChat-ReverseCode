//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveInfo, NSString, WCFinderSnsShareInfo;

@interface WCFinderFeedContentTempModel : NSObject
{
    _Bool _hasShowNoticeInfo;
    _Bool _liveAbort;
    _Bool _hadLiked;
    _Bool _hadPrefechUniversalJumper;
    _Bool _hadReadOver1min;
    _Bool _hadReadAll;
    _Bool _hadShowRotateToFullScreenTips;
    _Bool _hadShowMinimizeButton;
    unsigned long long _friendWatchLivingCount;
    WCFinderSnsShareInfo *_snsShareInfo;
    NSString *_recommendReason;
    unsigned long long _liveOnlineCount;
    unsigned long long _stickyTopTime;
    NSString *_verifyInfo;
    FinderLiveInfo *_lastestLiveInfo;
    NSString *_internalFeedbackUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *internalFeedbackUrl; // @synthesize internalFeedbackUrl=_internalFeedbackUrl;
@property(retain, nonatomic) FinderLiveInfo *lastestLiveInfo; // @synthesize lastestLiveInfo=_lastestLiveInfo;
@property(nonatomic) _Bool hadShowMinimizeButton; // @synthesize hadShowMinimizeButton=_hadShowMinimizeButton;
@property(nonatomic) _Bool hadShowRotateToFullScreenTips; // @synthesize hadShowRotateToFullScreenTips=_hadShowRotateToFullScreenTips;
@property(nonatomic) _Bool hadReadAll; // @synthesize hadReadAll=_hadReadAll;
@property(nonatomic) _Bool hadReadOver1min; // @synthesize hadReadOver1min=_hadReadOver1min;
@property(nonatomic) _Bool hadPrefechUniversalJumper; // @synthesize hadPrefechUniversalJumper=_hadPrefechUniversalJumper;
@property(nonatomic) _Bool hadLiked; // @synthesize hadLiked=_hadLiked;
@property(nonatomic) _Bool liveAbort; // @synthesize liveAbort=_liveAbort;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(nonatomic) unsigned long long stickyTopTime; // @synthesize stickyTopTime=_stickyTopTime;
@property(nonatomic) _Bool hasShowNoticeInfo; // @synthesize hasShowNoticeInfo=_hasShowNoticeInfo;
@property(nonatomic) unsigned long long liveOnlineCount; // @synthesize liveOnlineCount=_liveOnlineCount;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) WCFinderSnsShareInfo *snsShareInfo; // @synthesize snsShareInfo=_snsShareInfo;
@property(nonatomic) unsigned long long friendWatchLivingCount; // @synthesize friendWatchLivingCount=_friendWatchLivingCount;

@end

