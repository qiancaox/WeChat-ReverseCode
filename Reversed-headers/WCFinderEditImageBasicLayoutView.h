//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditImageLayoutView.h"

@interface WCFinderEditImageBasicLayoutView : WCEditImageLayoutView
{
    _Bool _hiddenCropBtn;
}

@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)onfinderEditFrameBlurViewTap;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)addPatMusicInfoToBGMLogic;
- (void)reloadBottomEditImageBar;
- (void)reloadMosaicToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initPenToolAttrBar;
- (_Bool)canShowBGMBtn;
- (_Bool)shouldAutoTriggerMusic;
- (id)customBottomButtonOrder;

@end

