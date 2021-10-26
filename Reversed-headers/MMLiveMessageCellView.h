//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class MMLiveMessageViewModel, MMUIImageView, MMUILabel, UIView;

@interface MMLiveMessageCellView : CommonMessageCellView
{
    MMUILabel *_liveNameLabel;
    MMUILabel *_liveStatusLabel;
    MMUIImageView *_liveIconAnimatedView;
    MMUIImageView *_liveIconView;
    MMUILabel *_liveSourceLabel;
    UIView *_seperatorLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorLineView; // @synthesize seperatorLineView=_seperatorLineView;
@property(retain, nonatomic) MMUILabel *liveSourceLabel; // @synthesize liveSourceLabel=_liveSourceLabel;
@property(retain, nonatomic) MMUIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) MMUIImageView *liveIconAnimatedView; // @synthesize liveIconAnimatedView=_liveIconAnimatedView;
@property(retain, nonatomic) MMUILabel *liveStatusLabel; // @synthesize liveStatusLabel=_liveStatusLabel;
@property(retain, nonatomic) MMUILabel *liveNameLabel; // @synthesize liveNameLabel=_liveNameLabel;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)updateLiveLogoStatus;
- (void)reloadData;
- (void)layoutDefault;
- (void)initBgImageView;
- (void)layoutSubviews;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) MMLiveMessageViewModel *viewModel; // @dynamic viewModel;

@end

