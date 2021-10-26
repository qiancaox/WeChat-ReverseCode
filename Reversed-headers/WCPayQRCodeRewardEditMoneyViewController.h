//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class MMTextView, MMUIView, NSString, UIButton, UITextField, WCPayParamInvalidTipView;
@protocol WCPayQRCodeRewardEditMoneyViewControllerDelegate;

@interface WCPayQRCodeRewardEditMoneyViewController : WCPayBaseViewController <UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _bIsCheckBoxSelected;
    id <WCPayQRCodeRewardEditMoneyViewControllerDelegate> _delegate;
    UITextField *_moneyTextField;
    MMTextView *_commentTextView;
    UIButton *_confirmBtn;
    MMUIView *_keyboardInputToolBar;
    UIButton *_checkBoxButton;
    WCPayParamInvalidTipView *_invalidTipsView;
    unsigned long long _maxAmount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) WCPayParamInvalidTipView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(nonatomic) _Bool bIsCheckBoxSelected; // @synthesize bIsCheckBoxSelected=_bIsCheckBoxSelected;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(retain, nonatomic) MMUIView *keyboardInputToolBar; // @synthesize keyboardInputToolBar=_keyboardInputToolBar;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(nonatomic) __weak id <WCPayQRCodeRewardEditMoneyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkBoxBtnClick;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)resignTextField;
- (void)confirmBtnClick;
- (long long)getInputAmount;
- (void)leftBarButtonClick;
- (id)genKeyboardInputToolBar;
- (void)setupContentView;
- (void)setupData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

