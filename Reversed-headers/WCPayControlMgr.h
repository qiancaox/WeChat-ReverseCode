//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

#import "IWCPayResultJumpInfoExt-Protocol.h"
#import "JSEventExt-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "WCPayOfflinePayOpenApiExt-Protocol.h"
#import "WCPayOpenApiExt-Protocol.h"

@class NSString;
@protocol WCPayOfflineLogicDelegate;

@interface WCPayControlMgr : WCBaseControlMgr <MMUseCaseCallback, JSEventExt, WCPayOpenApiExt, WCPayOfflinePayOpenApiExt, IWCPayResultJumpInfoExt>
{
    id <WCPayOfflineLogicDelegate> _offlineLogicDelegate;
}

+ (unsigned long long)preGetWCPayCacheSize;
+ (unsigned long long)cleanWCPayCache;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayOfflineLogicDelegate> offlineLogicDelegate; // @synthesize offlineLogicDelegate=_offlineLogicDelegate;
- (unsigned int)startPayMsgRevokeControlLogic:(id)arg1 msgWrap:(id)arg2 logicDelegate:(id)arg3;
- (_Bool)canStartLogicWithType:(Class)arg1;
- (void)startPaySettingsUsecaseWithData:(id)arg1 callback:(id)arg2;
- (unsigned int)startJSOfflinePayReuqstBindqueryLogic:(id)arg1 jSEvent:(id)arg2 param:(id)arg3 delegate:(id)arg4;
- (unsigned int)startWalletMangeLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (unsigned int)startWCPayJSOpenLqtSaveLogic:(id)arg1 JSEvent:(id)arg2 delegate:(id)arg3 param:(id)arg4;
- (unsigned int)startWCPayJSOpenLqtDetailLogic:(id)arg1 JSEvent:(id)arg2 delegate:(id)arg3 param:(id)arg4;
- (unsigned int)startWCPayJSOpenLqtDepositAddLogic:(id)arg1 JSEvent:(id)arg2 delegate:(id)arg3 param:(id)arg4;
- (unsigned int)startWCPayJSOpenLqtDepositLogic:(id)arg1 JSEvent:(id)arg2 delegate:(id)arg3 param:(id)arg4;
- (void)openTinyAppWithOpenInfo:(id)arg1;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 scene:(unsigned long long)arg3 delayTime:(double)arg4;
- (void)onWCPayOfflinePayOpenApi:(id)arg1 bundleId:(id)arg2 rootViewController:(id)arg3;
- (unsigned int)startJsPayMoneyFromOverseaH5WalletLogic:(id)arg1 walletMixSpGenprepayResp:(id)arg2 Data:(id)arg3;
- (unsigned int)startSDKOpenOfflinePayControlLogicWithAppId:(id)arg1 bundleId:(id)arg2 rootViewController:(id)arg3;
- (unsigned int)startRequestMallPaymentControlLogic:(id)arg1 jsParams:(id)arg2;
- (id)stopBackLogicFromCurrent:(Class)arg1;
- (_Bool)hasControlLogicInLogicStackNow:(Class)arg1;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)checkAndShowLocationTipsView:(int)arg1;
- (void)jsIdCardRealnameVerify:(id)arg1;
- (void)jsUploadIdCardSuccess:(id)arg1;
- (void)getNoticeBanners:(CDUnknownBlockType)arg1;
- (void)jsUnbindBankCard:(id)arg1;
- (void)jsSelectWalletCurrency:(id)arg1;
- (unsigned int)startJumpC2CMessageJsapiLogic:(id)arg1 jsEvent:(id)arg2 bizId:(id)arg3 bizType:(unsigned int)arg4 username:(id)arg5 createTime:(unsigned int)arg6;
- (unsigned int)startPlathbPayMoneyLogic:(id)arg1 prepayId:(id)arg2 logicDelegate:(id)arg3;
- (unsigned int)JumpPayCardListLogic:(id)arg1 JSEvent:(id)arg2 delegate:(id)arg3 param:(id)arg4;
- (unsigned int)startJSOpenOfflinePayControlLogic:(id)arg1 paramDict:(id)arg2;
- (unsigned int)startFaceHBGetLogic:(id)arg1 withQRCode:(id)arg2 withQRCodeHandle:(id)arg3;
- (unsigned int)startFaceHBPayLogic:(id)arg1;
- (unsigned int)startT2BCQueryDetailLogicFromHistory:(id)arg1 billId:(id)arg2 state:(unsigned long long)arg3;
- (unsigned int)startT2BCQueryDetailLogic:(id)arg1 fromScene:(unsigned long long)arg2 billId:(id)arg3;
- (unsigned int)startBizF2FTransferMoneyControlLogic:(id)arg1 controlData:(id)arg2;
- (unsigned int)startQRCodeRewardPayerControlLogic:(id)arg1 scanUrl:(id)arg2 sourceWebViewUrl:(id)arg3 payChannel:(int)arg4;
- (unsigned int)startTransferToBankCardLogic:(id)arg1 Data:(id)arg2 withBankCardNumber:(id)arg3;
- (unsigned int)startTransferToBankCardLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startTransferPhoneLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startQRCodeRewardLaunchControlLogic:(id)arg1 controlData:(id)arg2;
- (unsigned int)startLQTDepositControlLogic:(id)arg1 controlData:(id)arg2 fromScene:(unsigned long long)arg3 extraInfo:(id)arg4;
- (unsigned int)startLQTMoneyControlLogic:(id)arg1 moneyScene:(unsigned long long)arg2 controlData:(id)arg3 entranceType:(unsigned int)arg4 traceInfo:(id)arg5 operateId:(id)arg6;
- (unsigned int)startLQTMoneyControlLogic:(id)arg1 moneyScene:(unsigned long long)arg2 controlData:(id)arg3;
- (unsigned int)startOverseaOfflinePay:(id)arg1 Data:(id)arg2;
- (unsigned int)startWCPayJsOpenResetTransferDelayViewLogic:(id)arg1 fromScene:(unsigned long long)arg2;
- (unsigned int)startLQTDetailControlLogic:(id)arg1 fromScene:(unsigned long long)arg2 controlData:(id)arg3 traceInfo:(id)arg4;
- (unsigned int)startOverseaFacingReceiveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startOverseaTransferLogic:(id)arg1 withQRCodeUrl:(id)arg2;
- (unsigned int)startOverseaTransferLogic:(id)arg1 WithSessionUserName:(id)arg2 WalletType:(unsigned int)arg3;
- (unsigned int)startFacingReceiveDetailLogic:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (unsigned int)startFacingReceiveJSApiAuthenlogic:(id)arg1 withJSEvent:(id)arg2;
- (unsigned int)startFacingReceiveDetailLogic:(id)arg1 withControlData:(id)arg2;
- (unsigned int)startGroupPayLogicAfterQueryPfInfo:(id)arg1 controlData:(id)arg2 launchDelegate:(id)arg3;
- (unsigned int)startGroupPayPf:(id)arg1 appId:(id)arg2 pfOrderNo:(id)arg3 pfFromScene:(unsigned long long)arg4;
- (unsigned int)startGroupPayPfFromJSAPI:(id)arg1 jsEvent:(id)arg2 param:(id)arg3 logicDelegate:(id)arg4;
- (unsigned int)startGroupPayLogicFromOrder:(id)arg1 controlData:(id)arg2 currentContact:(id)arg3;
- (unsigned int)startGroupPayLogicFromJSAPI:(id)arg1 controlData:(id)arg2 amount:(long long)arg3 title:(id)arg4;
- (unsigned int)startGroupPayLogicFromWallet:(id)arg1 controlData:(id)arg2;
- (unsigned int)startGroupPayOrderHistoryLogic:(id)arg1 withControlData:(id)arg2;
- (unsigned int)startGroupPayLogic:(id)arg1 sysMsgUrl:(id)arg2 chatRoomContact:(id)arg3 msgLocalID:(unsigned int)arg4;
- (unsigned int)startOpenGroupPayOrderDetailLogic:(id)arg1 jsParam:(id)arg2;
- (unsigned int)startOpenGroupPayOrderDetailLogic:(id)arg1 billNum:(id)arg2 fromScene:(unsigned long long)arg3 chatRoomContact:(id)arg4 messageWrap:(id)arg5;
- (unsigned int)startLaunchGroupPayLogic:(id)arg1 chatRoomContact:(id)arg2 fromScene:(unsigned long long)arg3 amount:(long long)arg4 title:(id)arg5 launchDelegate:(id)arg6;
- (unsigned int)startLaunchGroupPayLogic:(id)arg1 chatRoomContact:(id)arg2 fromScene:(unsigned long long)arg3 launchDelegate:(id)arg4;
- (unsigned int)startUnbindBankCardLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startSelectWalletLogic:(id)arg1 event:(id)arg2;
- (unsigned int)startSelectWalletLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startJSApiRealnameVerifyLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startRealnameVerifyLogic:(id)arg1 Data:(id)arg2 realnameWording:(id)arg3 sessionId:(id)arg4 rename:(_Bool)arg5;
- (unsigned int)startRealnameVerifyLogic:(id)arg1 Data:(id)arg2 realnameWording:(id)arg3;
- (unsigned int)startSelectVerifyTypeLogic:(id)arg1 Data:(id)arg2 scene:(int)arg3 guideType:(int)arg4;
- (unsigned int)startSelectVerifyTypeLogic:(id)arg1 Data:(id)arg2 scene:(int)arg3 sessionId:(id)arg4;
- (unsigned int)startSelectVerifyTypeLogic:(id)arg1 Data:(id)arg2 scene:(int)arg3;
- (unsigned int)startSelectVerifyTypeLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSelectReceiveOrPayMoneyLogic:(id)arg1 Data:(id)arg2;
- (_Bool)isOverseaNativeWallet;
- (_Bool)isHtml5Wallet;
- (void)markShowRedDotOnAttachment;
- (_Bool)shouldShowRedDotOnAttachment;
- (_Bool)shouldShowRedDotOnEntry;
- (void)markHasClickHBSkinRedDotOnSelectRedSkinEntry;
- (void)markShouldShowHBSkinRedDotOnSelectRedSkinEntry;
- (void)markShouldShowHBSkinRedDotOnRedEnvelopesAttachment;
- (void)markShowedHBSkinRedDotOnRedEnvelopesAttachment;
- (void)markShowedRedDotOnRedEnvelopesAttachment;
- (_Bool)shouldShowHBSKinRedDotOnRedEnvelopesAttachment;
- (_Bool)shouldShowRedDotOnRedEnvelopesAttachment;
- (void)reportStartWeChatJointPayFromAppOk;
- (void)reportStartWeChatJointPayFromAppAppIdNil;
- (void)reportStartWeChatJointPayFromAppPayInfoNil;
- (void)reportStartWeChatJointPayFromAppRealStart;
- (void)reportStartWeChatJointPayFromAppRequestDelayStart;
- (void)reportStartWeChatPayFromAppOk;
- (void)reportStartWeChatPayFromAppAppIdNil;
- (void)reportStartWeChatPayFromAppPayInfoNil;
- (void)reportStartWeChatPayFromAppRealStart;
- (void)reportStartWeChatPayFromAppRequestDelayStart;
- (unsigned int)startECardDetailLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (unsigned int)startOpenECardLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (unsigned int)startTouchLockVerifyLogic:(id)arg1 Data:(id)arg2 logicDelegate:(id)arg3;
- (unsigned int)startWalletLockVerifyLogic:(id)arg1 Data:(id)arg2 logicDelegate:(id)arg3 scene:(unsigned long long)arg4;
- (unsigned int)startWalletLockVerifyLogic:(id)arg1 Data:(id)arg2 logicDelegate:(id)arg3;
- (unsigned int)startWalletLockSettingLogic:(id)arg1 Data:(id)arg2 logicDelegate:(id)arg3 entryScene:(unsigned int)arg4;
- (unsigned int)startTouchLockSettingLogic:(id)arg1 Data:(id)arg2 logicDelegate:(id)arg3;
- (id)startHoneyPayReceiverDetailLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (id)startHoneyPayReceiverCardDetailControlLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (id)startHoneyPayPayerDetailLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (id)startCreteHoneyPayLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (id)startHoneyPayHomeLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3;
- (id)startSelectSingleContactLogic:(id)arg1 withControlData:(id)arg2 delegate:(id)arg3 onlyShowContactList:(_Bool)arg4 pushVC:(_Bool)arg5 selectContactTitle:(id)arg6;
- (void)call:(id)arg1;
- (void)closeTopTipsVC;
- (unsigned int)startOpenTouchIDAuthLogic:(id)arg1 Data:(id)arg2 Action:(unsigned long long)arg3 delegate:(id)arg4;
- (unsigned int)startOpenTouchIDAuthLogic:(id)arg1 Data:(id)arg2 Action:(unsigned long long)arg3;
- (unsigned int)startOpenHtml5WalletLogic:(id)arg1 data:(id)arg2;
- (unsigned int)startPatternLockLogic:(id)arg1 andPatternLockScene:(long long)arg2 andPatternLockLogicDelegate:(id)arg3 isPresent:(_Bool)arg4;
- (unsigned int)startJSApiGetWebPayCheckoutCounterLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startJSApiVerifyPayPasswordLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startJSApiOpenWCPaySpecialViewLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startJSApiAuthenticationLogic:(id)arg1 JSEvent:(id)arg2 Scene:(unsigned int)arg3 WithOpenViewScene:(unsigned int)arg4;
- (unsigned int)startJSApiAuthenticationLogic:(id)arg1 JSEvent:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startFixedAmountFacingReceiveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFacingReceiveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startRetrySendTransferMessageLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSenderTransferMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiverConfirmTransferMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startTransferMoneyDetailLogic:(id)arg1 nativeUrl:(id)arg2 currentUsername:(id)arg3 isSender:(_Bool)arg4;
- (unsigned int)startTransferMoneyLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithSessionUserName:(id)arg2 placeHolderMoney:(long long)arg3 disableEditMoney:(_Bool)arg4;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithSessionUserName:(id)arg2 WithRootViewController:(id)arg3;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithSessionUserName:(id)arg2;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithA8KeyUrl:(id)arg2 payChannel:(int)arg3;
- (unsigned int)startTransferMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startBalanceFetchMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startBalanceSaveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startBalanceDetailLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startBalanceDetailLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayUnbindLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayCardDetailLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayIncreaseLimitAndUpdateCardInfoLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayIncreaseLimitLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startUnfreezeOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFastChangeOfflinePayFeeLimitLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startShareCardOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startChangeOfflinePayFeeLimitLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreateOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startOfflinePayLogic:(id)arg1 Data:(id)arg2 logicDelegate:(id)arg3;
- (unsigned int)startPaidSuccessLogic:(id)arg1 Data:(id)arg2 IAPOrderDetail:(id)arg3 SituationType:(int)arg4;
- (unsigned int)startPayMoneyFromInnerPayLogic:(id)arg1 RequestStruct:(id)arg2 ExtraInfo:(id)arg3;
- (void)jsGetWCPayRealnameVerify:(id)arg1;
- (void)jsSendC2CSecureMessage:(id)arg1;
- (void)jsVerifyWCPayPayPwd:(id)arg1;
- (void)jsGetWebPayCheckoutCounterRequst:(id)arg1;
- (void)jsOpenWCPaySpecialView:(id)arg1;
- (void)jsGetTransferMoneyRequest:(id)arg1;
- (void)jsGetBrandWCPayAddCardRequeset:(id)arg1;
- (void)startJSApiWCPaySecurityCrosscut:(id)arg1;
- (void)startJSApiWCPaySecureTunnel:(id)arg1 delegate:(id)arg2 param:(id)arg3;
- (void)jsGetBrandWCPayRequeset:(id)arg1;
- (void)OnWCPayJointPayOpenApi:(id)arg1 openApiParam:(id)arg2;
- (void)OnWCPayOpenApi:(id)arg1 openApiParam:(id)arg2;
- (void)OnWCPayOpenApiWapUrl:(id)arg1 BundleID:(id)arg2;
- (_Bool)dismissCurrentWAAPP;
- (void)delayStartWCPayJointPayByOpenApi:(id)arg1 openApiParam:(id)arg2;
- (void)delayStartWCPayByOpenApi:(id)arg1 openApiParam:(id)arg2;
- (void)reportAppPayOpenSDKReqKey:(id)arg1 version:(id)arg2 mode:(unsigned long long)arg3 universalLink:(id)arg4 bundleID:(id)arg5;
- (unsigned int)startPayMoneyFromMallLogic:(id)arg1 Data:(id)arg2 ProductInfo:(id)arg3;
- (unsigned int)startPayMoneyFromBrandContactLocalViewLogic:(id)arg1 HandleURL:(id)arg2;
- (unsigned int)startPayMoneyFromBrandContactLocalViewLogic:(id)arg1 Data:(id)arg2 HandleURL:(id)arg3;
- (unsigned int)startPayMoneyFromQRCodeLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPayMoneyFromAppLogic:(id)arg1 info:(id)arg2 BundleID:(id)arg3 appID:(id)arg4 universalLink:(id)arg5;
- (unsigned int)startPayMoneyFromWAPPayLogic:(id)arg1 HandleUrl:(id)arg2 BundleID:(id)arg3;
- (unsigned int)startSendC2CMessageJSApiLogic:(id)arg1 jsEvent:(id)arg2;
- (id)getBrandUserNameWithInfo:(id)arg1;
- (unsigned int)startPayMoneyFromBrandContactJSApiLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startResetPayPwdLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startModifyPayPwdLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCardControlLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPayCardList:(id)arg1 Scene:(int)arg2;
- (unsigned int)startPayCardList:(id)arg1;
- (unsigned int)startPayMoneyLogic:(id)arg1 DeeplinkLinkUrl:(id)arg2;
- (unsigned int)startPayMoneyLogic:(id)arg1 RequestKey:(id)arg2 Scene:(int)arg3;
- (unsigned int)startPayMoneyLogic:(id)arg1 RequestKey:(id)arg2;
- (unsigned int)startPayMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startAddPayCardLogic:(id)arg1 Data:(id)arg2 Scene:(int)arg3 realnameReq:(id)arg4 realnameResp:(id)arg5 regResp:(id)arg6 rename:(_Bool)arg7;
- (unsigned int)startAddPayCardLogic:(id)arg1 Data:(id)arg2 Scene:(int)arg3;
- (unsigned int)startAddPayCardLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startAddPayCardLogic:(id)arg1 Data:(id)arg2;
- (_Bool)cancelAllLogicByOpenApi;
- (void)cancelAllLogic;
- (void)stopLogic:(unsigned int)arg1;
- (void)clearAndStopTheSameLogic:(Class)arg1;
- (void)stopCurrentLogic;
- (unsigned int)startLogic:(id)arg1;
- (void)ClearWCPayPayMoneyLogicFromStartClass:(Class)arg1;
- (_Bool)IsDoingWCPayPayMoneyLogic:(Class)arg1;
- (_Bool)IsDoingWCPayLogic:(Class)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

