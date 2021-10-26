//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"

@class AAQueryDetailRes, CContact, NSString, RichTextView;

@interface WCPayGPOrderStatusHeaderView : MMUIView <ILinkEventExt, RichTextLayoutDelegate>
{
    _Bool _isExpandThemeContent;
    CContact *_chatroomContact;
    AAQueryDetailRes *_orderDetailData;
    NSString *_remarkContent;
    MMUIView *_contentView;
    RichTextView *_picRichTextView;
    RichTextView *_remarkTextView;
    double _themeContentHeight;
    double _themeContentLineNumber;
    CDUnknownBlockType _onClickPayMoneyBtn;
    CDUnknownBlockType _onClickViewRemarkImage;
    CDUnknownBlockType _onClickRemindPayerBtn;
    CDUnknownBlockType _onClickSetPayerRemarkBtn;
    CDUnknownBlockType _onClickExpandThemeBtn;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClickExpandThemeBtn; // @synthesize onClickExpandThemeBtn=_onClickExpandThemeBtn;
@property(copy, nonatomic) CDUnknownBlockType onClickSetPayerRemarkBtn; // @synthesize onClickSetPayerRemarkBtn=_onClickSetPayerRemarkBtn;
@property(copy, nonatomic) CDUnknownBlockType onClickRemindPayerBtn; // @synthesize onClickRemindPayerBtn=_onClickRemindPayerBtn;
@property(copy, nonatomic) CDUnknownBlockType onClickViewRemarkImage; // @synthesize onClickViewRemarkImage=_onClickViewRemarkImage;
@property(copy, nonatomic) CDUnknownBlockType onClickPayMoneyBtn; // @synthesize onClickPayMoneyBtn=_onClickPayMoneyBtn;
@property(nonatomic) double themeContentLineNumber; // @synthesize themeContentLineNumber=_themeContentLineNumber;
@property(nonatomic) double themeContentHeight; // @synthesize themeContentHeight=_themeContentHeight;
@property(nonatomic) _Bool isExpandThemeContent; // @synthesize isExpandThemeContent=_isExpandThemeContent;
@property(retain, nonatomic) RichTextView *remarkTextView; // @synthesize remarkTextView=_remarkTextView;
@property(retain, nonatomic) RichTextView *picRichTextView; // @synthesize picRichTextView=_picRichTextView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *remarkContent; // @synthesize remarkContent=_remarkContent;
@property(retain, nonatomic) AAQueryDetailRes *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)refreshRemarkTextViewWithContent:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isSingleChatAndCustomizeAAPaid;
- (void)expandBtnClick;
- (id)getLauncherContact;
- (id)getLauncherHeadImg;
- (_Bool)isActivityAAType;
- (_Bool)isCustomizeAAType;
- (_Bool)isCommonAAType;
- (void)payBtnPress:(id)arg1;
- (id)genOrderTipsLabel;
- (id)genOrderMainContentLabel;
- (id)genOrderTitleLabel;
- (void)setupOthersContentViewWithOriginY:(double)arg1 withTipsContent:(id)arg2;
- (void)setupPayerContentViewWithOriginY:(double)arg1;
- (void)setupReceiverContentViewWithOriginY:(double)arg1;
- (void)setupContentViewWhenOrderStatusUnNormalWithOriginY:(double)arg1;
- (void)setupTitleContentView;
- (void)setupContentView;
- (id)initHeaderViewWithContainerWidth:(double)arg1 orderStatusRespData:(id)arg2 chatroomContact:(id)arg3 remarkContent:(id)arg4 expandAllContent:(_Bool)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

