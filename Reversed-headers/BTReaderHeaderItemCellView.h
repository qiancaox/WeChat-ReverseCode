//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseItemCellView.h"

#import "BrandFinderLiveMgrExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class BTReaderHeaderItemCellViewModel, BTReaderMsgSectionData, BrandLiveStatusButton, CContact, MMHeadImageView, MMUIButton, MMUILabel, NSString, RichTextView, UIImageView, UILongPressGestureRecognizer;

@interface BTReaderHeaderItemCellView : BTBaseItemCellView <ILinkEventExt, WCActionSheetDelegate, BrandFinderLiveMgrExt>
{
    BTReaderMsgSectionData *_sectionData;
    MMHeadImageView *_headerView;
    RichTextView *_nameLabel;
    UIImageView *_starView;
    MMUIButton *_moreBtn;
    MMUILabel *_timeLabel;
    BrandLiveStatusButton *_liveButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) BrandLiveStatusButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak BTReaderMsgSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (id)accessibilityLabel;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(_Bool)arg2 finderFeedExportId:(id)arg3;
- (void)handleLongPress:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickMoreBtn:(id)arg1;
- (void)onClickLiveStatus;
- (void)onClickDeleteMsgBtn:(id)arg1;
- (void)onClickDeleteContactBtn:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLiveView;
- (void)updateTimeLabel;
- (void)initTimeLabel;
- (void)initMoreBtn;
- (void)updateStarView;
- (void)updateNameLabel;
- (void)initLiveView;
- (void)initNameLabel;
- (void)updateHeaderView;
- (void)initHeaderView;
- (void)initContentView;
- (void)initGestureRecognizer;
- (void)initSubviews;
- (id)genMenuItems;
- (void)setViewModel:(id)arg1;
@property(readonly, nonatomic) CContact *contact;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTReaderHeaderItemCellViewModel *viewModel; // @dynamic viewModel;

@end

