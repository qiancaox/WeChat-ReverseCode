//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString, TokeMess;
@protocol WCPayGetPayPwdTokenCgiDelegate;

@interface WCPayGetPayPwdTokenCgi : WCPayBaseTenPayCgi
{
    NSString *_password;
    TokeMess *_tokenMess;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TokeMess *tokenMess; // @synthesize tokenMess=_tokenMess;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayGetPayPwdTokenCgiDelegate> delegate; // @dynamic delegate;

@end

