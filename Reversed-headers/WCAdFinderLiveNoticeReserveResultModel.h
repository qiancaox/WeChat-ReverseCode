//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdChannelReportExtendInfoModel.h"

@class NSString;

@interface WCAdFinderLiveNoticeReserveResultModel : WCAdChannelReportExtendInfoModel
{
    int _source;
    NSString *_finderUsername;
    NSString *_finderLiveNoticeId;
    long long _result;
}

- (void).cxx_destruct;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *finderLiveNoticeId; // @synthesize finderLiveNoticeId=_finderLiveNoticeId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

