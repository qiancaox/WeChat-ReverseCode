//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IdleTimerUtilExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayFacingQRCodeImageViewDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"
#import "WCPayQRCoverPageViewDelegate-Protocol.h"
#import "WCPayQrcodeSaveNotifyCgiDelegate-Protocol.h"
#import "WCPayWebImageViewDelegate-Protocol.h"

@class DataMatrix, MMPanelView, MMUILabel, MMUIView, NSMutableArray, NSString, QREncoder, RichTextView, UIButton, UIColor, UIImage, UIImageView, UIView, WCPayBannerNotice, WCPayFacingQRCodeImageView, WCPayQRCoverPageView, WCPayQrcodeSaveNotifyCgi, WCUIAlertView;
@protocol WCPayFacingReceiveQRCodeViewControllerDelegate;

@interface WCPayFacingReceiveQRCodeViewController : WCPayBaseViewController <WCPayQRCoverPageViewDelegate, WCPayQrcodeSaveNotifyCgiDelegate, WCPayWebImageViewDelegate, IdleTimerUtilExt, WCPayNoticeBannerDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayFacingQRCodeImageViewDelegate>
{
    UIButton *m_footerButton;
    id <WCPayFacingReceiveQRCodeViewControllerDelegate> m_delegate;
    double _oldBrightness;
    UIView *m_oTotalMoneyView;
    NSMutableArray *m_arrPayerInfoView;
    NSMutableArray *m_arrAnimationedMessageStruct;
    UIImage *m_oQRCodeImage;
    WCPayFacingQRCodeImageView *imageQRCodeBackgroundView;
    RichTextView *balanceRichTextView;
    UIView *m_oTotalMoneyBottomLine;
    NSMutableArray *m_arrPayerBottomLine;
    _Bool bDidBePoed;
    _Bool qrcodeIsAnimated;
    UIButton *toBalanceBtn;
    UIColor *originalBarTintColor;
    double introViewHeight;
    double bannerHeight;
    _Bool _ignoreScreenShotTips;
    _Bool _isShowingActionSheet;
    _Bool _bNeedRemoveReddotFromOtherView;
    UIImageView *_m_bizImageQRCodeView;
    MMUIView *_m_bizHeadImageView;
    DataMatrix *_m_bizQrMatrix;
    QREncoder *_m_bizEncoder;
    WCUIAlertView *_screenShotAlert;
    WCPayBannerNotice *_m_bannerNotice;
    UIImageView *_detailReddotImgView;
    MMUILabel *_detailSubLabel;
    WCPayQrcodeSaveNotifyCgi *_qrcodeSaveNotifyCgi;
    WCPayQRCoverPageView *_coverPageView;
    MMPanelView *_saveQRCodePanelView;
}

- (void).cxx_destruct;
@property(retain) MMPanelView *saveQRCodePanelView; // @synthesize saveQRCodePanelView=_saveQRCodePanelView;
@property(retain) WCPayQRCoverPageView *coverPageView; // @synthesize coverPageView=_coverPageView;
@property(retain) WCPayQrcodeSaveNotifyCgi *qrcodeSaveNotifyCgi; // @synthesize qrcodeSaveNotifyCgi=_qrcodeSaveNotifyCgi;
@property(nonatomic) _Bool bNeedRemoveReddotFromOtherView; // @synthesize bNeedRemoveReddotFromOtherView=_bNeedRemoveReddotFromOtherView;
@property(retain, nonatomic) MMUILabel *detailSubLabel; // @synthesize detailSubLabel=_detailSubLabel;
@property(retain, nonatomic) UIImageView *detailReddotImgView; // @synthesize detailReddotImgView=_detailReddotImgView;
@property(retain, nonatomic) WCPayBannerNotice *m_bannerNotice; // @synthesize m_bannerNotice=_m_bannerNotice;
@property(retain, nonatomic) WCUIAlertView *screenShotAlert; // @synthesize screenShotAlert=_screenShotAlert;
@property(retain, nonatomic) QREncoder *m_bizEncoder; // @synthesize m_bizEncoder=_m_bizEncoder;
@property(retain, nonatomic) DataMatrix *m_bizQrMatrix; // @synthesize m_bizQrMatrix=_m_bizQrMatrix;
@property(retain, nonatomic) MMUIView *m_bizHeadImageView; // @synthesize m_bizHeadImageView=_m_bizHeadImageView;
@property(retain, nonatomic) UIImageView *m_bizImageQRCodeView; // @synthesize m_bizImageQRCodeView=_m_bizImageQRCodeView;
@property(nonatomic) _Bool isShowingActionSheet; // @synthesize isShowingActionSheet=_isShowingActionSheet;
@property(nonatomic) _Bool ignoreScreenShotTips; // @synthesize ignoreScreenShotTips=_ignoreScreenShotTips;
@property(retain, nonatomic) WCPayFacingQRCodeImageView *imageQRCodeBackgroundView; // @synthesize imageQRCodeBackgroundView;
- (_Bool)isOversea;
- (void)overseaScreenShotEvents;
- (void)overseaLongPressEvents;
- (void)onWCPayQRCoverPageView:(id)arg1 clickWithButtonInfo:(id)arg2;
- (void)onWCPayQrcodeSaveNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQrcodeSaveNotifyCgiResp:(id)arg1;
- (int)getQrcodeLevel;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)headerImageWithPayIcon;
- (id)imageFromView:(id)arg1;
- (void)reportQrcodeSaveWithActionType:(unsigned long long)arg1 showType:(int)arg2 buttonType:(int)arg3;
- (void)reportApplyWithScene:(unsigned long long)arg1;
- (id)genDetailEnteranceViewWithNeedBottomCorner:(_Bool)arg1;
- (id)getBizF2FHeadImageViewWithImageSize:(struct CGSize)arg1 delegate:(id)arg2;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)showOpenSystemPushSoundTips;
- (void)showSetPushSoundResultSuccess:(_Bool)arg1 soundStatus:(_Bool)arg2;
- (void)reportLocation;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)navigationBarBackgroundColor;
- (void)onIdleTimerUtilVoipQuit;
- (void)saveImageToAlbum;
- (void)onClickQRButtonInfo:(id)arg1 saveNotifyType:(int)arg2 actionType:(unsigned long long)arg3;
- (void)showLongPressView:(id)arg1 saveNotifyType:(int)arg2;
- (void)showCoverPage:(id)arg1 saveNotifyType:(int)arg2;
- (void)onHalfPageClickClose:(id)arg1;
- (void)showHalfPage:(id)arg1 saveNotifyType:(int)arg2;
- (void)showWithQRActionInfo:(id)arg1 saveNotifyType:(int)arg2;
- (void)saveQRCodeImageButtonPress;
- (void)qrcodeSaveNotify:(unsigned int)arg1;
- (id)getSaveAlbumImageView;
- (id)getNewSaveAlbumImageView;
- (id)getLocalSaveAlbumImageViewV2;
- (void)OnWCPayFacingQRCodeImageViewLongPress;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheetWithSetting:(_Bool)arg1;
- (void)showActionList;
- (void)onClickToReceiveDetailButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)ShowPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(_Bool)arg2;
- (void)insertNewView:(id)arg1;
- (void)ShowReceivedMoneyAnimation:(id)arg1;
- (void)EndReceivedMoneyAnimation:(id)arg1;
- (void)RemoveMessageStructAndShowedMoney:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)checkSpeechStatus;
- (_Bool)isDomestic;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)reloadTableView;
- (void)onRightBarButtonClick;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (id)getActionBarView;
- (void)updateCoverPageView:(struct CGRect)arg1 bottomCorner:(_Bool)arg2 baseView:(id)arg3;
- (void)initHeaderView;
- (id)getDisplayTruthNameInfo;
- (id)getDisplayNameInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

