//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"

@class NSString, PasswordLogic, WCAccountBindPhoneControlLogic;
@protocol WCAccountLogoutLogicDelegate;

@interface WCAccountLogoutLogic : WCAccountBaseControlLogic <WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    PasswordLogic *m_checkPasswdLogic;
    WCAccountBindPhoneControlLogic *m_bindPhoneLogic;
    unsigned long long m_status;
    id <WCAccountLogoutLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAccountLogoutLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)checkNeedSetPasswd;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)finalQuit;
- (void)onLogoutCheckOK;
- (void)onSkipCheckFinish;
- (void)preFinalQuit;
- (void)quitInternal;
- (void)tryQuitForOnlySetWxIdProtect;
- (void)doOnlySetWxIdProtect;
- (void)showOnlySetWxIdProtectalert;
- (void)doNakedWxProtect;
- (void)showNakeWxProtectAlert;
- (void)doNakedAffiliatedAcctProtect;
- (void)showNakeAffiliatedAcctProtectAlert;
- (void)startLogic:(unsigned long long)arg1;
- (_Bool)isForCheckSwitch;
- (_Bool)isForSwitch;
- (void)startLogout;
- (void)startCheckSwitch;
- (void)startSwitchToLogin;
- (void)startQuit:(id)arg1;
- (void)cancelLogout;
- (void)dealloc;
- (void)reportOpCode:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

