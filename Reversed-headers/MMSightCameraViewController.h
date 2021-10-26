//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ShortVideoBarDelegate-Protocol.h"

@class MMShortVideoParamModel, NSString, RecommendedMusicInfo, ShortVideoToolbar;
@protocol MMSightCameraViewControllerDelegate;

@interface MMSightCameraViewController : MMUIViewController <ShortVideoBarDelegate>
{
    _Bool _isEditing;
    id <MMSightCameraViewControllerDelegate> _delegate;
    ShortVideoToolbar *_shortVideoToolbar;
    CDUnknownBlockType _startEditingAction;
    CDUnknownBlockType _endEditingAction;
    unsigned long long _scene;
    RecommendedMusicInfo *_patMusicInfo;
    unsigned long long _cameraMode;
    MMShortVideoParamModel *_reportModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMShortVideoParamModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType endEditingAction; // @synthesize endEditingAction=_endEditingAction;
@property(copy, nonatomic) CDUnknownBlockType startEditingAction; // @synthesize startEditingAction=_startEditingAction;
@property(retain, nonatomic) ShortVideoToolbar *shortVideoToolbar; // @synthesize shortVideoToolbar=_shortVideoToolbar;
@property(nonatomic) __weak id <MMSightCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)sightCameraViewControllerDidRotate:(id)arg1;
- (void)onEndEditing;
- (void)onStartEditing;
- (void)onStartRecord;
- (id)chatUserNameForSightStatistics;
- (_Bool)isShowingCameraGuide;
- (void)onCameraResign;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)handleShortVideoWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)showImagePicker;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;
- (id)currentViewController;
- (void)didFinishPickingAssetWithDataItem:(id)arg1;
- (void)closeAfterDone;
- (void)close;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)handleDefaultCameraFrontBackDevice;
- (void)viewDidLoad;
- (_Bool)hidesStatusBar;
- (void)didEnterBackground;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

