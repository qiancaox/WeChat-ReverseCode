//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCOutCouponCgiDelegate-Protocol.h"
#import "WCOutGetProductListCgiDelegate-Protocol.h"

@class NSString, WCOutCouponCgi, WCOutGetProductListCgi;

@interface WCOutCgiMgr : MMUserService <WCOutCouponCgiDelegate, WCOutGetProductListCgiDelegate, MMServiceProtocol>
{
    WCOutCouponCgi *_couponCgi;
    WCOutGetProductListCgi *_getproductlistCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCOutGetProductListCgi *getproductlistCgi; // @synthesize getproductlistCgi=_getproductlistCgi;
@property(retain, nonatomic) WCOutCouponCgi *couponCgi; // @synthesize couponCgi=_couponCgi;
- (void)WCOutGetProductListCgiDidFail:(id)arg1;
- (void)WCOutGetProductListCgi:(id)arg1 successWithResponse:(id)arg2;
- (void)WCOutCounponCgiDidFail:(id)arg1;
- (void)WCOutCounponCgi:(id)arg1 successWithResponse:(id)arg2;
- (void)requestProductList:(id)arg1 reqCurrency:(id)arg2;
- (void)requestCoupon:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

