//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveStarterViewController.h"

#import "ILBSLifeMgrExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "MMFinderGameLivePrepareLogicDelegate-Protocol.h"
#import "MMFinderLiveBulletinViewControllerDelegate-Protocol.h"
#import "MMFinderLiveFansGroupOperationReportDelegate-Protocol.h"
#import "MMFinderLiveMusicSettingReportDelegate-Protocol.h"
#import "MMFinderLiveSelectTagViewControllerDelegate-Protocol.h"
#import "MMFinderLiveShareSettingViewControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMLiveBeautyOperationContainerViewDelegate-Protocol.h"
#import "MMLiveCameraOperationPanelDelegate-Protocol.h"
#import "MMLiveCountdownTipsViewDelegate-Protocol.h"
#import "MMLiveFaceVerifyViewControllerDelegate-Protocol.h"
#import "MMLiveFilterOperationPanelDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCameraViewControllerDelegate-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderLiveControlItemCellDelegate-Protocol.h"
#import "WCFinderLiveStartPOIViewDelegate-Protocol.h"
#import "WCTimelinePOIPickerViewControllerDelegate-Protocol.h"

@class CAGradientLayer, FinderUserPrepareResponse, MMFinderGameLivePrepareLogic, MMFinderLiveAnchorTaskCollectionViewModel, MMFinderLiveTask, MMGrowTextView, MMLiveBeautyOperationContainerView, MMLiveCameraOperationPanel, MMLiveCategorySelectButton, MMLiveCountdownTipsView, MMLiveFilterOperationPanel, MMLiveRoomSelectButton, MMLiveVisibilitySelectButton, MMUIButton, NSMutableArray, NSString, RichTextView, UICollectionView, UILabel, UIScrollView, UIView, WCActionSheet, WCFinderHeadImageView, WCFinderLiveStartPOIView, WCFinderLiveStarterReporter, WCFinderStarterLiveViewModel, WCLiveStarterScrollActionSheet;
@protocol WCFinderLiveStarterViewControllerDelegate;

@interface WCFinderLiveStarterViewController : MMLiveStarterViewController <ILinkEventExt, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, ILBSLifeMgrExt, MMImagePickerManagerDelegate, MMLiveFaceVerifyViewControllerDelegate, WCFinderLiveControlItemCellDelegate, MMLiveBeautyOperationContainerViewDelegate, MMLiveFilterOperationPanelDelegate, MMLiveCountdownTipsViewDelegate, MMGrowTextViewDelegate, MMScrollActionSheetDelegate, MMFinderLiveSelectTagViewControllerDelegate, ILocationMgrExt, MMFinderLiveShareSettingViewControllerDelegate, MMFinderGameLivePrepareLogicDelegate, WCFinderLiveStartPOIViewDelegate, WCTimelinePOIPickerViewControllerDelegate, MultiSelectContactsViewControllerDelegate, WCFinderHeadImageViewDelegate, MMLiveCameraOperationPanelDelegate, MMFinderLiveBulletinViewControllerDelegate, MMFinderLiveMusicSettingReportDelegate, MMFinderLiveFansGroupOperationReportDelegate>
{
    _Bool _isAgreementChecked;
    _Bool _isCoverImageUpdated;
    _Bool _shouldStartLiveAfterSelectTag;
    _Bool _showSearchMoreGames;
    _Bool _hasFetchedLBS;
    _Bool _hasSelectPOI;
    _Bool _hasStartLive;
    _Bool _bulletinEditing;
    unsigned int _finderLocationSource;
    unsigned int _lastGoodsCount;
    id <WCFinderLiveStarterViewControllerDelegate> _delegate;
    MMUIButton *_closeButton;
    MMUIButton *_moreButton;
    UIView *_checkBoxView;
    MMUIButton *_agreementCheckbox;
    RichTextView *_agreementText;
    UIView *_inviteView;
    MMUIButton *_startLiveButton;
    MMLiveCountdownTipsView *_countdownTipsView;
    UIView *_separateLineUnderDesc;
    WCFinderStarterLiveViewModel *_starterVM;
    WCFinderHeadImageView *_coverImageView;
    WCActionSheet *_chooseCoverActionSheet;
    UIView *_cancelEditMask;
    MMGrowTextView *_growTextView;
    double _keyboardHeight;
    double _focusTextViewHeight;
    UILabel *_titleLabel;
    UIView *_noticeTimeView;
    UIView *_latestBottomView;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    UIScrollView *_controlPanelView;
    MMLiveBeautyOperationContainerView *_beautyContainerView;
    MMLiveFilterOperationPanel *_filterOperationPanel;
    MMLiveCameraOperationPanel *_cameraOperationPanel;
    MMLiveCategorySelectButton *_categorySelectView;
    MMLiveVisibilitySelectButton *_visibilitySelectButton;
    WCFinderLiveStartPOIView *_startPOIView;
    MMLiveRoomSelectButton *_redPacketRoomSelectButton;
    WCLiveStarterScrollActionSheet *_settingScrollActionSheet;
    WCFinderLiveStarterReporter *_reporter;
    FinderUserPrepareResponse *_prepareResponse;
    MMUIButton *_gameLiveButton;
    NSMutableArray *_gameUserInfoList;
    MMFinderGameLivePrepareLogic *_prepareLogic;
    UICollectionView *_anchorTaskCollectionView;
    MMFinderLiveAnchorTaskCollectionViewModel *_anchorTaskCollectionViewModel;
    unsigned long long _geoTag;
    CAGradientLayer *_growTextViewGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *growTextViewGradientLayer; // @synthesize growTextViewGradientLayer=_growTextViewGradientLayer;
@property(nonatomic) _Bool bulletinEditing; // @synthesize bulletinEditing=_bulletinEditing;
@property(nonatomic) unsigned int lastGoodsCount; // @synthesize lastGoodsCount=_lastGoodsCount;
@property(nonatomic) unsigned long long geoTag; // @synthesize geoTag=_geoTag;
@property(nonatomic) _Bool hasStartLive; // @synthesize hasStartLive=_hasStartLive;
@property(nonatomic) _Bool hasSelectPOI; // @synthesize hasSelectPOI=_hasSelectPOI;
@property(nonatomic) _Bool hasFetchedLBS; // @synthesize hasFetchedLBS=_hasFetchedLBS;
@property(retain, nonatomic) MMFinderLiveAnchorTaskCollectionViewModel *anchorTaskCollectionViewModel; // @synthesize anchorTaskCollectionViewModel=_anchorTaskCollectionViewModel;
@property(retain, nonatomic) UICollectionView *anchorTaskCollectionView; // @synthesize anchorTaskCollectionView=_anchorTaskCollectionView;
@property(retain, nonatomic) MMFinderGameLivePrepareLogic *prepareLogic; // @synthesize prepareLogic=_prepareLogic;
@property(nonatomic) _Bool showSearchMoreGames; // @synthesize showSearchMoreGames=_showSearchMoreGames;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) MMUIButton *gameLiveButton; // @synthesize gameLiveButton=_gameLiveButton;
@property(retain, nonatomic) FinderUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
@property(nonatomic) unsigned int finderLocationSource; // @synthesize finderLocationSource=_finderLocationSource;
@property(nonatomic) _Bool shouldStartLiveAfterSelectTag; // @synthesize shouldStartLiveAfterSelectTag=_shouldStartLiveAfterSelectTag;
@property(retain, nonatomic) WCFinderLiveStarterReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCLiveStarterScrollActionSheet *settingScrollActionSheet; // @synthesize settingScrollActionSheet=_settingScrollActionSheet;
@property(retain, nonatomic) MMLiveRoomSelectButton *redPacketRoomSelectButton; // @synthesize redPacketRoomSelectButton=_redPacketRoomSelectButton;
@property(retain, nonatomic) WCFinderLiveStartPOIView *startPOIView; // @synthesize startPOIView=_startPOIView;
@property(retain, nonatomic) MMLiveVisibilitySelectButton *visibilitySelectButton; // @synthesize visibilitySelectButton=_visibilitySelectButton;
@property(retain, nonatomic) MMLiveCategorySelectButton *categorySelectView; // @synthesize categorySelectView=_categorySelectView;
@property(retain, nonatomic) MMLiveCameraOperationPanel *cameraOperationPanel; // @synthesize cameraOperationPanel=_cameraOperationPanel;
@property(retain, nonatomic) MMLiveFilterOperationPanel *filterOperationPanel; // @synthesize filterOperationPanel=_filterOperationPanel;
@property(retain, nonatomic) MMLiveBeautyOperationContainerView *beautyContainerView; // @synthesize beautyContainerView=_beautyContainerView;
@property(retain, nonatomic) UIScrollView *controlPanelView; // @synthesize controlPanelView=_controlPanelView;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UIView *latestBottomView; // @synthesize latestBottomView=_latestBottomView;
@property(retain, nonatomic) UIView *noticeTimeView; // @synthesize noticeTimeView=_noticeTimeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double focusTextViewHeight; // @synthesize focusTextViewHeight=_focusTextViewHeight;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *cancelEditMask; // @synthesize cancelEditMask=_cancelEditMask;
@property(retain, nonatomic) WCActionSheet *chooseCoverActionSheet; // @synthesize chooseCoverActionSheet=_chooseCoverActionSheet;
@property(nonatomic) _Bool isCoverImageUpdated; // @synthesize isCoverImageUpdated=_isCoverImageUpdated;
@property(retain, nonatomic) WCFinderHeadImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) WCFinderStarterLiveViewModel *starterVM; // @synthesize starterVM=_starterVM;
@property(retain, nonatomic) UIView *separateLineUnderDesc; // @synthesize separateLineUnderDesc=_separateLineUnderDesc;
@property(retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView; // @synthesize countdownTipsView=_countdownTipsView;
@property(retain, nonatomic) MMUIButton *startLiveButton; // @synthesize startLiveButton=_startLiveButton;
@property(retain, nonatomic) UIView *inviteView; // @synthesize inviteView=_inviteView;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UIView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <WCFinderLiveStarterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onReportFansGroupOperationActionType:(long long)arg1;
- (void)onBulletinViewClickAction;
- (void)onMMFinderLiveBulletinViewControllerTapDone:(id)arg1;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIViewClickAction;
- (void)onGameLiveButtonClick;
- (void)onUpdateShowSearch:(_Bool)arg1;
- (void)onUpdateGameUserInfoList:(id)arg1;
- (void)updateGameLiveButtonDisplay;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)onMMLiveCameraOperationPanelChangeToPureAudioMode:(_Bool)arg1;
- (void)onMMLiveCameraOperationPanelCloseWithNextState:(unsigned long long)arg1;
- (void)onMMLiveFilterOperationPanelClose:(_Bool)arg1;
- (void)onMMLiveBeautyOperationContainerViewClose:(_Bool)arg1;
- (void)onWCFinderLiveStarterControlItemClicked:(id)arg1;
- (void)onFinderLiveStartFailWith:(id)arg1 errorType:(int)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)hiddenSubviewsTextViewBecomeFirstRespond:(_Bool)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)updateCoverImageViewWith:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithDataItem:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 dataReportModel:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)showFinderPublishView;
- (_Bool)isFrontCamera;
- (void)showFinderCameraViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)currentLiveTask;
- (id)getDefaultText;
- (void)reportAnchorTaskActivityClickAction:(id)arg1;
- (void)createAnchorTaskCollectionViewModel;
- (void)createAnchorTaskCollectionView;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)hiddenSubviewsShowCountdown:(_Bool)arg1;
- (void)hideCountdownView;
- (void)showCountdownView;
- (void)cancelLiveAndUpdateData;
- (void)onMMLiveCountdownTimeOut;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownStart;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithVisibilityMode:(int)arg1 andIdList:(id)arg2 andChatRoomContactIdList:(id)arg3 andContactUsernameList:(id)arg4;
- (void)checkAndStartFinderLiveAfterSelectTag:(id)arg1;
- (void)updateLiveTagInfo:(id)arg1 fetchGPSInfo:(_Bool *)arg2;
- (void)onMMFinderLiveSelectTagViewControllerTapDoneWithTagInfo:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onVisibilityLabelClicked:(id)arg1;
- (void)selectRoomForRedPacket;
- (void)onSelectRoomButtonClickForRedPacket:(id)arg1;
- (void)showLiveCategoryPickerView;
- (void)onCategorySelectButtonClick:(id)arg1;
- (void)updateDataItemInfos;
- (_Bool)isLivePolicyCheckedElsewhere;
- (void)startFinderLive;
- (_Bool)hasSelectedValidTag;
- (void)showConfirmViewWithTitle:(id)arg1;
- (void)onClickStartLiveAction:(id)arg1;
- (void)onMoreButtonClicked;
- (void)onCameraButtonClick;
- (void)onBgMusicButtonClick;
- (void)checkIfGoodsListNotEmpty:(CDUnknownBlockType)arg1;
- (void)openAddGoodsPanelIfGoodsListNotEmpty;
- (void)openAddGoodsPanelOrshopAssistApp;
- (void)openAddGoodsPanel;
- (void)onAddGoodsButtonClick;
- (void)onCloseButtonClicked;
- (void)onCheckBoxClicked;
- (void)onCancelEditMaskTouched:(id)arg1;
- (void)layoutCameraOperationPanel;
- (void)layoutFilterOperationPanel;
- (void)layoutBeautyOperationContainerView;
- (void)addShakeOnCheckBoxView;
- (void)layoutCheckBoxView;
- (_Bool)shouldAgreementCheckBoxShown;
- (void)layoutCountdownTipsView;
- (void)initvisibilitySelectButton;
- (void)initRedPacketRoomSelectButton;
- (void)initCategorySelectView;
- (void)initStartPOIView;
- (void)initLiveButtons;
- (void)initNoticeView;
- (void)initSeparateLine;
- (void)updateGrowTextViewIsFocus:(_Bool)arg1;
- (double)getGrowTextViewOriginHeight;
- (void)layoutGrowTextView;
- (void)initCoverImageView;
- (void)initInviteView;
- (void)initControlPanelView;
- (_Bool)needDisplayAnchorTaskImgView;
- (void)initHeadSubViews;
- (void)updateViewsBasedOnGrowTextView;
- (void)layoutTopAndBottomLayer;
- (double)getCurrentWidgetBottom;
- (void)initSubViews;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (_Bool)isCurrentShoppingCategory;
- (void)updateLocationCityInfo:(id)arg1;
- (void)updateCurrentLocationInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (void)stopGeocoder;
- (void)fetchAddressByCurrentLocation;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)arg1;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)getGPSListAccordingWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)getRecommendPOIInfoByUserGPS;
- (void)fetchRecommendGPSInfoByUserGpsCache;
- (_Bool)checkAndFetchRecommendGPSInfo;
- (void)fetchLocation;
- (void)updateLiveTagInfo:(id)arg1;
- (void)removeFromParentViewController;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFinderLiveTaskId:(id)arg1 shareItem:(id)arg2 andLiveNoticInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

