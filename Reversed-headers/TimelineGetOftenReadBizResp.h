//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface TimelineGetOftenReadBizResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *bizInfoList; // @dynamic bizInfoList;
@property(nonatomic) unsigned int displayCtrlFlag; // @dynamic displayCtrlFlag;
@property(nonatomic) unsigned int greenPointStayTimeInSec; // @dynamic greenPointStayTimeInSec;
@property(retain, nonatomic) NSMutableArray *normalBizInfoList; // @dynamic normalBizInfoList;
@property(retain, nonatomic) NSMutableArray *seldomReadBizInfoList; // @dynamic seldomReadBizInfoList;
@property(nonatomic) unsigned int serverRankOftenReadBiz; // @dynamic serverRankOftenReadBiz;
@property(nonatomic) _Bool showFinderLive; // @dynamic showFinderLive;
@property(nonatomic) unsigned int specifiedRefreshInterval; // @dynamic specifiedRefreshInterval;

@end

