//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLimitedModeVerifyPasswordLogicDelegate-Protocol.h"
#import "MMNewTipsMgrExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCAccountLogoutLogicDelegate-Protocol.h"
#import "WCAccountSwitchLogicDelegate-Protocol.h"

@class MMLimitedModeVerifyPasswordLogic, MMTableViewInfo, MMTipsViewController, NSString, WCAccountLogoutLogic, WCAccountSwitchLogic, WCTableViewManager;

@interface NewSettingViewController : MMUIViewController <WCAccountSwitchLogicDelegate, WCAccountLogoutLogicDelegate, MMTipsViewControllerDelegate, MMNewTipsMgrExt, MMLimitedModeVerifyPasswordLogicDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bFromSetting;
    WCAccountSwitchLogic *m_switchLogic;
    WCAccountLogoutLogic *m_logoutLogic;
    MMTipsViewController *m_introView;
    WCTableViewManager *m_tableViewMgr;
    MMLimitedModeVerifyPasswordLogic *m_limitedModeVerifyPasswordLogic;
}

- (void).cxx_destruct;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onCheckPasswordExist:(_Bool)arg1 isNeverUse:(_Bool)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)showFeedbackView;
- (void)showSystemNotice;
- (void)onAccountSwitchLogicCancel;
- (void)showDebugViewController;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showLoginInfo;
- (void)gotoSwitchAccount;
- (void)onAccountLogoutLogicCancel;
- (void)showQuitActionSheet:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)willAppear;
- (void)onShowLimitedMode;
- (void)onShowElderMode;
- (void)showAccountView;
- (void)reloadTableData;
- (void)showWechatLabView;
- (void)showAboutMMView;
- (void)showGeneralView;
- (void)showDeviceListView;
- (void)showPrivateConfigViewWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPrivateConfigView;
- (void)showNotificationView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

