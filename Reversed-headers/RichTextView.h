//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMCPLabel.h"

#import "IWCRichTextLabelProtocol-Protocol.h"
#import "MMRichTextCoverViewDelegate-Protocol.h"
#import "MMUserInterfaceStyleUpdateProtocol-Protocol.h"
#import "TextLayoutDelegate-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"
#import "WCForceTouchTriggerLongPressProtocol-Protocol.h"

@class MMRichTextCoverView, NSArray, NSMutableArray, NSRecursiveLock, NSString, TextStyleAttributeObj, UIColor, UIFont, UIImage;
@protocol ILinkEventExt, RichTextLayoutDelegate;

@interface RichTextView : MMCPLabel <TextLayoutDelegate, WCForceTouchPreviewProtocol, WCForceTouchTriggerLongPressProtocol, MMUserInterfaceStyleUpdateProtocol, IWCRichTextLabelProtocol, MMRichTextCoverViewDelegate>
{
    NSMutableArray *_arrParserObjects;
    _Bool _bWholeField;
    _Bool _bHightlighted;
    _Bool _bEnableBGColor;
    UIFont *_oFont;
    double _fWidth;
    UIColor *_oTextColor;
    UIColor *_oTextHLColor;
    NSMutableArray *_arrStyles;
    NSString *_nsContent;
    struct CGRect _touchedRect;
    _Bool _bSourceUrlForLP;
    unsigned long long _parserType;
    id <RichTextLayoutDelegate> _layoutDelegate;
    id <ILinkEventExt> _linkDelegate;
    _Bool _bIsLongPressHandled;
    _Bool _bDismissHightLightOutside;
    _Bool _bHandleLongPress;
    _Bool _bHandleTextClick;
    _Bool _bTouchesPassOn;
    TextStyleAttributeObj *_textAttributeObj;
    UIImage *_oImage;
    NSArray *_voiceOverElements;
    NSRecursiveLock *_lock;
    _Bool _verticallyCentered;
    _Bool _lineBreakByClipping;
    _Bool _bTouchBeginOnLink;
    _Bool _bIsAccessiblityContainer;
    _Bool _bDisableAccessiblityLinkClick;
    _Bool _accessibilityAddLinkPrefix;
    _Bool _autoExpandHitArea;
    unsigned int _linkTextVisiableLength;
    UIColor *_oNormalBGColor;
    UIColor *_oHighlightedBGColor;
    double _lineSpacing;
    double _lineNumber;
    double _originX;
    UIColor *_linkColor;
    UIColor *_linkHLColor;
    long long _richTextAlignment;
    NSString *_truncatedTrailingLinkText;
    NSString *_truncatedTrailingLinkUrl;
    UIColor *_truncatedTrailingLinkColor;
    MMRichTextCoverView *_richTextCoverView;
    double _rightIconPadding;
    UIColor *_linkShadowColor;
    struct CGSize _linkShadowOffset;
}

+ (struct UIEdgeInsets)expandHitAreaInsetsForRect:(struct CGRect)arg1;
+ (Class)layerClass;
+ (struct CGSize)calculateSizeWithConfig:(id)arg1 outArrStyles:(id *)arg2;
+ (struct CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 lineSpacing:(double)arg7 lineNumber:(unsigned long long)arg8 linkTextVisiableLength:(unsigned int)arg9 parserType:(unsigned long long)arg10 delegate:(id)arg11 outArrStyles:(id *)arg12;
+ (struct CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 lineSpacing:(double)arg7 lineNumber:(unsigned long long)arg8 parserType:(unsigned long long)arg9 delegate:(id)arg10 outArrStyles:(id *)arg11;
+ (struct CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8 outArrStyles:(id *)arg9;
+ (double)heightForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8 outArrStyles:(id *)arg9;
+ (double)heightForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8;
+ (id)getParserString:(id)arg1 parserType:(unsigned long long)arg2;
+ (id)getStyleString:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10 textAttribute:(id)arg11 expandAndCollapseObj:(id)arg12 imageLayout:(id)arg13;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10 textAttribute:(id)arg11 expandAndCollapseObj:(id)arg12;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10 textAttribute:(id)arg11;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5 outArrStyles:(id *)arg6;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 rightIconPadding:(double)arg8;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5;
+ (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
+ (void)initialize;
+ (id)pureStringForContent:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize linkShadowOffset; // @synthesize linkShadowOffset=_linkShadowOffset;
@property(retain, nonatomic) UIColor *linkShadowColor; // @synthesize linkShadowColor=_linkShadowColor;
@property(nonatomic) double rightIconPadding; // @synthesize rightIconPadding=_rightIconPadding;
@property(nonatomic) __weak MMRichTextCoverView *richTextCoverView; // @synthesize richTextCoverView=_richTextCoverView;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
@property(nonatomic) _Bool accessibilityAddLinkPrefix; // @synthesize accessibilityAddLinkPrefix=_accessibilityAddLinkPrefix;
@property(nonatomic) _Bool bDisableAccessiblityLinkClick; // @synthesize bDisableAccessiblityLinkClick=_bDisableAccessiblityLinkClick;
@property(nonatomic) _Bool bIsAccessiblityContainer; // @synthesize bIsAccessiblityContainer=_bIsAccessiblityContainer;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor; // @synthesize truncatedTrailingLinkColor=_truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl; // @synthesize truncatedTrailingLinkUrl=_truncatedTrailingLinkUrl;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText; // @synthesize truncatedTrailingLinkText=_truncatedTrailingLinkText;
@property(nonatomic) _Bool bTouchBeginOnLink; // @synthesize bTouchBeginOnLink=_bTouchBeginOnLink;
@property(nonatomic) _Bool lineBreakByClipping; // @synthesize lineBreakByClipping=_lineBreakByClipping;
@property(nonatomic) _Bool verticallyCentered; // @synthesize verticallyCentered=_verticallyCentered;
@property(nonatomic) long long richTextAlignment; // @synthesize richTextAlignment=_richTextAlignment;
@property(retain, nonatomic) UIColor *linkHLColor; // @synthesize linkHLColor=_linkHLColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) double originX; // @synthesize originX=_originX;
@property(nonatomic) double lineNumber; // @synthesize lineNumber=_lineNumber;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) TextStyleAttributeObj *textAttributeObj; // @synthesize textAttributeObj=_textAttributeObj;
@property(readonly, nonatomic) NSMutableArray *arrStyles; // @synthesize arrStyles=_arrStyles;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(nonatomic) _Bool bTouchesPassOn; // @synthesize bTouchesPassOn=_bTouchesPassOn;
@property(nonatomic) _Bool bDismissHightLightOutside; // @synthesize bDismissHightLightOutside=_bDismissHightLightOutside;
@property(nonatomic) _Bool bEnableBGColor; // @synthesize bEnableBGColor=_bEnableBGColor;
@property(retain, nonatomic) UIColor *oHighlightedBGColor; // @synthesize oHighlightedBGColor=_oHighlightedBGColor;
@property(retain, nonatomic) UIColor *oNormalBGColor; // @synthesize oNormalBGColor=_oNormalBGColor;
@property(nonatomic) unsigned int linkTextVisiableLength; // @synthesize linkTextVisiableLength=_linkTextVisiableLength;
@property(nonatomic) _Bool bSourceUrlForLP; // @synthesize bSourceUrlForLP=_bSourceUrlForLP;
@property(nonatomic) _Bool bHandleTextClick; // @synthesize bHandleTextClick=_bHandleTextClick;
@property(nonatomic) _Bool bHandleLongPress; // @synthesize bHandleLongPress=_bHandleLongPress;
@property(nonatomic) __weak id <RichTextLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
@property(retain, nonatomic) UIColor *oTextHLColor; // @synthesize oTextHLColor=_oTextHLColor;
@property(retain, nonatomic) UIColor *oTextColor; // @synthesize oTextColor=_oTextColor;
- (void)forceDisplayInSync;
- (void)onMMUserInterfaceStyleUpdate;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegateView;
- (float)getLineHeight;
- (_Bool)isEmojiLocation:(unsigned long long)arg1 bStart:(_Bool)arg2;
- (id)getStringWithRange:(struct _NSRange)arg1;
- (id)getSelectRectsWithRange:(struct _NSRange)arg1;
- (struct _NSRange)getTouchRangeWithTouchPoint:(struct CGPoint)arg1;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1 FrontCursor:(_Bool)arg2;
- (id)getTextString;
- (void)addStylesParserByPatternString:(id)arg1;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)targetLinkStyleFromStyles:(id)arg1 withPoint:(struct CGPoint)arg2;
- (struct CGRect)expandHitAreaForRect:(struct CGRect)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateAccessibilityLabel;
- (id)getAccessibilityLinks;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)delayedTouchesEnded:(id)arg1;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)longPressOnTextEvent:(id)arg1;
- (void)clickOnTextEvent:(id)arg1;
- (void)longPressOnAddressEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnWeappLinkEvent:(id)arg1;
- (void)longPressOnSearchTopicEvent:(id)arg1;
- (void)longPressOnWeAppMPShortLinkEvent:(id)arg1;
- (void)longPressOnBankCardNumberEvent:(id)arg1;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)clickOnSearchTopic:(id)arg1;
- (void)clickOnWeAppMPShortLink:(id)arg1;
- (void)clickOnBankCardNumber:(id)arg1;
- (void)clickOnSearchWeAppBoxEvent:(id)arg1;
- (void)clickOnAddressEvent:(id)arg1;
- (void)clickOnPhoneEvent:(id)arg1;
- (void)clickOnWeAppLinkEvent:(id)arg1;
- (void)clickOnLinkEvent:(id)arg1;
- (void)appendTextStyleToEnd:(id)arg1 linkUrl:(id)arg2;
- (void)updateTruncatedTrailingStyle;
- (void)updateTruncatedContent;
- (struct CGRect)frameForEmojiName:(id)arg1 range:(struct _NSRange)arg2;
- (void)stopPlayAnimateEmoji;
- (_Bool)playAnimateEmojiWithTimeOffset:(double)arg1 handler:(CDUnknownBlockType)arg2 endHandler:(CDUnknownBlockType)arg3;
- (void)updateColorForLinkParser:(id)arg1;
- (void)DrawRect:(struct CGRect)arg1 userInteractionEnabled:(_Bool)arg2;
- (void)adjustStylesForAlignment:(double)arg1;
- (void)dismissHighLight;
- (_Bool)setPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4;
- (_Bool)setContent:(id)arg1 TargetParserString:(id)arg2;
- (_Bool)getStylesForContent:(id)arg1 parserString:(id)arg2 parserPosition:(struct _NSParserPosition)arg3;
- (id)getParserString:(id)arg1;
- (id)getStyleString:(id)arg1;
- (id)getPatternStringFromContent:(id)arg1 patternGenerator:(id)arg2;
- (void)setTextParserAtributes:(id)arg1;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (unsigned int)perferedLinkTextVisiableLength;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 lineHeight:(double)arg3;
- (double)originXForLineAtHeight:(double)arg1;
- (void)setContent:(id)arg1;
@property(readonly, nonatomic) _Bool isContentTruncated;
- (id)getContent;
- (id)createParser:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)hasLinks;
- (long long)getCurrentLines;
- (struct CGRect)frameOfLastLine;
- (struct CGRect)frameOfFirstLine;
- (void)updateFrame:(double)arg1 height:(double)arg2;
- (void)resetFrameForMinHeight:(double)arg1;
- (void)setArrStyles:(id)arg1 withContent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)newAsyncDisplayTask;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)baseInit;
- (void)correctLineSpacing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

