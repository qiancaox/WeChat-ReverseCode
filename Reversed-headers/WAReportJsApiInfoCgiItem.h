//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportJsApiInfoCgiItem : WAReportBaseItem
{
    unsigned int _costTimeMs;
    unsigned int _ret;
    unsigned int _isSync;
    unsigned int _NetworkType;
    long long _startTimeStampMs;
    long long _endTimeStampMs;
}

@property(nonatomic) unsigned int NetworkType; // @synthesize NetworkType=_NetworkType;
@property(nonatomic) unsigned int isSync; // @synthesize isSync=_isSync;
@property(nonatomic) unsigned int ret; // @synthesize ret=_ret;
@property(nonatomic) long long endTimeStampMs; // @synthesize endTimeStampMs=_endTimeStampMs;
@property(nonatomic) long long startTimeStampMs; // @synthesize startTimeStampMs=_startTimeStampMs;
@property(nonatomic) unsigned int costTimeMs; // @synthesize costTimeMs=_costTimeMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

