//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLifeJumpInfo, NSString;

@interface ChatUserInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) NSString *avatar; // @dynamic avatar;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) GameLifeJumpInfo *profileJumpInfo; // @dynamic profileJumpInfo;
@property(nonatomic) unsigned int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

