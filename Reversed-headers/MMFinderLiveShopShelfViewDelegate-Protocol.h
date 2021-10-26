//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveShopCustomerServiceInfo, MMFinderLiveAdsItem, MMFinderLiveGoodsItem, MMFinderLiveShopContext, NSString, OrderedDictionary;

@protocol MMFinderLiveShopShelfViewDelegate <NSObject>

@optional
- (void)onMMFinderLiveShopCouponItemUpdated:(OrderedDictionary *)arg1;
- (void)onMMFinderLiveAccountSwitchToWechat;
- (void)onMMFinderLivePromoteStatusChangedWithAds:(MMFinderLiveAdsItem *)arg1 promoteStatus:(_Bool)arg2;
- (void)onMMFinderLiveAdsItemSelected:(MMFinderLiveAdsItem *)arg1;
- (void)onMMFinderLiveGoodsItemSelected:(MMFinderLiveGoodsItem *)arg1 shopContext:(MMFinderLiveShopContext *)arg2;
- (void)onMMFinderLiveShopAssistantBtnClicked:(FinderLiveShopCustomerServiceInfo *)arg1 withGoodsItem:(MMFinderLiveGoodsItem *)arg2 shopContext:(MMFinderLiveShopContext *)arg3;
- (void)onMMFinderLiveGoodsOrderButtonClicked:(MMFinderLiveShopContext *)arg1;
- (void)onMMFinderLiveAddGoodsButtonClicked:(MMFinderLiveShopContext *)arg1;
- (void)onMMFinderLivePromoteStatusChanged:(MMFinderLiveGoodsItem *)arg1 promoteStatus:(_Bool)arg2;
- (void)onMMFinderLivePurchaseButtonClicked:(MMFinderLiveGoodsItem *)arg1 shopContext:(MMFinderLiveShopContext *)arg2;
- (void)onMMFinderLivePlatformNameClicked:(NSString *)arg1 goodsItem:(MMFinderLiveGoodsItem *)arg2;
- (void)onMMFinderLiveShopShelfClose;
@end

