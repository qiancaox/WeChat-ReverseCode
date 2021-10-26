//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseMessageCellView.h"

@class NSString, UIImageView, WCPayTransferMessageViewModel;

@interface WCPayTransferMessageCellView : WCPayBaseMessageCellView
{
    NSString *_bgImageName;
    NSString *_bgHighlightImageName;
    NSString *_maskImageName;
    NSString *_maskHighlightImageName;
    UIImageView *_addressIconImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addressIconImgView; // @synthesize addressIconImgView=_addressIconImgView;
@property(retain, nonatomic) NSString *maskHighlightImageName; // @synthesize maskHighlightImageName=_maskHighlightImageName;
@property(retain, nonatomic) NSString *maskImageName; // @synthesize maskImageName=_maskImageName;
@property(retain, nonatomic) NSString *bgHighlightImageName; // @synthesize bgHighlightImageName=_bgHighlightImageName;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (void)initSourceViewInside;
- (id)operationMenuItems;
- (_Bool)canShowRevokeMsgMenuItem;
- (void)updateBgImageView;
- (void)updateAddressIconImgView;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)layoutGroupTransferContentView;
- (void)updateStatus;
- (void)initTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WCPayTransferMessageViewModel *viewModel; // @dynamic viewModel;

@end

