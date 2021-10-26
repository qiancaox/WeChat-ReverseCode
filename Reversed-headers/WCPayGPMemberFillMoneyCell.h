//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class CContact, MMHeadImageView, MMUILabel, MMUIView, NSString, UIButton, UIImageView, WCUITextField;
@protocol WCPayGPMemberFillMoneyCellDelegate;

@interface WCPayGPMemberFillMoneyCell : MMTableViewCell <UITextFieldDelegate>
{
    id <WCPayGPMemberFillMoneyCellDelegate> _delegate;
    unsigned long long _maxPerAmount;
    MMUIView *_cellContentView;
    WCUITextField *_textField;
    MMHeadImageView *_headImgView;
    MMUILabel *_nicknameLabel;
    MMUIView *_keyboardInputToolBar;
    UIImageView *_checkMarkImgView;
    MMUIView *_lineView;
    MMUILabel *_postfixLabel;
    MMUILabel *_tipsLabel;
    UIButton *_previousBtn;
    UIButton *_nextBtn;
    CContact *_contact;
    double _payAmount;
}

- (void).cxx_destruct;
@property(nonatomic) double payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIButton *previousBtn; // @synthesize previousBtn=_previousBtn;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUILabel *postfixLabel; // @synthesize postfixLabel=_postfixLabel;
@property(retain, nonatomic) MMUIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(retain, nonatomic) MMUIView *keyboardInputToolBar; // @synthesize keyboardInputToolBar=_keyboardInputToolBar;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) WCUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMUIView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(nonatomic) unsigned long long maxPerAmount; // @synthesize maxPerAmount=_maxPerAmount;
@property(nonatomic) __weak id <WCPayGPMemberFillMoneyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)nextTextField;
- (void)previousTextField;
- (void)resignTextField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateCheckMarkImgViewWithPayAmount:(double)arg1;
- (void)setNextBtnEnable:(_Bool)arg1;
- (void)setPreviousBtnEnable:(_Bool)arg1;
- (void)makeTextFieldBecomeFirstResponder;
- (void)updateCellContentWithContact:(id)arg1 payAmount:(double)arg2 displayName:(id)arg3 needShowSepLine:(_Bool)arg4;
- (void)configLayout;
- (id)genKeyboardInputToolbar;
- (void)setupContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

