//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfileSubViewModelProtocol-Protocol.h"

@class NSString, UIViewController;

@protocol WCFinderStreamProfileViewModelDelegate <WCFinderStreamProfileSubViewModelProtocol>
- (UIViewController *)getCurrentViewController;

@optional
- (void)streamProfileViewDisplayLogoutView;
- (void)streamProfileViewModelTabShouldChanged;
- (void)streamProfileViewModifyShieldFinderFeedsIsSuccess:(_Bool)arg1 errorMsg:(NSString *)arg2 setToShield:(_Bool)arg3;
- (void)streamProfileViewLiveNoticeReserveStateChanged:(unsigned long long)arg1;
- (void)streamProfileViewLiveNoticeRevoked:(_Bool)arg1;
- (void)streamProfileViewDataSourceFetchError;
@end

