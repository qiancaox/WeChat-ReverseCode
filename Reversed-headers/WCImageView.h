//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIControl.h"

#import "MMDragDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"

@class MMDragManager, NSString, UIDragInteraction, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCImageViewModel;
@protocol WCImageViewDelegate;

@interface WCImageView : MMUIControl <WCFacadeExt, WCActionSheetDelegate, WCForceTouchPreviewProtocol, MMDragDelegate>
{
    _Bool _imageReady;
    _Bool _isLongPressHandled;
    id <WCImageViewDelegate> _delegate;
    UIImageView *_imageView;
    UIImage *_image;
    WCImageViewModel *_vm;
    UIImageView *_lockStausView;
    UIImageView *_sharedStausView;
    UILabel *_nickLabel;
    UIView *_highLightView;
    MMUIControl *_blurView;
    MMDragManager *_dragManager;
    UIImageView *_tmpLiftingImgView;
    UIDragInteraction *_dragInteraction;
    UITapGestureRecognizer *_debugTapGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLongPressHandled; // @synthesize isLongPressHandled=_isLongPressHandled;
@property(retain, nonatomic) UITapGestureRecognizer *debugTapGesture; // @synthesize debugTapGesture=_debugTapGesture;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) UIImageView *tmpLiftingImgView; // @synthesize tmpLiftingImgView=_tmpLiftingImgView;
@property(retain, nonatomic) MMDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) MMUIControl *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIImageView *sharedStausView; // @synthesize sharedStausView=_sharedStausView;
@property(retain, nonatomic) UIImageView *lockStausView; // @synthesize lockStausView=_lockStausView;
@property(nonatomic) _Bool imageReady; // @synthesize imageReady=_imageReady;
@property(retain, nonatomic) WCImageViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WCImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appendBlurViewIfNeed;
- (void)resetBlurView;
- (void)onDebugTap:(id)arg1;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)showOwnerNickname:(_Bool)arg1 username:(id)arg2;
- (void)showSharedStatus:(_Bool)arg1;
- (void)showLockStatus:(_Bool)arg1;
- (void)LongPressEvents;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationShow:(_Bool)arg1;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)triggerClickAction;
- (void)onClickWCImage:(id)arg1;
- (void)updateImageCotentMode;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)reloadImage;
- (id)getImage;
- (void)unsubscribeAll;
- (void)subscribeDownloadProcess;
- (void)updateViewModel:(id)arg1;
- (void)setupDebugHandlerIfNeeded;
- (void)setupLongPressHandler;
- (void)setupDragLogic;
- (void)setupImageView;
- (void)removeFromSuperview;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

