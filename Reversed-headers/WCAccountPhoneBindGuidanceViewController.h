//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class NSString, WCAccountPhoneBindGuidanceData;
@protocol WCAccountPhoneBindGuidanceViewControllerDelegate;

@interface WCAccountPhoneBindGuidanceViewController : WCAccountBaseViewController <ILinkEventExt, MMWebViewDelegate>
{
    id <WCAccountPhoneBindGuidanceViewControllerDelegate> _delegate;
    WCAccountPhoneBindGuidanceData *_m_guidanceData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountPhoneBindGuidanceData *m_guidanceData; // @synthesize m_guidanceData=_m_guidanceData;
@property(nonatomic) __weak id <WCAccountPhoneBindGuidanceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)reportWithString:(id)arg1;
- (void)reportAction:(int)arg1;
- (void)reportPageExpose;
- (void)trueClose;
- (void)onClickDoubleCheckCancel;
- (void)onClickDoubleCheckOK;
- (void)onClickClose;
- (void)onBind;
- (void)initTableView;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

