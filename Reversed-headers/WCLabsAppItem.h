//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCLabsAppItem : MMObject <PBCoding>
{
    _Bool bNoReport;
    _Bool bAllVersion;
    _Bool bClearStatus;
    _Bool bCanShowRedPoint;
    _Bool bItemFromXExpt;
    unsigned int uiSeq;
    unsigned int uiBeginTime;
    unsigned int uiEndTime;
    unsigned int uiPriorityLevel;
    unsigned int uiMonitorHitId;
    unsigned int uiMonitorHitKey;
    unsigned int uiAppType;
    unsigned int uiBizType;
    unsigned int uiAppSwitch;
    unsigned int uiPosition;
    unsigned int uiExpireTime;
    unsigned int weAppDebugMode;
    NSString *nsExpId;
    NSString *nsLabsAppId;
    NSString *nsDetailUrl;
    NSString *nsWeAppUser;
    NSString *nsWeAppPath;
    NSString *nsDeepLink;
    NSString *nsTitleKey;
    NSString *nsTitle_cn;
    NSString *nsTitle_hk;
    NSString *nsTitle_tw;
    NSString *nsTitle_en;
    NSString *nsDescKey;
    NSString *nsDesc_cn;
    NSString *nsDesc_hk;
    NSString *nsDesc_tw;
    NSString *nsDesc_en;
    NSString *nsIntroduceKey;
    NSString *nsIntroduce_cn;
    NSString *nsIntroduce_hk;
    NSString *nsIntroduce_tw;
    NSString *nsIntroduce_en;
    NSString *nsImgUrl_cn;
    NSString *nsImgUrl_hk;
    NSString *nsImgUrl_tw;
    NSString *nsImgUrl_en;
    NSString *nsThumbUrl_cn;
    NSString *nsThumbUrl_hk;
    NSString *nsThumbUrl_tw;
    NSString *nsThumbUrl_en;
    NSString *nsIconUrl;
    NSString *nsImgUrl_cn2;
    NSString *nsImgUrl_hk2;
    NSString *nsImgUrl_tw2;
    NSString *nsImgUrl_en2;
    NSString *nsImgUrl_cn3;
    NSString *nsImgUrl_hk3;
    NSString *nsImgUrl_tw3;
    NSString *nsImgUrl_en3;
}

+ (void)initialize;
+ (void)PBArrayAdd_bItemFromXExpt;
+ (void)PBArrayAdd_nsImgUrl_en3;
+ (void)PBArrayAdd_nsImgUrl_tw3;
+ (void)PBArrayAdd_nsImgUrl_hk3;
+ (void)PBArrayAdd_nsImgUrl_cn3;
+ (void)PBArrayAdd_nsImgUrl_en2;
+ (void)PBArrayAdd_nsImgUrl_tw2;
+ (void)PBArrayAdd_nsImgUrl_hk2;
+ (void)PBArrayAdd_nsImgUrl_cn2;
+ (void)PBArrayAdd_nsIconUrl;
+ (void)PBArrayAdd_nsThumbUrl_en;
+ (void)PBArrayAdd_nsThumbUrl_tw;
+ (void)PBArrayAdd_nsThumbUrl_hk;
+ (void)PBArrayAdd_nsThumbUrl_cn;
+ (void)PBArrayAdd_nsImgUrl_en;
+ (void)PBArrayAdd_nsImgUrl_tw;
+ (void)PBArrayAdd_nsImgUrl_hk;
+ (void)PBArrayAdd_nsImgUrl_cn;
+ (void)PBArrayAdd_bCanShowRedPoint;
+ (void)PBArrayAdd_bClearStatus;
+ (void)PBArrayAdd_weAppDebugMode;
+ (void)PBArrayAdd_uiExpireTime;
+ (void)PBArrayAdd_nsIntroduce_en;
+ (void)PBArrayAdd_nsIntroduce_tw;
+ (void)PBArrayAdd_nsIntroduce_hk;
+ (void)PBArrayAdd_nsIntroduce_cn;
+ (void)PBArrayAdd_nsIntroduceKey;
+ (void)PBArrayAdd_nsDesc_en;
+ (void)PBArrayAdd_nsDesc_tw;
+ (void)PBArrayAdd_nsDesc_hk;
+ (void)PBArrayAdd_nsDesc_cn;
+ (void)PBArrayAdd_nsDescKey;
+ (void)PBArrayAdd_nsTitle_en;
+ (void)PBArrayAdd_nsTitle_tw;
+ (void)PBArrayAdd_nsTitle_hk;
+ (void)PBArrayAdd_nsTitle_cn;
+ (void)PBArrayAdd_nsTitleKey;
+ (void)PBArrayAdd_uiPosition;
+ (void)PBArrayAdd_nsDeepLink;
+ (void)PBArrayAdd_nsWeAppPath;
+ (void)PBArrayAdd_nsWeAppUser;
+ (void)PBArrayAdd_nsDetailUrl;
+ (void)PBArrayAdd_bAllVersion;
+ (void)PBArrayAdd_uiAppSwitch;
+ (void)PBArrayAdd_uiBizType;
+ (void)PBArrayAdd_uiAppType;
+ (void)PBArrayAdd_nsLabsAppId;
+ (void)PBArrayAdd_uiMonitorHitKey;
+ (void)PBArrayAdd_uiMonitorHitId;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_nsExpId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bItemFromXExpt; // @synthesize bItemFromXExpt;
@property(retain, nonatomic) NSString *nsImgUrl_en3; // @synthesize nsImgUrl_en3;
@property(retain, nonatomic) NSString *nsImgUrl_tw3; // @synthesize nsImgUrl_tw3;
@property(retain, nonatomic) NSString *nsImgUrl_hk3; // @synthesize nsImgUrl_hk3;
@property(retain, nonatomic) NSString *nsImgUrl_cn3; // @synthesize nsImgUrl_cn3;
@property(retain, nonatomic) NSString *nsImgUrl_en2; // @synthesize nsImgUrl_en2;
@property(retain, nonatomic) NSString *nsImgUrl_tw2; // @synthesize nsImgUrl_tw2;
@property(retain, nonatomic) NSString *nsImgUrl_hk2; // @synthesize nsImgUrl_hk2;
@property(retain, nonatomic) NSString *nsImgUrl_cn2; // @synthesize nsImgUrl_cn2;
@property(retain, nonatomic) NSString *nsIconUrl; // @synthesize nsIconUrl;
@property(retain, nonatomic) NSString *nsThumbUrl_en; // @synthesize nsThumbUrl_en;
@property(retain, nonatomic) NSString *nsThumbUrl_tw; // @synthesize nsThumbUrl_tw;
@property(retain, nonatomic) NSString *nsThumbUrl_hk; // @synthesize nsThumbUrl_hk;
@property(retain, nonatomic) NSString *nsThumbUrl_cn; // @synthesize nsThumbUrl_cn;
@property(retain, nonatomic) NSString *nsImgUrl_en; // @synthesize nsImgUrl_en;
@property(retain, nonatomic) NSString *nsImgUrl_tw; // @synthesize nsImgUrl_tw;
@property(retain, nonatomic) NSString *nsImgUrl_hk; // @synthesize nsImgUrl_hk;
@property(retain, nonatomic) NSString *nsImgUrl_cn; // @synthesize nsImgUrl_cn;
@property(nonatomic) _Bool bCanShowRedPoint; // @synthesize bCanShowRedPoint;
@property(nonatomic) _Bool bClearStatus; // @synthesize bClearStatus;
@property(nonatomic) unsigned int weAppDebugMode; // @synthesize weAppDebugMode;
@property(nonatomic) unsigned int uiExpireTime; // @synthesize uiExpireTime;
@property(retain, nonatomic) NSString *nsIntroduce_en; // @synthesize nsIntroduce_en;
@property(retain, nonatomic) NSString *nsIntroduce_tw; // @synthesize nsIntroduce_tw;
@property(retain, nonatomic) NSString *nsIntroduce_hk; // @synthesize nsIntroduce_hk;
@property(retain, nonatomic) NSString *nsIntroduce_cn; // @synthesize nsIntroduce_cn;
@property(retain, nonatomic) NSString *nsIntroduceKey; // @synthesize nsIntroduceKey;
@property(retain, nonatomic) NSString *nsDesc_en; // @synthesize nsDesc_en;
@property(retain, nonatomic) NSString *nsDesc_tw; // @synthesize nsDesc_tw;
@property(retain, nonatomic) NSString *nsDesc_hk; // @synthesize nsDesc_hk;
@property(retain, nonatomic) NSString *nsDesc_cn; // @synthesize nsDesc_cn;
@property(retain, nonatomic) NSString *nsDescKey; // @synthesize nsDescKey;
@property(retain, nonatomic) NSString *nsTitle_en; // @synthesize nsTitle_en;
@property(retain, nonatomic) NSString *nsTitle_tw; // @synthesize nsTitle_tw;
@property(retain, nonatomic) NSString *nsTitle_hk; // @synthesize nsTitle_hk;
@property(retain, nonatomic) NSString *nsTitle_cn; // @synthesize nsTitle_cn;
@property(retain, nonatomic) NSString *nsTitleKey; // @synthesize nsTitleKey;
@property(nonatomic) unsigned int uiPosition; // @synthesize uiPosition;
@property(retain, nonatomic) NSString *nsDeepLink; // @synthesize nsDeepLink;
@property(retain, nonatomic) NSString *nsWeAppPath; // @synthesize nsWeAppPath;
@property(retain, nonatomic) NSString *nsWeAppUser; // @synthesize nsWeAppUser;
@property(retain, nonatomic) NSString *nsDetailUrl; // @synthesize nsDetailUrl;
@property(nonatomic) _Bool bAllVersion; // @synthesize bAllVersion;
@property(nonatomic) unsigned int uiAppSwitch; // @synthesize uiAppSwitch;
@property(nonatomic) unsigned int uiBizType; // @synthesize uiBizType;
@property(nonatomic) unsigned int uiAppType; // @synthesize uiAppType;
@property(retain, nonatomic) NSString *nsLabsAppId; // @synthesize nsLabsAppId;
@property(nonatomic) unsigned int uiMonitorHitKey; // @synthesize uiMonitorHitKey;
@property(nonatomic) unsigned int uiMonitorHitId; // @synthesize uiMonitorHitId;
@property(nonatomic) _Bool bNoReport; // @synthesize bNoReport;
@property(nonatomic) unsigned int uiPriorityLevel; // @synthesize uiPriorityLevel;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime;
@property(nonatomic) unsigned int uiSeq; // @synthesize uiSeq;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId;
- (_Bool)idkeyRpt;
- (id)getRealIconUrl;
- (id)getStringWithoutConsiderLang:(id)arg1 wordTw:(id)arg2 wordHk:(id)arg3 wordEn:(id)arg4;
- (id)getImgUrl3;
- (id)getImgUrl2;
- (id)getImgUrl;
- (id)getThumbUrl;
- (id)getIntroduce;
- (id)getDesc;
- (id)getBizConfigTitle;
- (id)getTitle;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (_Bool)isExpireAndNotShow;
- (_Bool)isOffLineItem;
- (_Bool)isOnLineItem;
- (_Bool)isNotYetBegin;
- (_Bool)isExpired;
- (_Bool)hasOpenFunc;
- (_Bool)isAssisstantNativeItem;
- (_Bool)isIndependentNativeItem;
- (id)getWeAppSceneNote;
- (_Bool)isWeAppItem;
- (id)getBizTypeWording;
- (_Bool)shouldBeReplaceByOther:(id)arg1;
- (_Bool)isLegalItem;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

