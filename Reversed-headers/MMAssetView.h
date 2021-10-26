//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMAssetPickerControllerExt-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"

@class MMAssetInfo, MMAssetPickerController, MMAssetSelectCheckButton, MMUILabel, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol MMAssetPickerControllerFinderAssetDelegate, MMAssetViewDelegate, MMImagePickerControlCenter;

@interface MMAssetView : MMUIView <MMAssetPickerControllerExt, WCForceTouchPreviewProtocol>
{
    _Bool m_isSelected;
    _Bool m_isPreviewStyle;
    UIView *m_disabledMaskView;
    UIView *m_tagBackgroundView;
    UILabel *m_lengthLabel;
    UIView *m_videoLogoView;
    UILabel *m_gifLogoView;
    UIView *m_editImageView;
    MMAssetSelectCheckButton *m_selectCheckButton;
    double m_imgHeight;
    _Bool _enabled;
    _Bool _isInPreview;
    _Bool _isAutoPicking;
    MMAssetInfo *_assetInfo;
    id <MMAssetViewDelegate> _delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    id <MMAssetPickerControllerFinderAssetDelegate> _m_finderDelegate;
    MMAssetPickerController *_parent;
    UIImage *_defaultImage;
    UIImageView *_m_assetImageView;
    UIView *_m_selectionBgView;
    MMUILabel *_m_nameLabel;
    MMUILabel *_m_sizeLabel;
    UIView *_highlightView;
    UILabel *_indexLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoPicking; // @synthesize isAutoPicking=_isAutoPicking;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) MMUILabel *m_sizeLabel; // @synthesize m_sizeLabel=_m_sizeLabel;
@property(retain, nonatomic) MMUILabel *m_nameLabel; // @synthesize m_nameLabel=_m_nameLabel;
@property(retain, nonatomic) UIView *m_selectionBgView; // @synthesize m_selectionBgView=_m_selectionBgView;
@property(retain, nonatomic) UIImageView *m_assetImageView; // @synthesize m_assetImageView=_m_assetImageView;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) _Bool isInPreview; // @synthesize isInPreview=_isInPreview;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak MMAssetPickerController *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak id <MMAssetPickerControllerFinderAssetDelegate> m_finderDelegate; // @synthesize m_finderDelegate=_m_finderDelegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak id <MMAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (void)fadeOutHighlightView;
- (void)tryAutoSelectAsset;
- (void)onAssetPickerControllerDidAddAssetId:(id)arg1;
- (void)onAssetPickerControllerUpdateAllAssetViewBorderWithAsset:(id)arg1;
- (void)onAssetPickerControllerFinishEditAssetInfo:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)timeStringBySeconds:(double)arg1;
- (_Bool)checkThumbImage;
- (void)onSelectAssetFinish;
- (void)doEdit;
- (void)doSelect;
- (void)doSelectWithStateInfo:(id)arg1;
- (void)tryToSelectGifWithImage:(id)arg1 imageData:(id)arg2;
- (void)tryToSelectVideoWithAvAsset:(id)arg1 videoUrl:(id)arg2;
- (void)tryToSelectAsset;
- (void)addMaskToAllTheOtherAsset;
- (void)addMaskToAllVideoAsset;
- (void)updateBgMaskView;
- (void)tagAseetToPreview;
- (void)realToggleSelection;
- (void)toggleSelection;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)accessibilityPerformMagicTap;
- (void)updateAssetViewEnabledWithSelectedCount:(unsigned long long)arg1;
- (_Bool)isCurrentAssetEnable;
- (void)updateEnabledState;
- (void)showAlertTips:(id)arg1;
- (void)showAseetNameAndSize;
- (void)showEditedLogoView;
- (void)showGifLogoView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showTagBGView;
- (double)tagLogoLBMargin;
- (void)changeToSmallPreviewStyle;
- (void)updateAssetInfo;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 showName:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

