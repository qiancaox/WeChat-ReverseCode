//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SnsServerConfig, SnsUserInfo, SnsWwUserInfo;

@interface SnsWwUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long continueId; // @dynamic continueId;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned long long limitedId; // @dynamic limitedId;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(nonatomic) unsigned int objectCountForSameMd5; // @dynamic objectCountForSameMd5;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int objectTotalCount; // @dynamic objectTotalCount;
@property(nonatomic) _Bool prePageDayEndFlag; // @dynamic prePageDayEndFlag;
@property(retain, nonatomic) NSString *retTips; // @dynamic retTips;
@property(retain, nonatomic) SnsServerConfig *serverConfig; // @dynamic serverConfig;
@property(retain, nonatomic) SnsUserInfo *snsUserInfo; // @dynamic snsUserInfo;
@property(retain, nonatomic) SnsWwUserInfo *snsWwUserInfo; // @dynamic snsWwUserInfo;
@property(nonatomic) unsigned int yearMonthInfoCount; // @dynamic yearMonthInfoCount;
@property(retain, nonatomic) NSMutableArray *yearMonthInfoList; // @dynamic yearMonthInfoList;

@end

