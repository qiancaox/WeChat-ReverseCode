//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, TextStatusTopicInfo;
@protocol TextState3rdPartyHandler;

@interface TextStateTopicModel : NSObject <NSCopying>
{
    unsigned int _lastCheckExpiredTime;
    NSString *_topicId;
    NSString *_textStateID;
    NSString *_textStateIconId;
    NSString *_topicDescription;
    TextStatusTopicInfo *_topicInfo;
    NSMutableArray *_contactUsernames;
    long long _liveMemberCount;
    NSMutableSet *_contactUsernameSet;
    id <TextState3rdPartyHandler> _thirdPartyHandler;
}

+ (long long)sortTopicModelUsing:(id)arg1 with:(id)arg2;
+ (long long)sortTextStateUsing:(id)arg1 with:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TextState3rdPartyHandler> thirdPartyHandler; // @synthesize thirdPartyHandler=_thirdPartyHandler;
@property(nonatomic) unsigned int lastCheckExpiredTime; // @synthesize lastCheckExpiredTime=_lastCheckExpiredTime;
@property(retain, nonatomic) NSMutableSet *contactUsernameSet; // @synthesize contactUsernameSet=_contactUsernameSet;
@property(nonatomic) long long liveMemberCount; // @synthesize liveMemberCount=_liveMemberCount;
@property(retain, nonatomic) NSMutableArray *contactUsernames; // @synthesize contactUsernames=_contactUsernames;
@property(retain, nonatomic) TextStatusTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) NSString *topicDescription; // @synthesize topicDescription=_topicDescription;
@property(retain, nonatomic) NSString *textStateIconId; // @synthesize textStateIconId=_textStateIconId;
@property(retain, nonatomic) NSString *textStateID; // @synthesize textStateID=_textStateID;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (id)iconWrap;
- (void)resortContacts;
- (void)checkContactTextStateExpired;
- (void)removeUsername:(id)arg1;
- (_Bool)containsUsername:(id)arg1;
- (void)addUsername:(id)arg1;
- (_Bool)isAllRead;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

