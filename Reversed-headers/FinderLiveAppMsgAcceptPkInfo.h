//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLiveAppMsgAcceptPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *acceptLiveBgImgUrl; // @dynamic acceptLiveBgImgUrl;
@property(retain, nonatomic) NSString *acceptMicSdkUserId; // @dynamic acceptMicSdkUserId;
@property(nonatomic) unsigned int acceptSdkLiveId; // @dynamic acceptSdkLiveId;
@property(retain, nonatomic) NSString *applyLiveBgImgUrl; // @dynamic applyLiveBgImgUrl;
@property(retain, nonatomic) NSString *applyMicSdkUserId; // @dynamic applyMicSdkUserId;
@property(nonatomic) unsigned int applySdkLiveId; // @dynamic applySdkLiveId;
@property(retain, nonatomic) NSData *pkSign; // @dynamic pkSign;
@property(retain, nonatomic) NSData *randomMicBuffer; // @dynamic randomMicBuffer;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

