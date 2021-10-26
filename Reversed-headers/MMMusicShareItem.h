//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface MMMusicShareItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    unsigned int musicDuration;
    NSString *mvObjectId;
    NSString *mvNonceId;
    NSString *mvCoverUrl;
    NSString *mvMakerFinderNickname;
    NSString *mvSingerName;
    NSString *mvAlbumName;
    NSString *mvMusicGenre;
    unsigned long long mvIssueDate;
    NSString *mvIdentification;
    NSString *mvExtInfo;
    NSString *mvMakerFinderUsername;
    NSString *mvOperationUrl;
    NSString *mid;
    NSString *appIdForSourceDisplay;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_appIdForSourceDisplay;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_mvOperationUrl;
+ (void)PBArrayAdd_mvMakerFinderUsername;
+ (void)PBArrayAdd_musicDuration;
+ (void)PBArrayAdd_mvExtInfo;
+ (void)PBArrayAdd_mvIdentification;
+ (void)PBArrayAdd_mvIssueDate;
+ (void)PBArrayAdd_mvMusicGenre;
+ (void)PBArrayAdd_mvAlbumName;
+ (void)PBArrayAdd_mvSingerName;
+ (void)PBArrayAdd_mvMakerFinderNickname;
+ (void)PBArrayAdd_mvCoverUrl;
+ (void)PBArrayAdd_mvNonceId;
+ (void)PBArrayAdd_mvObjectId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appIdForSourceDisplay; // @synthesize appIdForSourceDisplay;
@property(copy, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *mvOperationUrl; // @synthesize mvOperationUrl;
@property(retain, nonatomic) NSString *mvMakerFinderUsername; // @synthesize mvMakerFinderUsername;
@property(nonatomic) unsigned int musicDuration; // @synthesize musicDuration;
@property(retain, nonatomic) NSString *mvExtInfo; // @synthesize mvExtInfo;
@property(retain, nonatomic) NSString *mvIdentification; // @synthesize mvIdentification;
@property(nonatomic) unsigned long long mvIssueDate; // @synthesize mvIssueDate;
@property(retain, nonatomic) NSString *mvMusicGenre; // @synthesize mvMusicGenre;
@property(retain, nonatomic) NSString *mvAlbumName; // @synthesize mvAlbumName;
@property(retain, nonatomic) NSString *mvSingerName; // @synthesize mvSingerName;
@property(retain, nonatomic) NSString *mvMakerFinderNickname; // @synthesize mvMakerFinderNickname;
@property(retain, nonatomic) NSString *mvCoverUrl; // @synthesize mvCoverUrl;
@property(retain, nonatomic) NSString *mvNonceId; // @synthesize mvNonceId;
@property(retain, nonatomic) NSString *mvObjectId; // @synthesize mvObjectId;
@property(readonly, copy) NSString *description;
- (void)clearMvInfo;
- (_Bool)isValidMvItem;
- (id)toXML;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

