//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"

@class MMMusicBlurCardView, MMMusicMVModel, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImage;

@interface MMMusicPublishViewController : MMUIViewController <MMSightCameraViewControllerDelegate, MMImagePickerManagerDelegate, ICdnComMgrExt, MMImageLoaderObserver>
{
    MMWebImageView *m_headImageView;
    MMUILabel *m_nickLabel;
    MMMusicBlurCardView *_blurCardView;
    MMUIButton *_editCoverBtn;
    MMMusicMVModel *_mvModel;
    unsigned long long _fromScene;
    UIImage *_customCoverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *customCoverImage; // @synthesize customCoverImage=_customCoverImage;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onCardClicked;
- (void)showImage:(id)arg1;
- (void)OnDone;
- (void)handleKeepDraftOrCancelFinish;
- (void)OnReturn;
- (void)editCoverOpenAlbum;
- (void)editCoverOpenCamera;
- (void)onTapEditCoverBtn;
- (void)reloadCardDisplay;
- (void)reload:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)setButtonToOrangeStyle:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMvModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

