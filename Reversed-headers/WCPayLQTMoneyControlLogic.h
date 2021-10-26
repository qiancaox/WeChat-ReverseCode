//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUseCaseCallback-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCPayAddPayCardDelegate-Protocol.h"
#import "WCPayLQTClickPurchaseCgiDelegate-Protocol.h"
#import "WCPayLQTClickRedeemCgiDelegate-Protocol.h"
#import "WCPayLQTMoneyViewControllerDelegate-Protocol.h"
#import "WCPayLQTPreRedeemFundCgiDelegate-Protocol.h"
#import "WCPayLQTPurchaseFromBankGuideCgiDelegate-Protocol.h"
#import "WCPayLQTPurchaseFundCgiDelegate-Protocol.h"
#import "WCPayLQTQryPurchaaseResultCgiDelegate-Protocol.h"
#import "WCPayLQTQryUserFundDetailCgiDelegate-Protocol.h"
#import "WCPayLQTRedeemFundCgiDelegate-Protocol.h"
#import "WCPayLQTTransSuccessViewControllerDelegate-Protocol.h"
#import "WCPayPaidSuccessStatusViewControllerDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class MMPanelView, MMTipsViewController, MMWebViewController, NSString, PreRedeemFundRes, PurchaseFundRes, WCPayLQTClickPurchaseCgi, WCPayLQTClickRedeemCgi, WCPayLQTPreRedeemFundCgi, WCPayLQTPurchaseFromBankGuideCgi, WCPayLQTPurchaseFundCgi, WCPayLQTQryPurchaseResultCgi, WCPayLQTQryUserFundDetailCgi, WCPayLQTRedeemFundCgi, WCPayPayMoneyLogic;
@protocol WCPayLQTMoneyControlLogicDelegate;

@interface WCPayLQTMoneyControlLogic : WCPayControlLogic <WCPayLQTQryUserFundDetailCgiDelegate, WCPayLQTPurchaseFundCgiDelegate, WCPayLQTQryPurchaaseResultCgiDelegate, WCPayLQTRedeemFundCgiDelegate, WCPayLQTMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCPayLQTTransSuccessViewControllerDelegate, WCBaseControlLogicDeleagte, WCPayLQTPreRedeemFundCgiDelegate, WCPayAddPayCardDelegate, WCPayLQTClickRedeemCgiDelegate, WCPayPaidSuccessStatusViewControllerDelegate, WCPayLQTClickPurchaseCgiDelegate, MMWebViewDelegate, MMUseCaseCallback, WCPayLQTPurchaseFromBankGuideCgiDelegate>
{
    _Bool _bIsFetchOrSaveSucc;
    unsigned int _entranceType;
    id <WCPayLQTMoneyControlLogicDelegate> _logicDelegate;
    NSString *_traceInfo;
    NSString *_operateId;
    WCPayLQTQryUserFundDetailCgi *_detailCgi;
    WCPayLQTPurchaseFundCgi *_prepayCgi;
    WCPayLQTQryPurchaseResultCgi *_payResultQryCgi;
    WCPayLQTPreRedeemFundCgi *_preRedeemFundCgi;
    WCPayLQTRedeemFundCgi *_redeemFundCgi;
    WCPayLQTClickRedeemCgi *_clickRedeemCgi;
    WCPayLQTClickPurchaseCgi *_clickPurchaseCgi;
    WCPayLQTPurchaseFromBankGuideCgi *_purchaseFromLqReportCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    PurchaseFundRes *_purchaseResp;
    PreRedeemFundRes *_preRedeemResp;
    NSString *_bindSerialFromNewCard;
    MMTipsViewController *_upgradeTipsView;
    MMWebViewController *_uploadIDCardWebView;
    MMPanelView *_largeAmountPanelView;
}

- (void).cxx_destruct;
@property(retain) MMPanelView *largeAmountPanelView; // @synthesize largeAmountPanelView=_largeAmountPanelView;
@property(retain, nonatomic) MMWebViewController *uploadIDCardWebView; // @synthesize uploadIDCardWebView=_uploadIDCardWebView;
@property(retain) MMTipsViewController *upgradeTipsView; // @synthesize upgradeTipsView=_upgradeTipsView;
@property(nonatomic) _Bool bIsFetchOrSaveSucc; // @synthesize bIsFetchOrSaveSucc=_bIsFetchOrSaveSucc;
@property(retain, nonatomic) NSString *bindSerialFromNewCard; // @synthesize bindSerialFromNewCard=_bindSerialFromNewCard;
@property(retain, nonatomic) PreRedeemFundRes *preRedeemResp; // @synthesize preRedeemResp=_preRedeemResp;
@property(retain, nonatomic) PurchaseFundRes *purchaseResp; // @synthesize purchaseResp=_purchaseResp;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayLQTPurchaseFromBankGuideCgi *purchaseFromLqReportCgi; // @synthesize purchaseFromLqReportCgi=_purchaseFromLqReportCgi;
@property(retain, nonatomic) WCPayLQTClickPurchaseCgi *clickPurchaseCgi; // @synthesize clickPurchaseCgi=_clickPurchaseCgi;
@property(retain, nonatomic) WCPayLQTClickRedeemCgi *clickRedeemCgi; // @synthesize clickRedeemCgi=_clickRedeemCgi;
@property(retain, nonatomic) WCPayLQTRedeemFundCgi *redeemFundCgi; // @synthesize redeemFundCgi=_redeemFundCgi;
@property(retain, nonatomic) WCPayLQTPreRedeemFundCgi *preRedeemFundCgi; // @synthesize preRedeemFundCgi=_preRedeemFundCgi;
@property(retain, nonatomic) WCPayLQTQryPurchaseResultCgi *payResultQryCgi; // @synthesize payResultQryCgi=_payResultQryCgi;
@property(retain, nonatomic) WCPayLQTPurchaseFundCgi *prepayCgi; // @synthesize prepayCgi=_prepayCgi;
@property(retain, nonatomic) WCPayLQTQryUserFundDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(retain) NSString *operateId; // @synthesize operateId=_operateId;
@property(retain) NSString *traceInfo; // @synthesize traceInfo=_traceInfo;
@property unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <WCPayLQTMoneyControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)ActiveMoenyViewControllerTextField;
- (void)reportLQTUpgradeV2:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)onTransSuccessViewControllerPlanCellClick;
- (id)genCardInfoFromBindQueryRecard:(id)arg1;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)alertViewConfirmClick;
- (_Bool)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)startPayMoneyLogicWithReqkey:(id)arg1;
- (void)addBalanceInfoInfoCardList:(id)arg1;
- (void)onGetLQTClickPurchaseCgiResp:(id)arg1;
- (void)sendClickPurchaseCgi:(_Bool)arg1;
- (void)onPopsItemClick:(id)arg1;
- (void)onGetLQTClickRedeemCgiPopItems:(id)arg1;
- (void)onGetLQTClickRedeemCgiResp:(id)arg1;
- (void)sendClickRedeemCgi;
- (void)OnRetryPayMoneyFromPwdError;
- (void)onGetLQTRedeemFundResp:(id)arg1;
- (void)sendRedeemRequestWithFee:(unsigned int)arg1 pwdEnString:(id)arg2;
- (void)onGetLQTPreRedeemFundResp:(id)arg1;
- (void)sendPreRedeemRequestWithFee:(unsigned int)arg1 redeemType:(unsigned int)arg2;
- (void)onGetLQTQryPurchaseResultResp:(id)arg1;
- (void)sendQryPurchaseResultFromSvr;
- (void)sendQryPurchaseResultFromSvrWithTransactionId:(id)arg1 isUseJointPayChannelFlag:(unsigned int)arg2;
- (void)call:(id)arg1;
- (void)onGetLQTPurchaseFundResp:(id)arg1;
- (void)sendLQTPrePayRquestWithMoney:(unsigned int)arg1;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)onTransSuccessViewControllerConfirmBtnClick;
- (void)onGetLQTPurchaseFromBankGuideResp:(id)arg1;
- (void)onMoneyViewControllerReportGuideFromLqWithShow:(unsigned int)arg1 click:(unsigned int)arg2;
- (void)onMoneyViewControllerNeedUpdatePageData;
- (void)onMoneyViewControllerClickAddNewCard;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 pwdEnString:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)handleRealnamePopups:(id)arg1;
- (_Bool)shouldHandleRealNameInfo:(id)arg1;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 redeemType:(unsigned int)arg2;
- (void)onMoneyViewControllerBack;
- (_Bool)MoneyViewControllerCurrentLogicIsTop;
- (void)internalStartLogic;
- (id)operateIdFromUrl:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithMoneyScene:(unsigned long long)arg1 controlData:(id)arg2;
- (void)dealloc;
- (void)updateTraceInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

