//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMTableViewInfo, NSString, UILabel;
@protocol WCBizBaseViewControllerDelegate;

@interface WCBizBaseViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_powerByTenpay;
    id <WCBizBaseViewControllerDelegate> m_oBizBaseViewControllerDelegate;
    long long _tableViewStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
- (void)setBizBaseViewControllerDelegate:(id)arg1;
- (void)footerTipAction:(id)arg1;
- (void)onEnsureAlertConfirm;
- (void)showEnsureAlert:(id)arg1 Title:(id)arg2;
- (void)OnComfireEnsureAlert;
- (id)getSectionFromGroup:(id)arg1;
- (id)makeFooter:(id)arg1;
- (void)clickInfoCell:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)OnDataChange;
- (void)dealloc;
- (void)setNormalTitle:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setWCBizAuthTitle:(id)arg1;
- (void)setWCBizAuthTitle:(id)arg1 TextColor:(id)arg2;
- (void)viewDidLoad;
- (void)addPowerByTenpayTip;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)callViewDidLoad;
- (void)initNavigationBar;
- (void)OnBack;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

