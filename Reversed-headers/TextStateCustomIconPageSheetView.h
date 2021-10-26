//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class MMGrowTextView, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImpactFeedbackGenerator, UIView;
@protocol TextStateIcon;

@interface TextStateCustomIconPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMGrowTextViewDelegate>
{
    _Bool _keyboardShowing;
    _Bool _enableHideTips;
    NSString *customIconDescription;
    id <TextStateIcon> _customIconWrap;
    CDUnknownBlockType _confirmHandler;
    CDUnknownBlockType _exceedMaxLengthHandler;
    UIView *_inputBackgroundView;
    MMWebImageView *_iconImageView;
    MMGrowTextView *_textView;
    MMUIButton *_clearButton;
    MMUILabel *_tipsLabel;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableHideTips; // @synthesize enableHideTips=_enableHideTips;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic, getter=isKeyboardShowing) _Bool keyboardShowing; // @synthesize keyboardShowing=_keyboardShowing;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(copy, nonatomic) CDUnknownBlockType exceedMaxLengthHandler; // @synthesize exceedMaxLengthHandler=_exceedMaxLengthHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmHandler; // @synthesize confirmHandler=_confirmHandler;
- (void)onClickPageSheetConfirmButton;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onTapDoneButton;
- (void)onTapClearButton;
- (void)hideExceedMaxLengthTips;
- (void)enableHideExceedMaxLengthTips;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription;
@property(retain, nonatomic) id <TextStateIcon> customIconWrap; // @synthesize customIconWrap=_customIconWrap;
- (void)updateLayout;
- (void)updateLayoutWithAnimated:(_Bool)arg1;
- (void)configDetailView;
- (void)configPageSheet;
- (void)pageSheetWillDisappear;
- (void)pageSheetWillAppear;
- (void)pageSheetDidRotation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

