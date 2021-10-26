//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

#import "YYModel-Protocol.h"

@class NSData, NSString, TextStatusEmojiInfo, TextStatusTopicInfo;

@interface TextStatusExtInfo : WXPBGeneratedMessage <YYModel>
{
}

+ (void)initialize;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundId; // @dynamic backgroundId;
@property(retain, nonatomic) NSString *brandKeyInfo; // @dynamic brandKeyInfo;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSData *deprecatedBuffer; // @dynamic deprecatedBuffer;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *duplicateTextStatusId; // @dynamic duplicateTextStatusId;
@property(retain, nonatomic) NSString *duplicateUsername; // @dynamic duplicateUsername;
@property(retain, nonatomic) TextStatusEmojiInfo *emojiInfo; // @dynamic emojiInfo;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned long long extOption; // @dynamic extOption;
@property(readonly) unsigned long long hash;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *mediaAesKey; // @dynamic mediaAesKey;
@property(nonatomic) int mediaHeight; // @dynamic mediaHeight;
@property(retain, nonatomic) NSString *mediaThumbAesKey; // @dynamic mediaThumbAesKey;
@property(retain, nonatomic) NSString *mediaThumbUrl; // @dynamic mediaThumbUrl;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;
@property(nonatomic) int mediaWidth; // @dynamic mediaWidth;
@property(nonatomic) unsigned int modifyCount; // @dynamic modifyCount;
@property(nonatomic) unsigned int modifyTime; // @dynamic modifyTime;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(retain, nonatomic) NSString *referenceTextStatusId; // @dynamic referenceTextStatusId;
@property(retain, nonatomic) NSString *referenceUsername; // @dynamic referenceUsername;
@property(nonatomic) unsigned int sceneType; // @dynamic sceneType;
@property(nonatomic) unsigned int serverCreateTime; // @dynamic serverCreateTime;
@property(readonly) Class superclass;
@property(retain, nonatomic) TextStatusTopicInfo *topicInfo; // @dynamic topicInfo;
@property(nonatomic) unsigned int visibility; // @dynamic visibility;

@end

