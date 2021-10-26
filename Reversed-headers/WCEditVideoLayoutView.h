//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EVVideoPreviewBrowserViewDelegate-Protocol.h"
#import "EditImageEmotionToolAttrDelegate-Protocol.h"
#import "EditImagePenToolAttrDelegate-Protocol.h"
#import "EditImageTextInputDelegate-Protocol.h"
#import "EditVideoBgmViewDelegate-Protocol.h"
#import "EditVideoCompositionBrowserViewDelegate-Protocol.h"
#import "EditVideoCropViewDelegate-Protocol.h"
#import "IMMAssetICloudExt-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCEditImageOperationDelegate-Protocol.h"
#import "WCEditVideoViewControllerExt-Protocol.h"

@class AVMutableComposition, AVMutableVideoComposition, EVVideoPreviewBrowserView, EditImageEmotionToolAttrView, EditImagePenToolAttrView, EditImageTextToolV2, EditVideoBGMView, EditVideoCompositionBrowserView, EditVideoCropView, EditVideoLogicController, EditVideoMusicController, MMLoadingView, MMMusicFadeOutLayer, MMUIButton, MMUIImageView, NSArray, NSMutableArray, NSString, RecommendedMusicInfo, UIImageView, UIView, WCEditImageScrollView, WCEditLoadingModeButton, WCEditVideoShareLongVideoModel;
@protocol WCEditVideoLayoutViewDelegate;

@interface WCEditVideoLayoutView : MMUIView <EditImageEmotionToolAttrDelegate, WCEditVideoViewControllerExt, EditImageTextInputDelegate, UIGestureRecognizerDelegate, EVVideoPreviewBrowserViewDelegate, WCActionSheetDelegate, EditVideoCompositionBrowserViewDelegate, WCEditImageOperationDelegate, EditImagePenToolAttrDelegate, EditVideoCropViewDelegate, EditVideoBgmViewDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    EVVideoPreviewBrowserView *_videoPreview;
    MMUIImageView *_topBackgroundView;
    MMUIButton *_doneBtn;
    MMUIImageView *_bottomBackgroundView;
    MMUIButton *_penBtn;
    EditImagePenToolAttrView *_penAttrBar;
    EditImageEmotionToolAttrView *_emotionAttrView;
    _Bool _isToolBarOccupy;
    double _lastScale;
    double _lastMinScale;
    double _lastMaxScale;
    struct CGSize _lastContentSize;
    struct CGPoint _lastContentOffset;
    double _previewLastScale;
    double _previewLastMinScale;
    double _previewLastMaxScale;
    struct CGSize _previewLastContentSize;
    struct CGPoint _previewLastContentOffset;
    struct UIEdgeInsets _previewLastEdgeInsets;
    struct CGRect _containerLastFrame;
    _Bool _bCropping;
    _Bool _enterCropVideoView;
    _Bool _defaultOriginalSoundMute;
    int _lastToolType;
    id <WCEditVideoLayoutViewDelegate> delegate;
    NSMutableArray *_avAssets;
    AVMutableComposition *_avComposition;
    unsigned long long _entranceType;
    unsigned long long _editImageUIStyle;
    MMUIView *_topBarView;
    MMUIButton *_cancelBtn;
    MMUIView *_topBarRightView;
    MMUIButton *_sendBtn;
    MMUIView *_bottomBarView;
    WCEditImageScrollView *_eIScrollView;
    MMLoadingView *_loadingView;
    EditVideoBGMView *_bgmAttrView;
    unsigned long long _filterIndex;
    WCEditLoadingModeButton *_bgmBtn;
    MMUIButton *_textBtn;
    EditVideoLogicController *_editVideoLogicController;
    EditVideoMusicController *_musicController;
    MMUIButton *_cropSizeBtn;
    MMUIButton *_cropBtn;
    MMUIButton *_emotionBtn;
    EditVideoCropView *_cropAttrView;
    RecommendedMusicInfo *_patMusicInfo;
    NSArray *_customBottomButtonOrder;
    EditVideoCompositionBrowserView *_videoCompositionEffectView;
    EditImageTextToolV2 *_textWidget;
    AVMutableVideoComposition *_videoComposition;
    MMUIButton *_rightTopEntranceBtn;
    WCEditVideoShareLongVideoModel *_shareLongVideoModel;
    UIView *_containerView;
    UIImageView *_bgImageView;
    UIView *_bgBlurView;
    UIView *_outterBorderView;
    UIView *_innterBorderView;
    MMMusicFadeOutLayer *_imageMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicFadeOutLayer *imageMaskLayer; // @synthesize imageMaskLayer=_imageMaskLayer;
@property(retain, nonatomic) UIView *innterBorderView; // @synthesize innterBorderView=_innterBorderView;
@property(retain, nonatomic) UIView *outterBorderView; // @synthesize outterBorderView=_outterBorderView;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCEditVideoShareLongVideoModel *shareLongVideoModel; // @synthesize shareLongVideoModel=_shareLongVideoModel;
@property(retain, nonatomic) MMUIButton *rightTopEntranceBtn; // @synthesize rightTopEntranceBtn=_rightTopEntranceBtn;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) EditImageTextToolV2 *textWidget; // @synthesize textWidget=_textWidget;
@property(retain, nonatomic) EditVideoCompositionBrowserView *videoCompositionEffectView; // @synthesize videoCompositionEffectView=_videoCompositionEffectView;
@property(copy, nonatomic) NSArray *customBottomButtonOrder; // @synthesize customBottomButtonOrder=_customBottomButtonOrder;
@property(nonatomic) _Bool defaultOriginalSoundMute; // @synthesize defaultOriginalSoundMute=_defaultOriginalSoundMute;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(nonatomic) _Bool enterCropVideoView; // @synthesize enterCropVideoView=_enterCropVideoView;
@property(retain, nonatomic) EditVideoCropView *cropAttrView; // @synthesize cropAttrView=_cropAttrView;
@property(retain, nonatomic) MMUIButton *emotionBtn; // @synthesize emotionBtn=_emotionBtn;
@property(retain, nonatomic) MMUIButton *cropBtn; // @synthesize cropBtn=_cropBtn;
@property(retain, nonatomic) MMUIButton *cropSizeBtn; // @synthesize cropSizeBtn=_cropSizeBtn;
@property(retain, nonatomic) EditVideoMusicController *musicController; // @synthesize musicController=_musicController;
@property(retain, nonatomic) EVVideoPreviewBrowserView *videoPreview; // @synthesize videoPreview=_videoPreview;
@property(retain, nonatomic) EditVideoLogicController *editVideoLogicController; // @synthesize editVideoLogicController=_editVideoLogicController;
@property(retain, nonatomic) MMUIButton *textBtn; // @synthesize textBtn=_textBtn;
@property(retain, nonatomic) WCEditLoadingModeButton *bgmBtn; // @synthesize bgmBtn=_bgmBtn;
@property(nonatomic) int lastToolType; // @synthesize lastToolType=_lastToolType;
@property(nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(retain, nonatomic) EditVideoBGMView *bgmAttrView; // @synthesize bgmAttrView=_bgmAttrView;
@property(nonatomic) __weak MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCEditImageScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
@property(retain, nonatomic) MMUIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) MMUIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) MMUIView *topBarRightView; // @synthesize topBarRightView=_topBarRightView;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) MMUIView *topBarView; // @synthesize topBarView=_topBarView;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) AVMutableComposition *avComposition; // @synthesize avComposition=_avComposition;
@property(retain, nonatomic) NSMutableArray *avAssets; // @synthesize avAssets=_avAssets;
@property(nonatomic) __weak id <WCEditVideoLayoutViewDelegate> delegate; // @synthesize delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)videoCompositionBrowserViewPlayReachEnd:(id)arg1;
- (void)previewBrowserViewDidReachEnd:(id)arg1;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (double)compositionViewlistenTimeIntervalInSection;
- (double)listenTimeIntervalInSection;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3;
- (void)cancelEditText:(id)arg1;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)EditVideoBGMViewMusicOnOffStateChange:(_Bool)arg1;
- (void)EditVideoBGMViewDidClickTurnOffMusicButton:(_Bool)arg1;
- (void)EditVideoBGMDone:(id)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)seekToTimeNoPause:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)dragaAndDropWidget;
- (_Bool)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (_Bool)scrollViewDidZoom:(id)arg1;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)didSelectEmotion:(id)arg1 withMd5:(id)arg2;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)setSelectedLineStyle:(unsigned long long)arg1;
- (void)undoPenEditImage;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)clearEmotionToolOperation;
- (void)onEmotionToolBarDoneBtnClicked:(_Bool)arg1;
- (void)startEmotionTool;
- (void)selectLastToolType;
- (void)updateToolBtns;
- (void)updateBtns;
- (void)onClickBGMEdit:(id)arg1;
- (void)onClickSizeCropEdit:(id)arg1;
- (void)removeBlurView;
- (void)onClickCropTimeLength;
- (void)onClickCropEdit:(id)arg1;
- (void)onClickTextEdit:(id)arg1;
- (void)onClickEmotionEdit:(id)arg1;
- (void)onClickPenEdit:(id)arg1;
- (void)onClickDone;
- (void)onClickCancel;
- (void)hiddenBottomEditImageBarSubViewExceptNextBtn:(_Bool)arg1;
- (void)returnToTimelineOrAlbum;
- (void)onSendLongVideoBtnClick;
- (void)onSendByFinder;
- (void)onSendByFinderBtnClick;
- (void)onSendByWeishiBtnClick;
- (double)getVideoScaleForCrop;
- (void)initWeSeeReportData:(_Bool)arg1;
- (id)avAsset;
- (void)updateCompositionWithEditVideoAttr:(id)arg1 needFullVideoCrop:(_Bool)arg2;
- (void)updateCompositionWithEditVideoAttr:(id)arg1 needFullVideoCrop:(_Bool)arg2 needPause:(_Bool)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (void)updateSingleCompositionWithEditVideoAttr:(id)arg1 index:(long long)arg2;
- (void)firstShowCrop;
- (void)layoutScrollView:(double)arg1;
- (void)showCropVideo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showCropVideo:(_Bool)arg1;
- (void)easeInOutTopAndBottomBar:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)easeInOutTopAndBottomBar:(_Bool)arg1;
- (void)setBGMToolAttrViewHidden:(_Bool)arg1;
- (void)setEmotionToolAttrViewHidden:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (struct CGRect)getBtnAccessibilityFrameWithButton:(id)arg1;
- (void)reloadBottomEditVideoBar;
- (void)reloadTopEditVideoBar;
- (void)reloadCropToolAttrBar;
- (void)reloadEmotionToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initEditImageView;
- (void)initVideoPreview;
- (void)initVideoCompositionEffectPreview;
- (void)initCropToolAttrBar;
- (void)initCropSizeBtn;
- (void)initCropBtn;
- (void)initSendBtn;
- (void)setPlayerTimeControlStatusChangeBlock;
- (id)getMusicLogoName;
- (void)initBGMBtn;
- (void)stopRawAndBGMMusicPlay;
- (void)initBgmLogic;
- (void)addPatMusicInfoToBGMLogic;
- (void)initBGMLogicAndBtn;
- (void)initTextToolAttrBar;
- (void)initBGMToolAttrBar;
- (unsigned long long)setBGMViewButtonOption;
- (void)initEmotionToolAttrBar;
- (void)initEmotionBtn;
- (void)initPenToolAttrBar;
- (void)initCustomBottomBar;
- (void)initBottomBar;
- (id)getTopBarRightView;
- (void)adjustTopBarRightViewLayout;
- (void)initTopBar;
- (void)initSendByWeishiBtn;
- (void)initSendLongVideoBtn;
- (void)initSendByFinderBtn;
- (void)layoutSubviews;
- (void)addBlurView;
- (void)hideSubviewForSNSHeader;
- (void)showSubviewForSNSHeader;
- (void)updateVideoPreviewFrameForSNSHeader;
- (void)setupSubviewForSNSHeader;
- (_Bool)previewStyleForSNSHeader;
- (void)initView;
- (void)updateAccessibilityLabel:(id)arg1;
- (id)getVideoComposition;
- (id)getEditImageAttr;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (_Bool)isClickBgmButton;
- (_Bool)isOriginalVideoMute;
- (_Bool)shouldAddCropLogic;
- (void)reportForTimelineEditVideoExposeWithCrop:(unsigned int)arg1;
- (void)reportForTimelineEditVideoExposeWithoutCrop;
- (void)onEditVideo;
- (_Bool)useVideoCompositionPreview;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

