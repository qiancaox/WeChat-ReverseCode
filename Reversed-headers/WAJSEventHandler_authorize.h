//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAAuthorizeDelegate-Protocol.h"
#import "WAJSContextPlugin_userAccountProtocol-Protocol.h"

@class NSDictionary, NSString, WAAlertModel, WADataPipePerformance, WAJSContextPlugin_userAccount, WAUserAuthorizeLogic;
@protocol IWATransferProxyImplProtocol;

@interface WAJSEventHandler_authorize : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString *_appID;
    WAUserAuthorizeLogic *_authLogic;
    _Bool _requestInQueue;
    NSDictionary *_dicInputParam;
    WADataPipePerformance *_performance;
    WAJSContextPlugin_userAccount *_userAccountInstance;
    WAAlertModel *_alertModel;
    id <IWATransferProxyImplProtocol> _transferBridge;
    NSDictionary *_jsapiParams;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *jsapiParams; // @synthesize jsapiParams=_jsapiParams;
@property(retain, nonatomic) id <IWATransferProxyImplProtocol> transferBridge; // @synthesize transferBridge=_transferBridge;
@property(retain, nonatomic) WAAlertModel *alertModel; // @synthesize alertModel=_alertModel;
@property(nonatomic) __weak WAJSContextPlugin_userAccount *userAccountInstance; // @synthesize userAccountInstance=_userAccountInstance;
@property(retain, nonatomic) WADataPipePerformance *performance; // @synthesize performance=_performance;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void)showConfirmView;
- (void)continueShowConfirmView;
- (void)stopLoading;
- (void)startLoading:(id)arg1;
- (void)endCancel;
- (void)endOK;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithResult:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmInconsistent:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmEnd:(_Bool)arg1 response:(id)arg2;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(id)arg1;
- (id)getCurrentViewController;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

