//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSMutableArray, NSString;

@interface WCTimelineMissReadJumpBtnClickReportRecord : MMObject
{
    _Bool _isJumpToFirstMissReadRecord;
    unsigned int _jumpBtnId;
    unsigned int _jumpSkipCount;
    unsigned int _jumpItemCreatTimeToNowInterval;
    NSString *_sessionId;
    unsigned long long _missReadRecordId;
    NSArray *_missReadFeedIds;
    NSMutableArray *_exposureFeedIds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int jumpItemCreatTimeToNowInterval; // @synthesize jumpItemCreatTimeToNowInterval=_jumpItemCreatTimeToNowInterval;
@property(retain, nonatomic) NSMutableArray *exposureFeedIds; // @synthesize exposureFeedIds=_exposureFeedIds;
@property(retain, nonatomic) NSArray *missReadFeedIds; // @synthesize missReadFeedIds=_missReadFeedIds;
@property(nonatomic) unsigned int jumpSkipCount; // @synthesize jumpSkipCount=_jumpSkipCount;
@property(nonatomic) _Bool isJumpToFirstMissReadRecord; // @synthesize isJumpToFirstMissReadRecord=_isJumpToFirstMissReadRecord;
@property(nonatomic) unsigned long long missReadRecordId; // @synthesize missReadRecordId=_missReadRecordId;
@property(nonatomic) unsigned int jumpBtnId; // @synthesize jumpBtnId=_jumpBtnId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

