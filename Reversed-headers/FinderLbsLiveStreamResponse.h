//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpLiveTab, FinderLivePreloadInfo, FinderStreamLayoutInfo, NSData, NSMutableArray;

@interface FinderLbsLiveStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) FinderJumpLiveTab *jumpLiveTab; // @dynamic jumpLiveTab;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @dynamic layoutInfo;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int prefechMinInterval; // @dynamic prefechMinInterval;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;

@end

