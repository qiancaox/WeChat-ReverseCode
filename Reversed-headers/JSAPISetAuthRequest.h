//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString;

@interface JSAPISetAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *commitUrl; // @dynamic commitUrl;
@property(retain, nonatomic) NSData *jsapiArgs; // @dynamic jsapiArgs;
@property(retain, nonatomic) NSString *jsapiName; // @dynamic jsapiName;
@property(retain, nonatomic) NSString *noncestr; // @dynamic noncestr;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(retain, nonatomic) NSMutableArray *scopeAuthInfo; // @dynamic scopeAuthInfo;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(nonatomic) unsigned int signatureFlag; // @dynamic signatureFlag;
@property(retain, nonatomic) NSString *signatureMethod; // @dynamic signatureMethod;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

