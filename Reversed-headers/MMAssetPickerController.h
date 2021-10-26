//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAlbumAccessAuthViewDelegate-Protocol.h"
#import "MMAlbumDropPickerControllerDelegate-Protocol.h"
#import "MMAssetCellDelegate-Protocol.h"
#import "MMAssetPickerControllerFinderAssetDelegate-Protocol.h"
#import "MMAssetViewDelegate-Protocol.h"
#import "MMImageCropperDelegate-Protocol.h"
#import "MMImagePreviewBrowserControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCEditVideoViewControllerDelegate-Protocol.h"
#import "WCFinderLongVideoChooseHelperDelegate-Protocol.h"

@class MMAlbum, MMAlbumAccessAuthView, MMAlbumAuthorizationReportObject, MMAlbumDropPickerController, MMAsset, MMAssetPickerControllerProxyObject, MMAssetPickerControllerProxyObjectForAllAsset, MMAssetPickerSendButton, MMImagePickerVideoCompressQueue, MMTableView, MMUIButton, MMUIImageView, MMUILabel, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIImageView, UIView;
@protocol MMAssetPickerControllerDelegate, MMImagePickerControlCenter, UIViewControllerPreviewing;

@interface MMAssetPickerController : MMUIViewController <UIViewControllerPreviewingDelegate, MMImageCropperDelegate, WCActionSheetDelegate, MMAlbumDropPickerControllerDelegate, MMAssetPickerControllerFinderAssetDelegate, WCEditVideoViewControllerDelegate, MMAlbumAccessAuthViewDelegate, MMAssetCellDelegate, MMAssetViewDelegate, WCFinderLongVideoChooseHelperDelegate, UITableViewDataSource, UITableViewDelegate, MMImagePreviewBrowserControllerDelegate>
{
    NSMutableArray *_imageDictionaries;
    UIImageView *_bottomBar;
    MMUIButton *_previewButton;
    double _realBottomBarHeight;
    _Bool _isOriginalImageForSend;
    _Bool _needThumbImage;
    int _compressType;
    double _assetWidth;
    id <UIViewControllerPreviewing> _previewingContext;
    MMAssetPickerSendButton *m_sendButton;
    MMUIButton *m_originImageCheck;
    NSMutableDictionary *m_dicSectionTitle;
    NSMutableDictionary *m_dicAssetsByTitle;
    NSMutableArray *m_arrAssetInfoByIndex;
    NSMutableDictionary *m_dicAssetsSize;
    _Bool _m_isJustReturnMMAsset;
    _Bool _m_hasClickSendButton;
    _Bool _m_directToFirstAlbum;
    _Bool _isOriginSelected;
    _Bool _isDefaultAlbum;
    _Bool _reloadAnimating;
    _Bool _isDragged;
    _Bool _bPickerStyleForFile;
    _Bool _isAccessLimited;
    id <MMAssetPickerControllerDelegate> _m_delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    MMTableView *_tableView;
    MMAlbum *_m_album;
    NSDateFormatter *_dateFormatter;
    long long _colNum;
    NSMutableSet *_selectedDefaultAssetIds;
    NSMutableSet *_selectedOtherAssetIds;
    MMAsset *_lastSelectedAsset;
    long long _reloadAnimateCounter;
    MMAlbumDropPickerController *_dropController;
    NSMutableArray *_selectedAssetInfos;
    MMAssetPickerControllerProxyObject *_m_proxyPreviewObject;
    MMAssetPickerControllerProxyObjectForAllAsset *_m_proxyPreviewObjectForAllAsset;
    MMUILabel *_tipsLabel;
    MMUIImageView *_originSelectIconView;
    UIView *_navBarBlurView;
    UIView *_accessLimitTipView;
    UIView *_bottomBarBlurView;
    MMAlbumAccessAuthView *_accessAuthView;
    NSMutableArray *_hybridFileArray;
    NSMutableArray *_hybridAVAssetArray;
    NSMutableArray *_assetExifInfo;
    long long _waitingToSelectIndex;
    long long _waitingToPreviewIndex;
    NSString *_waitingToSelectAssetId;
    unsigned long long _m_adjustRevertIndex;
    MMAlbumAuthorizationReportObject *_accessAuthReportObject;
    MMImagePickerVideoCompressQueue *_videoCompressQueue;
    NSMutableSet *_autoSelectAssetViews;
    MMUIButton *_skipBtn;
    NSMutableArray *_failAssets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *failAssets; // @synthesize failAssets=_failAssets;
@property(retain, nonatomic) MMUIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) NSMutableSet *autoSelectAssetViews; // @synthesize autoSelectAssetViews=_autoSelectAssetViews;
@property(nonatomic) _Bool isAccessLimited; // @synthesize isAccessLimited=_isAccessLimited;
@property(retain, nonatomic) MMImagePickerVideoCompressQueue *videoCompressQueue; // @synthesize videoCompressQueue=_videoCompressQueue;
@property(retain, nonatomic) MMAlbumAuthorizationReportObject *accessAuthReportObject; // @synthesize accessAuthReportObject=_accessAuthReportObject;
@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex=_m_adjustRevertIndex;
@property(nonatomic) _Bool bPickerStyleForFile; // @synthesize bPickerStyleForFile=_bPickerStyleForFile;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(retain, nonatomic) NSString *waitingToSelectAssetId; // @synthesize waitingToSelectAssetId=_waitingToSelectAssetId;
@property(nonatomic) long long waitingToPreviewIndex; // @synthesize waitingToPreviewIndex=_waitingToPreviewIndex;
@property(nonatomic) long long waitingToSelectIndex; // @synthesize waitingToSelectIndex=_waitingToSelectIndex;
@property(retain, nonatomic) NSMutableArray *assetExifInfo; // @synthesize assetExifInfo=_assetExifInfo;
@property(retain, nonatomic) NSMutableArray *hybridAVAssetArray; // @synthesize hybridAVAssetArray=_hybridAVAssetArray;
@property(retain, nonatomic) NSMutableArray *hybridFileArray; // @synthesize hybridFileArray=_hybridFileArray;
@property(retain, nonatomic) MMAlbumAccessAuthView *accessAuthView; // @synthesize accessAuthView=_accessAuthView;
@property(retain, nonatomic) UIView *bottomBarBlurView; // @synthesize bottomBarBlurView=_bottomBarBlurView;
@property(retain, nonatomic) UIView *accessLimitTipView; // @synthesize accessLimitTipView=_accessLimitTipView;
@property(retain, nonatomic) UIView *navBarBlurView; // @synthesize navBarBlurView=_navBarBlurView;
@property(retain, nonatomic) MMUIImageView *originSelectIconView; // @synthesize originSelectIconView=_originSelectIconView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMAssetPickerControllerProxyObjectForAllAsset *m_proxyPreviewObjectForAllAsset; // @synthesize m_proxyPreviewObjectForAllAsset=_m_proxyPreviewObjectForAllAsset;
@property(retain, nonatomic) MMAssetPickerControllerProxyObject *m_proxyPreviewObject; // @synthesize m_proxyPreviewObject=_m_proxyPreviewObject;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
@property(retain, nonatomic) MMAlbumDropPickerController *dropController; // @synthesize dropController=_dropController;
@property(nonatomic) _Bool reloadAnimating; // @synthesize reloadAnimating=_reloadAnimating;
@property(nonatomic) long long reloadAnimateCounter; // @synthesize reloadAnimateCounter=_reloadAnimateCounter;
@property(nonatomic) __weak MMAsset *lastSelectedAsset; // @synthesize lastSelectedAsset=_lastSelectedAsset;
@property(retain, nonatomic) NSMutableSet *selectedOtherAssetIds; // @synthesize selectedOtherAssetIds=_selectedOtherAssetIds;
@property(retain, nonatomic) NSMutableSet *selectedDefaultAssetIds; // @synthesize selectedDefaultAssetIds=_selectedDefaultAssetIds;
@property(nonatomic) long long colNum; // @synthesize colNum=_colNum;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool isDefaultAlbum; // @synthesize isDefaultAlbum=_isDefaultAlbum;
@property(nonatomic) _Bool isOriginSelected; // @synthesize isOriginSelected=_isOriginSelected;
@property(nonatomic) _Bool m_directToFirstAlbum; // @synthesize m_directToFirstAlbum=_m_directToFirstAlbum;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton=_m_hasClickSendButton;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset=_m_isJustReturnMMAsset;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album=_m_album;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak id <MMAssetPickerControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onRealAlbumFinsihLoad:(id)arg1;
- (void)OnCancel:(id)arg1;
- (long long)getSelectedFirstAssetType;
- (void)OnCompressedSuccess:(id)arg1;
- (void)OnCompressEnd:(id)arg1;
- (void)OnCompressBegin;
- (_Bool)getPickerWAVideoCompressedFromOptionObj;
- (unsigned long long)getPickerSceneFromOptionObj;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(_Bool)arg3 exifLogInfo:(id)arg4;
- (void)compressAndSendVideo:(id)arg1;
- (void)asyncGetAssetVideo:(id)arg1 compress:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)longVideoChooseHelper:(id)arg1 didSelectedDataItem:(id)arg2 gpsInfoArrayOfAsset:(id)arg3 dataReportModel:(id)arg4;
- (void)onAccessAuthShowLimitedPhotos;
- (void)openSystemSetting;
- (void)onAccessAuthOpenSetting;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostStateModel:(id)arg1;
- (void)sendImageWithEditImageAttr:(id)arg1;
- (void)sendVideoWithDraft:(id)arg1;
- (void)sendVideoWithURL:(id)arg1;
- (void)waitingToPreviewIndex:(long long)arg1 assetId:(id)arg2;
- (void)waitingToSelectIndex:(long long)arg1 assetId:(id)arg2;
- (struct CGRect)assetViewFrameGlobal:(id)arg1;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (void)onOriginImageCheckChanged;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)sendVideoWithAsset:(id)arg1;
- (void)clickAssetInfo:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)onRemoveSelectedInfoWithAssetId:(id)arg1;
- (void)onFinishEditAssetInfo:(id)arg1;
- (id)dictionaryWithGPSInfoString:(id)arg1;
- (id)dictionaryWithJsonString:(id)arg1;
- (id)getSelectedAssetInfoGPSInfo;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (_Bool)canSelectAssetInPreview:(id)arg1;
- (void)pushToAlbumCropVC;
- (void)pushToFinderEditVideoVC:(_Bool)arg1;
- (void)continueToFinderCropVC;
- (_Bool)hasBeenAddedCheckWithArray:(id)arg1 andImage:(id)arg2;
- (void)updateMyHybridFileWithAssetInfoArray:(id)arg1;
- (void)_onFinderEdit;
- (void)selectedFinderPostAsset;
- (void)loadAssetForFinderPost:(id)arg1 postAction:(CDUnknownBlockType)arg2;
- (void)sendImageFromScene:(long long)arg1;
- (void)cancelSelectFromImagePreview;
- (void)onSelectAssetFinished:(id)arg1 isAutoSelct:(_Bool)arg2;
- (void)onPickMorePhoto;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isSelectedAssetInfosContainsVideo;
- (void)showTipWithWording:(id)arg1;
- (void)sendFail;
- (void)postProcessImages;
- (void)generateOriginAssetData:(id)arg1 data:(id)arg2 dic:(id)arg3;
- (void)processingImage;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)stopLoadingAfterSent;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAssetsInChangeInfo:(id)arg1;
- (void)onAlbumChanged:(id)arg1 changeInfo:(id)arg2;
- (void)readAlbumsErrorWithAlbumDropPicker:(id)arg1;
- (void)authorizeErrorWithAlbumDropPicker:(id)arg1;
- (void)albumDropPicker:(id)arg1 didSelectAtAlbum:(id)arg2 isDefault:(_Bool)arg3;
- (void)recordUnselectedAsset:(id)arg1;
- (void)recordSelectedAsset:(id)arg1;
- (void)adjustTableViewInitOffset;
- (void)addOutterSelectInfo;
- (void)removeBarBlurEffect;
- (void)removeAllSeletedMedia;
- (void)sendSelectedMedia;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onJumpToSystemSetting:(id)arg1;
- (void)OnAssetSend:(id)arg1;
- (void)OnSkipBtnClick:(id)arg1;
- (void)OnPreview:(id)arg1;
- (void)onQuit;
- (void)onOriginImageCheck:(id)arg1;
- (void)editPhoto:(id)arg1 withScene:(int)arg2;
- (void)saveAsset:(_Bool)arg1;
- (void)saveEditedVideo;
- (void)saveEditedImage:(_Bool)arg1;
- (void)previewImageOfSelectedWithIndex:(unsigned int)arg1;
- (void)previewImageWithAssetInfo:(id)arg1;
- (void)handlePreviewTextStateVideoWithAnAvAsset:(id)arg1 AssetInfo:(id)arg2;
- (void)previewTextStateVideoWithAssetInfo:(id)arg1;
- (void)preparePreviewImageWithAssetInfo:(id)arg1;
- (int)pickerScene;
- (void)reloadBottomBar;
- (void)configureSkipBtnVisibleState:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadPhotoViewWithAnimated:(_Bool)arg1 scrollToBottom:(_Bool)arg2;
- (void)scrollToBottom;
- (void)initGesture;
- (void)adjustSubviewRects;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (void)adjustTitleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)initAccessAuthView;
- (void)initBottomAccessLimitTipView;
- (void)initTitleView;
- (void)initBottomBar;
- (void)initTableView;
- (void)initView;
- (void)reportAccessAuthInterruptIfNeeded;
- (void)initData;
- (void)rebuildAlbumData;
- (_Bool)isAssetSelectable:(id)arg1;
- (_Bool)hasSelectVideoAsset;
- (_Bool)hasSelectImageAsset;
- (long long)overrideMMUserInterfaceStyle;
- (void)addAssetSize:(id)arg1 forAsset:(unsigned long long)arg2;
- (id)getSelectedAssets;
- (unsigned long long)selectedAssetInfosCount;
- (void)dealloc;
- (void)reloadData;
- (id)init;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(_Bool)arg3;
- (_Bool)isForbidPageSheet;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)onEditVideoWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)onEditImageWithAssets:(id)arg1 fromScene:(unsigned long long)arg2 entranceScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

