//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMWebImageView, RichTextView, UIImageView, WCFinderJumpInfo, WCFinderLiveNoticeCellViewModel;
@protocol WCFinderHotSpotBannerViewDelegate;

@interface WCFinderHotSpotBannerView : UIView
{
    id <WCFinderHotSpotBannerViewDelegate> _delegate;
    unsigned long long _operatingType;
    MMWebImageView *_iconImageView;
    RichTextView *_textView;
    WCFinderJumpInfo *_hotSpotJumpInfo;
    UIImageView *_arrowImageView;
    WCFinderLiveNoticeCellViewModel *_liveNoticeVM;
    UIView *_separatorLineView;
    MMUIButton *_liveActionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *liveActionButton; // @synthesize liveActionButton=_liveActionButton;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) WCFinderLiveNoticeCellViewModel *liveNoticeVM; // @synthesize liveNoticeVM=_liveNoticeVM;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderJumpInfo *hotSpotJumpInfo; // @synthesize hotSpotJumpInfo=_hotSpotJumpInfo;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long operatingType; // @synthesize operatingType=_operatingType;
@property(nonatomic) __weak id <WCFinderHotSpotBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickEnterLivingAction;
- (void)onClickAction;
- (void)onliveActionButtonClicked:(id)arg1;
- (void)_updateLivingTip;
- (void)_updateHotSpotWithIconUrl:(id)arg1 defaultImage:(id)arg2 tips:(id)arg3;
- (void)_updateLiveAppointmentWithTips:(id)arg1;
- (void)updateLayoutView;
- (id)_initWithFrame:(struct CGRect)arg1 operatingType:(unsigned long long)arg2;
- (id)initWithWithIsLivingStateAndFrameForProductShare:(struct CGRect)arg1;
- (id)initWithWithIsLivingStateAndFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 liveNoticeVM:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 hotSpotJumpInfo:(id)arg2;

@end

