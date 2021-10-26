//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface BrandMpVideoItem : NSObject <NSCopying, PBCoding>
{
    _Bool bUseExternalVideoPath;
    _Bool forbidForward;
    _Bool _bNoNeedRequestNewUrl;
    unsigned int subscene;
    NSString *mpUrl;
    NSString *videoVid;
    NSString *videoUrl;
    double videoDuration;
    double thumbWidth;
    double thumbHeight;
    NSString *videoUrlNew;
}

+ (void)initialize;
+ (void)PBArrayAdd_forbidForward;
+ (void)PBArrayAdd_videoUrlNew;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_bUseExternalVideoPath;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_mpUrl;
- (void).cxx_destruct;
@property(nonatomic) _Bool bNoNeedRequestNewUrl; // @synthesize bNoNeedRequestNewUrl=_bNoNeedRequestNewUrl;
@property(nonatomic) _Bool forbidForward; // @synthesize forbidForward;
@property(copy, nonatomic) NSString *videoUrlNew; // @synthesize videoUrlNew;
@property(nonatomic) unsigned int subscene; // @synthesize subscene;
@property(nonatomic) _Bool bUseExternalVideoPath; // @synthesize bUseExternalVideoPath;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth;
@property(nonatomic) double videoDuration; // @synthesize videoDuration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
@property(copy, nonatomic) NSString *videoVid; // @synthesize videoVid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl;
@property(readonly, copy) NSString *description;
- (_Bool)checkData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

