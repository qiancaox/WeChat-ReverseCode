//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WCPayControlData;

@protocol WCPayNewPwdViewControllerDelegate <NSObject>
- (void)OnWCPayNewPwdViewControllerBack;

@optional
- (void)verifyPayBiotricNext:(NSData *)arg1 signature:(NSData *)arg2 signSrc:(NSString *)arg3;
- (void)verifyPayBiotricNext:(NSData *)arg1;
- (void)verifyPayPwdNext:(WCPayControlData *)arg1;
@end

