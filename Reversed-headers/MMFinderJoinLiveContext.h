//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderBizUserInfo, FinderJoinLiveReq, FinderJoinLiveResp, FinderLiveAdInfo, FinderLiveBackgroundMusicInfo, FinderLiveCheerInfo, FinderLiveMicInfo, FinderLiveShopWindowAdItem, FinderLiveUserInfo, FinderLocation, FinderShopCouponInfo, FinderWindowProductInfo, LiveSdkInfo, MMFinderLiveFansGroupInfo, MMFinderLiveTaskId, NSArray, NSData, NSString, WCFinderLiveIdentityModel, WCFinderLiveInfo, WCLocationInfo;

@interface MMFinderJoinLiveContext : NSObject
{
    _Bool _enableCheerInClapMode;
    _Bool _secondaryDeviceCloseLiveSwitch;
    unsigned int _joinLiveFlag;
    unsigned int _shoppingNotAvailableFlag;
    MMFinderLiveTaskId *_liveTaskId;
    FinderJoinLiveResp *_response;
    NSData *_liveCookies;
    LiveSdkInfo *_liveSDKInfo;
    WCFinderLiveInfo *_finderLiveInfo;
    FinderWindowProductInfo *_productInfo;
    FinderLiveUserInfo *_userInfo;
    FinderLiveMicInfo *_liveMicInfo;
    NSString *_joinLiveTips;
    NSArray *_templateInfoArr;
    WCFinderLiveIdentityModel *_liveIdentityModel;
    FinderLocation *_liveLocation;
    FinderLiveAdInfo *_liveAdInfo;
    FinderLiveCheerInfo *_liveCheerInfo;
    FinderLiveShopWindowAdItem *_promotingAd;
    FinderLiveBackgroundMusicInfo *_bgMusicInfo;
    FinderBizUserInfo *_bizUserInfo;
    FinderShopCouponInfo *_promotingCoupon;
    NSString *_ecSource;
    NSString *_liveDescription;
    MMFinderLiveFansGroupInfo *_fansGroupInfo;
    FinderJoinLiveReq *_request;
    WCLocationInfo *_liveLocationInfo;
    NSString *_reqCookiesMd5;
    NSString *_respCookiesMd5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *respCookiesMd5; // @synthesize respCookiesMd5=_respCookiesMd5;
@property(retain, nonatomic) NSString *reqCookiesMd5; // @synthesize reqCookiesMd5=_reqCookiesMd5;
@property(retain, nonatomic) WCLocationInfo *liveLocationInfo; // @synthesize liveLocationInfo=_liveLocationInfo;
@property(retain, nonatomic) FinderJoinLiveReq *request; // @synthesize request=_request;
@property(retain, nonatomic) MMFinderLiveFansGroupInfo *fansGroupInfo; // @synthesize fansGroupInfo=_fansGroupInfo;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(nonatomic) _Bool secondaryDeviceCloseLiveSwitch; // @synthesize secondaryDeviceCloseLiveSwitch=_secondaryDeviceCloseLiveSwitch;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) FinderShopCouponInfo *promotingCoupon; // @synthesize promotingCoupon=_promotingCoupon;
@property(retain, nonatomic) FinderBizUserInfo *bizUserInfo; // @synthesize bizUserInfo=_bizUserInfo;
@property(retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo; // @synthesize bgMusicInfo=_bgMusicInfo;
@property(retain, nonatomic) FinderLiveShopWindowAdItem *promotingAd; // @synthesize promotingAd=_promotingAd;
@property(retain, nonatomic) FinderLiveCheerInfo *liveCheerInfo; // @synthesize liveCheerInfo=_liveCheerInfo;
@property(retain, nonatomic) FinderLiveAdInfo *liveAdInfo; // @synthesize liveAdInfo=_liveAdInfo;
@property(retain, nonatomic) FinderLocation *liveLocation; // @synthesize liveLocation=_liveLocation;
@property(retain, nonatomic) WCFinderLiveIdentityModel *liveIdentityModel; // @synthesize liveIdentityModel=_liveIdentityModel;
@property(nonatomic) _Bool enableCheerInClapMode; // @synthesize enableCheerInClapMode=_enableCheerInClapMode;
@property(nonatomic) unsigned int shoppingNotAvailableFlag; // @synthesize shoppingNotAvailableFlag=_shoppingNotAvailableFlag;
@property(nonatomic) unsigned int joinLiveFlag; // @synthesize joinLiveFlag=_joinLiveFlag;
@property(retain, nonatomic) NSArray *templateInfoArr; // @synthesize templateInfoArr=_templateInfoArr;
@property(retain, nonatomic) NSString *joinLiveTips; // @synthesize joinLiveTips=_joinLiveTips;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @synthesize liveMicInfo=_liveMicInfo;
@property(retain, nonatomic) FinderLiveUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) WCFinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSDKInfo; // @synthesize liveSDKInfo=_liveSDKInfo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) FinderJoinLiveResp *response; // @synthesize response=_response;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)description;
- (void)updateJoinLiveContextWithResp:(id)arg1;
- (id)initWithLiveTaskId:(id)arg1 request:(id)arg2 response:(id)arg3;

@end

