//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, WCPayCardBinInfo, WCPayGetUserExInfoCgiResponse;

@protocol WCPayBankElementQueryCgiDelegate <NSObject>
- (void)OnWCPayGetBankResource:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnWCPayGetBindingCardBin:(WCPayCardBinInfo *)arg1 AvailableBank:(NSArray *)arg2 userExInfoResponse:(WCPayGetUserExInfoCgiResponse *)arg3 Error:(NSError *)arg4;
@end

