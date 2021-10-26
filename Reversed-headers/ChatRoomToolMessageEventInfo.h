//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ChatRoomToolMessageEventInfo : MMObject <PBCoding, NSCopying>
{
    unsigned int eventTime;
    unsigned int createTime;
    unsigned int nReply;
    unsigned int isDispose;
    NSString *eventID;
    NSString *userName;
    NSString *title;
    NSString *desc;
    NSString *appUserName;
    NSString *appPath;
    NSString *customInfo;
    long long nRelatedMesSvrID;
    NSString *creatorUserName;
    NSMutableDictionary *extInfo;
    NSString *manager;
    NSString *_nsNewXMLScene;
}

+ (id)genMessageEventInfoWithRoomTodo:(id)arg1 chatroom:(id)arg2;
+ (id)genMessageEventInfoWithUserName:(id)arg1 andEventID:(id)arg2;
+ (id)genMessageEventInfoMsgWrap:(id)arg1;
+ (id)GenLocalEventIdBySvrId:(long long)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isDispose;
+ (void)PBArrayAdd_nReply;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_manager;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_creatorUserName;
+ (void)PBArrayAdd_nRelatedMesSvrID;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_eventTime;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_eventID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nsNewXMLScene; // @synthesize nsNewXMLScene=_nsNewXMLScene;
@property(nonatomic) unsigned int isDispose; // @synthesize isDispose;
@property(nonatomic) unsigned int nReply; // @synthesize nReply;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *manager; // @synthesize manager;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo;
@property(retain, nonatomic) NSString *creatorUserName; // @synthesize creatorUserName;
@property(nonatomic) long long nRelatedMesSvrID; // @synthesize nRelatedMesSvrID;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo;
@property(retain, nonatomic) NSString *appPath; // @synthesize appPath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID;
- (void)copyFromDBMessageEventInfo:(id)arg1;
- (id)genDBContactChatRoomToolMessageEvent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDisplay;
- (id)replyInfo;
- (_Bool)hasReplyInfo;
- (_Bool)canRevoke;
- (_Bool)isValid;
- (void)setCheckTodo;
- (_Bool)hasCheckTodo;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

