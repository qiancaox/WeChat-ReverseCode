//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCShareCardGeneralHeaderViewV2.h"

@class MMUIButton, MMUILabel;
@protocol WCShareCardGeneralReceiveHeaderDelegate;

@interface WCShareCardGeneralReceiveHeaderView : WCShareCardGeneralHeaderViewV2
{
    MMUIButton *_sureButton;
    MMUILabel *_vaildDateLabel;
    MMUILabel *_useabelTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *useabelTimeLabel; // @synthesize useabelTimeLabel=_useabelTimeLabel;
@property(retain, nonatomic) MMUILabel *vaildDateLabel; // @synthesize vaildDateLabel=_vaildDateLabel;
@property(retain, nonatomic) MMUIButton *sureButton; // @synthesize sureButton=_sureButton;
- (void)singleSureButtonDidSelected;
- (void)setContentViewHetght;
- (void)initViews;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isGiftFromUserHeaderView:(_Bool)arg3 isShareCard:(_Bool)arg4 cardStatus:(int)arg5 isNeedHideAccecptBtn:(_Bool)arg6 delegate:(id)arg7;

// Remaining properties
@property(nonatomic) __weak id <WCShareCardGeneralReceiveHeaderDelegate> delegate;

@end

