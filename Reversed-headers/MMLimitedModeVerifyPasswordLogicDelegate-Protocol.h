//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeVerifyPasswordLogicDelegate <NSObject>

@optional
- (void)onVerifyPasswordRetTicket:(NSString *)arg1 needShowAlert:(_Bool)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onCheckPasswordExist:(_Bool)arg1 isNeverUse:(_Bool)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
@end

