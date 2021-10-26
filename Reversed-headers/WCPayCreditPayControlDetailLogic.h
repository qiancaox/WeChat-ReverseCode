//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayCreditPayCardDetailInfoViewControllerDelegate-Protocol.h"
#import "WCPayCreditPayFinishCreateViewControllerDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayCreditPayControlDetailLogic : WCPayControlLogic <WCPayCreditPayCardDetailInfoViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayCreditPayFinishCreateViewControllerDelegate>
{
}

- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnSetMainCard:(id)arg1 Error:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnQueryWXCreditCardInfo:(id)arg1 Error:(id)arg2;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)WCPayCreditPayCardDetailInfoViewControllerViewWillAppear;
- (void)WCPayCreditPayFinishCreateViewControllerGoToGetMoreLimit;
- (void)WCPayCreditPayFinishCreateViewControllerBack;
- (void)WCPayCreditPayCardDetailInfoViewControllerIncreaseLimit;
- (void)WCPayCreditPayCardDetailInfoViewControllerViewBill;
- (void)WCPayCreditPayCardDetailInfoViewControllerUnbindCard:(id)arg1;
- (void)WCPayCreditPayCardDetailInfoViewControllerSetMainBankCard:(id)arg1;
- (void)gotoWebViewController:(id)arg1;
- (void)WCPayCreditPayCardDetailInfoViewControllerShowCreditDetail;
- (void)WCPayCreditPayCardDetailInfoViewControllerRepayment;
- (void)WCPayCreditPayCardDetailInfoViewControllerShowCreditRights;
- (void)WCPayCreditPayCardDetailInfoViewControllerHelpGuider;
- (void)WCPayCreditPayCardDetailInfoViewControllerContactBrandProfile;
- (void)WCPayCreditPayCardDetailInfoViewControllerContactBrandChat;
- (void)WCPayCreditPayCardDetailInfoViewControllerBack;
- (id)getServiceContant;
- (void)openBranderProfile;
- (void)jumpToNewMessage:(id)arg1;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

