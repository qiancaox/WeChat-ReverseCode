//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderContactExtInfo, NSData, NSString;

@interface FinderCreateUserRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderContactExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int notShowLocationSwitch; // @dynamic notShowLocationSwitch;
@property(nonatomic) unsigned int notShowSexSwitch; // @dynamic notShowSexSwitch;
@property(retain, nonatomic) FinderContactExtInfo *registerInfo; // @dynamic registerInfo;
@property(nonatomic) unsigned int showFinderInWx; // @dynamic showFinderInWx;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

