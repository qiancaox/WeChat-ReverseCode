//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoderNSCodingBridge-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface WCVideoFlowInfo : NSObject <NSCoding, PBCoding, PBCoderNSCodingBridge>
{
    _Bool isMiniVideo;
    unsigned int category;
    unsigned int playCount;
    unsigned int realShareCategory;
    NSString *vid;
    NSString *expand;
    NSString *searchId;
    NSString *openId;
    NSString *shareUrl;
    NSString *shareTitle;
    NSString *shareDesc;
    NSString *shareImgUrl;
    NSString *source;
    NSString *sourceImgUrl;
    NSString *sourceUrl;
    NSString *strPlayCount;
    NSString *titleUrl;
    NSData *extParamsNSCodingData;
    NSString *nsTagInfoJSON;
    NSString *_videoChannelTitle;
    NSString *_bizUserName;
    long long _sourceJumpType;
    NSMutableArray *_extParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_realShareCategory;
+ (void)PBArrayAdd_isMiniVideo;
+ (void)PBArrayAdd_nsTagInfoJSON;
+ (void)PBArrayAdd_extParamsNSCodingData;
+ (void)PBArrayAdd_titleUrl;
+ (void)PBArrayAdd_playCount;
+ (void)PBArrayAdd_strPlayCount;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_sourceImgUrl;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_shareImgUrl;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_openId;
+ (void)PBArrayAdd_searchId;
+ (void)PBArrayAdd_expand;
+ (void)PBArrayAdd_vid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) long long sourceJumpType; // @synthesize sourceJumpType=_sourceJumpType;
@property(retain, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(retain, nonatomic) NSString *videoChannelTitle; // @synthesize videoChannelTitle=_videoChannelTitle;
@property(nonatomic) unsigned int realShareCategory; // @synthesize realShareCategory;
@property(nonatomic) _Bool isMiniVideo; // @synthesize isMiniVideo;
@property(retain, nonatomic) NSString *nsTagInfoJSON; // @synthesize nsTagInfoJSON;
@property(retain, nonatomic) NSData *extParamsNSCodingData; // @synthesize extParamsNSCodingData;
@property(retain, nonatomic) NSString *titleUrl; // @synthesize titleUrl;
@property(nonatomic) unsigned int playCount; // @synthesize playCount;
@property(retain, nonatomic) NSString *strPlayCount; // @synthesize strPlayCount;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source;
@property(retain, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl;
@property(nonatomic) unsigned int category; // @synthesize category;
@property(retain, nonatomic) NSString *openId; // @synthesize openId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId;
@property(retain, nonatomic) NSString *expand; // @synthesize expand;
@property(retain, nonatomic) NSString *vid; // @synthesize vid;
- (void)afterPBCoderProcess;
- (void)beforePBCoderProcess;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

