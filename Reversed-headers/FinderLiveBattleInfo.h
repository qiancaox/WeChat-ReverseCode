//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveBattleInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *battleId; // @dynamic battleId;
@property(nonatomic) unsigned long long battleSeq; // @dynamic battleSeq;
@property(nonatomic) unsigned long long delayMs; // @dynamic delayMs;
@property(retain, nonatomic) NSMutableArray *playerInfo; // @dynamic playerInfo;
@property(nonatomic) unsigned int result; // @dynamic result;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int timeLeft; // @dynamic timeLeft;

@end

