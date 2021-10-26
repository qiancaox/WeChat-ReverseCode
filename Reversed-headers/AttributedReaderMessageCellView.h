//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class AttributedReaderMessageViewModel, CTRichTextView, MMBrandHeadImageView, MMUIButton, UIImageView, UIView;

@interface AttributedReaderMessageCellView : ReaderMessageCellView
{
    UIView *m_lineViewTop;
    UIView *m_lineViewBot;
    CTRichTextView *m_digestView;
    UIImageView *m_bgImageView;
    MMUIButton *m_headerMenuButton;
    MMBrandHeadImageView *m_headerView;
}

- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)operationMenuItems;
- (void)onExpose;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMoreButton:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)onHeadImageClick;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)arg1;
- (_Bool)isNeedHeaderMenuButton;
- (void)initDigestView;
- (void)initBgImageView;
- (void)addCornerToContentView;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) AttributedReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

