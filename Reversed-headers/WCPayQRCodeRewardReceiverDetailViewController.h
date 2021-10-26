//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayQRCodeRewardCodeViewDelegate-Protocol.h"

@class NSString, WCPayQRCodeRewardCodeView;
@protocol WCPayQRCodeRewardReceiverDetailViewControllerDelegate;

@interface WCPayQRCodeRewardReceiverDetailViewController : WCPayBaseViewController <WCPayQRCodeRewardCodeViewDelegate, WCActionSheetDelegate>
{
    id <WCPayQRCodeRewardReceiverDetailViewControllerDelegate> _delegate;
    WCPayQRCodeRewardCodeView *_codeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayQRCodeRewardCodeView *codeView; // @synthesize codeView=_codeView;
@property(nonatomic) __weak id <WCPayQRCodeRewardReceiverDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRewardCodeViewConfirmToRemoveWording;
- (void)onRewardCodeViewConfirmToSetWording:(id)arg1;
- (void)onRewardCodeViewClickBoxButtonWithCodeDisplayMode:(long long)arg1;
- (void)updateViewAfterGetRemoveWordingResult:(_Bool)arg1;
- (void)updateViewAfterGetSetWordingResult:(_Bool)arg1;
- (void)detailBtnClick;
- (id)getImageFromCodeView;
- (void)saveCodeBtnClick;
- (void)confirmSetupBtnClick;
- (void)settingBtnClick;
- (void)leftBarButtonClick;
- (id)getDetailView;
- (void)setupFooterView;
- (void)setupDetailViewContent;
- (void)setupIntrolView;
- (void)refreshNavigationBar;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

