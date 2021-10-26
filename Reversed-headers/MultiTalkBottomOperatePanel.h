//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UIImageView, UILabel, VoipDescriptionButton;
@protocol MultiTalkBottomOperatePanelDelegate;

@interface MultiTalkBottomOperatePanel : UIView
{
    _Bool _isPanGesturing;
    _Bool _videoButtonOn;
    _Bool _microphoneButtonOn;
    _Bool _speakerButtonOn;
    _Bool _flipCameraButtonHidden;
    int _layoutType;
    id <MultiTalkBottomOperatePanelDelegate> _delegate;
    long long _multiPathCellularTips;
    VoipDescriptionButton *_videoButton;
    VoipDescriptionButton *_microphoneButton;
    VoipDescriptionButton *_speakerButton;
    UIButton *_hangupButton;
    UIButton *_flipCameraButton;
    MMUIButton *_arrowButtonUp;
    MMUIButton *_arrowButtonDown;
    UIView *_backgroundView;
    UIView *_multiPathCellularTipsView;
    UILabel *_multiPathCellularTipsLabel;
    UIImageView *_multiPathCellularArrowView;
}

+ (double)panelContentHeightForLayoutType:(int)arg1;
+ (double)panelContentHeight;
+ (double)bottomExtraHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *multiPathCellularArrowView; // @synthesize multiPathCellularArrowView=_multiPathCellularArrowView;
@property(retain, nonatomic) UILabel *multiPathCellularTipsLabel; // @synthesize multiPathCellularTipsLabel=_multiPathCellularTipsLabel;
@property(retain, nonatomic) UIView *multiPathCellularTipsView; // @synthesize multiPathCellularTipsView=_multiPathCellularTipsView;
@property(nonatomic) int layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) _Bool flipCameraButtonHidden; // @synthesize flipCameraButtonHidden=_flipCameraButtonHidden;
@property(nonatomic) _Bool speakerButtonOn; // @synthesize speakerButtonOn=_speakerButtonOn;
@property(nonatomic) _Bool microphoneButtonOn; // @synthesize microphoneButtonOn=_microphoneButtonOn;
@property(nonatomic) _Bool videoButtonOn; // @synthesize videoButtonOn=_videoButtonOn;
@property(nonatomic) _Bool isPanGesturing; // @synthesize isPanGesturing=_isPanGesturing;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUIButton *arrowButtonDown; // @synthesize arrowButtonDown=_arrowButtonDown;
@property(retain, nonatomic) MMUIButton *arrowButtonUp; // @synthesize arrowButtonUp=_arrowButtonUp;
@property(retain, nonatomic) UIButton *flipCameraButton; // @synthesize flipCameraButton=_flipCameraButton;
@property(retain, nonatomic) UIButton *hangupButton; // @synthesize hangupButton=_hangupButton;
@property(retain, nonatomic) VoipDescriptionButton *speakerButton; // @synthesize speakerButton=_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) VoipDescriptionButton *videoButton; // @synthesize videoButton=_videoButton;
@property(nonatomic) long long multiPathCellularTips; // @synthesize multiPathCellularTips=_multiPathCellularTips;
@property(nonatomic) __weak id <MultiTalkBottomOperatePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleOperationPanelPanGesture:(id)arg1;
- (void)updateArrowButtonAlphaAnimated;
- (double)getTopButtonCurrentAlpha;
- (void)expandedPanel:(double)arg1;
- (void)displaySubviews;
- (void)foldedPanel:(double)arg1;
- (void)animateToChangeLayout;
- (void)onArrowButtonClick;
- (void)onFlipCameraButtonClick;
- (void)onHangupButtonClick;
- (void)onSpeakerButtonClick;
- (void)onMicrophoneButtonClick;
- (void)onVideoButtonClick;
- (void)onTapMultiPathCellularTipsView;
- (double)visibleHeightForLayoutType:(int)arg1;
- (double)currentVisibleHeight;
- (void)changeToPanelLayoutFromFolded;
- (void)changeToPanelFoldedLayout;
- (int)getCurrentLayoutType;
- (_Bool)isVideoButtonSelected;
- (_Bool)isMicrophoneButtonSelected;
- (_Bool)isSpeakerButtonSelected;
- (void)checkAndChangeFlipCameraButtonHidden;
- (void)updateFlipCameraButtonHidden:(_Bool)arg1;
- (void)updateVideoButtonEnabled:(_Bool)arg1;
- (void)updateSpeakerButtonEnabled:(_Bool)arg1;
- (void)updateMicrophoneButtonSelected:(_Bool)arg1;
- (void)updateVideoButtonSelected:(_Bool)arg1;
- (void)updateSpeakerButtonSelected:(_Bool)arg1;
- (void)updateMicrophoneButtonText;
- (void)updateVideoButtonText;
- (void)updateSpeakerButtonText;
- (void)updateProximityBySpeakerButtonState;
- (double)panelPanGestureTotalOffset;
- (double)topForLayoutType:(int)arg1;
- (double)heightForLayoutType:(int)arg1;
@property(readonly, nonatomic) double bottomAreaHeight;
- (id)createArrowButton;
- (void)layoutArrowButton;
- (void)layoutFlipCameraButton;
- (void)layoutHangupButton;
- (void)layoutSpeakerButton;
- (void)layoutMicrophoneButton;
- (void)layoutVideoButton;
- (id)createBasicVoipDescriptionButton;
- (id)disabledVoipDescriptButtonBackImage;
- (id)selectedVoipDescriptButtonBackImage;
- (id)normalVoipDescriptButtonBackImage;
- (void)layoutBackgroundView;
- (void)reportOperationArrowBtnExposeWithRoomKey:(unsigned long long)arg1;
- (void)reportOperationArrowBtnExposeOrClick:(_Bool)arg1 Expand:(_Bool)arg2;
- (void)updateMultiPathCellularTipsView;
- (void)updateArrowButtonForType:(int)arg1;
- (void)updateSubviewsHidden;
- (void)updateSubviewsAlphaWithValue:(double)arg1;
- (void)updateSubviewsAlpha;
- (void)updateFlipCameraFrame;
- (void)updateVoipDescriptButtonsFrame;
- (void)updateSubviewsFrame;
- (void)updateSelfFrame;
- (void)updateSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andLayoutType:(int)arg2;

@end

