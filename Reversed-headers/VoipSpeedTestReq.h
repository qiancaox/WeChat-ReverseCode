//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface VoipSpeedTestReq : WXPBGeneratedMessage
{
    int c2CrttMemoizedSerializedSize;
    int c2SrttMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int c2Clossrate; // @dynamic c2Clossrate;
@property(retain, nonatomic) NSMutableArray *c2Crtt; // @dynamic c2Crtt;
@property(nonatomic) unsigned int c2CrttCnt; // @dynamic c2CrttCnt;
@property(nonatomic) unsigned int c2SdownLossRate; // @dynamic c2SdownLossRate;
@property(retain, nonatomic) NSMutableArray *c2Srtt; // @dynamic c2Srtt;
@property(nonatomic) unsigned int c2SrttCnt; // @dynamic c2SrttCnt;
@property(nonatomic) unsigned int callType; // @dynamic callType;
@property(nonatomic) unsigned int isConnected; // @dynamic isConnected;
@property(nonatomic) unsigned int isConnecting; // @dynamic isConnecting;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(nonatomic) unsigned int rcvPkts; // @dynamic rcvPkts;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) unsigned int sendPkts; // @dynamic sendPkts;

@end

