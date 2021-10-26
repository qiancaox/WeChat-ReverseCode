//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@class MMUIButton, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, WCAccountBottomButtonView, WCRedesignTextItem;
@protocol WCAccountLoginLastUserViewControllerDelegate;

@interface WCAccountLoginLastUserViewController : WCAccountBaseViewController
{
    id <WCAccountLoginLastUserViewControllerDelegate> m_delegate;
    _Bool _noPasswordLoginError;
    long long _m_iCount;
    NSString *_name;
    NSMutableArray *_supportLoginTypes;
    unsigned long long _currentLoginType;
    NSMutableArray *_moreButtonTypes;
    NSMutableArray *_switchLoginTypeWordings;
    UIImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_switchButton;
    UIButton *_doneButton;
    UIButton *_bothDeviceButton;
    UIButton *_voicePrintButton;
    UIButton *_voicePrintSwitchButton;
    WCRedesignTextItem *_passwordTextItem;
    WCAccountBottomButtonView *_bottomButtonView;
    WCRedesignTextItem *_verifyCodeTextItem;
    UIButton *_verifyCodeButton;
    long long _countDown;
}

- (void).cxx_destruct;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(retain, nonatomic) WCRedesignTextItem *verifyCodeTextItem; // @synthesize verifyCodeTextItem=_verifyCodeTextItem;
@property(retain, nonatomic) WCAccountBottomButtonView *bottomButtonView; // @synthesize bottomButtonView=_bottomButtonView;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(retain, nonatomic) UIButton *voicePrintSwitchButton; // @synthesize voicePrintSwitchButton=_voicePrintSwitchButton;
@property(retain, nonatomic) UIButton *voicePrintButton; // @synthesize voicePrintButton=_voicePrintButton;
@property(retain, nonatomic) UIButton *bothDeviceButton; // @synthesize bothDeviceButton=_bothDeviceButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSMutableArray *switchLoginTypeWordings; // @synthesize switchLoginTypeWordings=_switchLoginTypeWordings;
@property(retain, nonatomic) NSMutableArray *moreButtonTypes; // @synthesize moreButtonTypes=_moreButtonTypes;
@property(nonatomic) unsigned long long currentLoginType; // @synthesize currentLoginType=_currentLoginType;
@property(retain, nonatomic) NSMutableArray *supportLoginTypes; // @synthesize supportLoginTypes=_supportLoginTypes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool noPasswordLoginError; // @synthesize noPasswordLoginError=_noPasswordLoginError;
@property(nonatomic) long long m_iCount; // @synthesize m_iCount=_m_iCount;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onSwitch;
- (id)getSwitchButtonTitleWithCurrentLoginType:(unsigned long long)arg1;
- (id)getSwitchButtonTitleForLoginType:(unsigned long long)arg1;
- (id)getDisplayPhoneNumber;
- (id)getDisplayLoginName;
- (_Bool)isLastQQLogin;
- (_Bool)isLastLoginAccountTypePhone;
- (id)checkDone;
- (void)refreshView;
- (void)updateVerifyCodeButton;
- (void)startTimer;
- (void)onResendClicked;
- (void)onBothDeviceClicked;
- (void)onDone;
- (_Bool)checkDebugCommand;
- (void)onMore;
- (void)setDelegate:(id)arg1;
- (void)onSwitchPasswordInput;
- (void)onNoPasswordLoginError;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initBottomButtonView;
- (void)initVerifyCodeView;
- (void)initPasswordView;
- (void)initVoicePrintView;
- (void)initHeaderView;
- (void)initCommonView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (id)init;

@end

