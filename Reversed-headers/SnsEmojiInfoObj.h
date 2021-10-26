//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class EmojiInfoObj, NSString;

@interface SnsEmojiInfoObj : NSObject <NSCoding, PBCoding>
{
    unsigned int width;
    unsigned int height;
    unsigned int size;
    NSString *md5;
    EmojiInfoObj *emojiInfoObj;
}

+ (void)initialize;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_md5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int size; // @synthesize size;
@property(nonatomic) unsigned int height; // @synthesize height;
@property(nonatomic) unsigned int width; // @synthesize width;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
- (void)downloadEmojiIfNotExist;
- (id)getEmojiDesc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSnsEmojiInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

