//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MEBaseMeta.h"

@class NSString;

@interface MEMsgMeta : MEBaseMeta
{
    _Bool _isFrom;
    unsigned int _msgId;
    unsigned int _msgType;
    unsigned int _emojiConfigVersion;
    NSString *_content;
    NSString *_fromUserName;
    NSString *_toUserName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int emojiConfigVersion; // @synthesize emojiConfigVersion=_emojiConfigVersion;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) _Bool isFrom; // @synthesize isFrom=_isFrom;
- (id)serialize;

@end

