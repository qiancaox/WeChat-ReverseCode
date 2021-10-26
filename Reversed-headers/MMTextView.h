//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUITextView.h"

#import "MMInputAccessoryViewDelegate-Protocol.h"

@class MMInputAccessoryView, NSArray, NSString, UIColor, UIResponder;
@protocol textViewDelegate;

@interface MMTextView : MMUITextView <MMInputAccessoryViewDelegate>
{
    NSString *placeholder;
    _Bool _shouldDrawPlaceholder;
    id <textViewDelegate> m_delegate;
    double _fForceY;
    UIResponder *_overrideNextResponder;
    _Bool _externalKeyboardAttatched;
    MMInputAccessoryView *_accessoryView;
    int _menuButtonType;
    _Bool _hasShowMenu;
    _Bool _firstBecomeResponder;
    long long _emojiSeq;
    UIColor *m_textColor;
    _Bool _placeholderPinText;
    _Bool _placeholderMultiLine;
    _Bool _hideCursor;
    _Bool _bShowChangeLineMenu;
    _Bool _enableSetContentOffsetOnlyByMyself;
    _Bool _bCenterAndAutoHidePlaceHolder;
    _Bool _bShowEmoticon;
    _Bool _usesRedesignLineSpacing;
    _Bool _needHidePlaceHolder;
    _Bool _dictationProtecting;
    int _inputScene;
    unsigned int _menuType;
    UIColor *_placeHolderColor;
    double _textViewOriginHeight;
    NSString *_chatUserName;
    NSArray *_arrExtMenuItem;
    double _placeHolderHeight;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dictationProtecting; // @synthesize dictationProtecting=_dictationProtecting;
@property(nonatomic) _Bool needHidePlaceHolder; // @synthesize needHidePlaceHolder=_needHidePlaceHolder;
@property(nonatomic) double placeHolderHeight; // @synthesize placeHolderHeight=_placeHolderHeight;
@property(nonatomic) _Bool usesRedesignLineSpacing; // @synthesize usesRedesignLineSpacing=_usesRedesignLineSpacing;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) _Bool bShowEmoticon; // @synthesize bShowEmoticon=_bShowEmoticon;
@property(nonatomic) _Bool bCenterAndAutoHidePlaceHolder; // @synthesize bCenterAndAutoHidePlaceHolder=_bCenterAndAutoHidePlaceHolder;
@property(retain, nonatomic) NSArray *arrExtMenuItem; // @synthesize arrExtMenuItem=_arrExtMenuItem;
@property(nonatomic) _Bool enableSetContentOffsetOnlyByMyself; // @synthesize enableSetContentOffsetOnlyByMyself=_enableSetContentOffsetOnlyByMyself;
@property(nonatomic) unsigned int menuType; // @synthesize menuType=_menuType;
@property(nonatomic) _Bool bShowChangeLineMenu; // @synthesize bShowChangeLineMenu=_bShowChangeLineMenu;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) int inputScene; // @synthesize inputScene=_inputScene;
@property(nonatomic) _Bool hideCursor; // @synthesize hideCursor=_hideCursor;
@property(nonatomic) double textViewOriginHeight; // @synthesize textViewOriginHeight=_textViewOriginHeight;
@property(nonatomic) _Bool placeholderMultiLine; // @synthesize placeholderMultiLine=_placeholderMultiLine;
@property(nonatomic) _Bool placeholderPinText; // @synthesize placeholderPinText=_placeholderPinText;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
@property(nonatomic) double fForceY; // @synthesize fForceY=_fForceY;
@property(nonatomic) __weak id <textViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
- (id)keyCommands;
- (void)onWrap;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onWillPastedText:(id)arg1;
- (void)changeLine;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (id)defaultTextAttributes;
- (void)setTextColor:(id)arg1;
- (id)generateWXEmojitionEncodeStringWithTag:(id)arg1 image:(id)arg2;
- (void)encodeEmojitionWithAttributeString:(id)arg1;
- (id)generateEncodeEmojitionStringWithContent:(id)arg1;
- (struct _NSRange)selectedRangeInTextView:(id)arg1;
- (id)getPlainTextWithRange:(struct _NSRange)arg1;
- (struct _NSRange)getPlainTextSelectRange;
- (void)cutAttributeTextWithLimitLength:(unsigned int)arg1;
- (void)cutTextWithLimitLength:(unsigned int)arg1;
- (id)accessibilityValue;
- (id)text;
- (void)postTextChangeNotification;
- (void)onMenuDidShow:(id)arg1;
- (void)onMenuWillHide:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (unsigned int)getMenuTypeWithAction:(SEL)arg1;
- (id)nextResponder;
- (_Bool)isExtenalKeyboardAttatched;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)updateCurrentMenuItems;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)dictationRecordingDidEnd;
- (void)_textChanged:(id)arg1;
- (void)_updateShouldDrawPlaceholder;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onTap:(id)arg1;
- (void)fixTextViewGestureRecognizer;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

