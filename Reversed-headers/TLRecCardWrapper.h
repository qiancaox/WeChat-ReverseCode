//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, TLRecArticleWrapper, TLRecCard, TLRecCardUserInfo_FeedbackInfoMsg;

@interface TLRecCardWrapper : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TLRecArticleWrapper *articleCardWrapper; // @dynamic articleCardWrapper;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *data; // @dynamic data;
@property(retain, nonatomic) NSString *expType; // @dynamic expType;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) TLRecCardUserInfo_FeedbackInfoMsg *feedbackInfo; // @dynamic feedbackInfo;
@property(nonatomic) _Bool hasWeight; // @dynamic hasWeight;
@property(nonatomic) _Bool isCanvasCard; // @dynamic isCanvasCard;
@property(nonatomic) _Bool isUseServerTime; // @dynamic isUseServerTime;
@property(nonatomic) unsigned long long msgSvrId; // @dynamic msgSvrId;
@property(nonatomic) int pos; // @dynamic pos;
@property(retain, nonatomic) TLRecCard *recCard; // @dynamic recCard;
@property(nonatomic) unsigned long long recId; // @dynamic recId;
@property(nonatomic) int redDotFlag; // @dynamic redDotFlag;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) NSString *templatePathType; // @dynamic templatePathType;
@property(nonatomic) int weight; // @dynamic weight;

@end

