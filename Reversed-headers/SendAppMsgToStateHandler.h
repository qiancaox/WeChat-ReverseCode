//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareConfirmViewDelegate-Protocol.h"
#import "TextStatePublishViewControllerDelegate-Protocol.h"
#import "WCShareAuthViewControllerDelegate-Protocol.h"

@class MMUIViewController, NSString, OpenApiImageCdnUploader, OpenApiParameter, UINavigationController, WXMediaInternalMessage, WXSceneInternalMessage;

@interface SendAppMsgToStateHandler : NSObject <WCShareAuthViewControllerDelegate, TextStatePublishViewControllerDelegate, ShareConfirmViewDelegate>
{
    OpenApiParameter *_parameter;
    UINavigationController *_m_navigationController;
    OpenApiImageCdnUploader *_uploader;
    WXMediaInternalMessage *_mediaMessage;
    WXSceneInternalMessage *_sceneInfo;
    MMUIViewController *_statePublishVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *statePublishVC; // @synthesize statePublishVC=_statePublishVC;
@property(retain, nonatomic) WXSceneInternalMessage *sceneInfo; // @synthesize sceneInfo=_sceneInfo;
@property(retain, nonatomic) WXMediaInternalMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(retain, nonatomic) OpenApiImageCdnUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublished;
- (void)launchAppAndSendRespWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)launchAppAndSendRespWithErrCode:(int)arg1;
- (_Bool)isNeedAppendUpgradeH5WithDataItem:(id)arg1;
- (void)showStateVCWithSourceInfo:(id)arg1 dataItem:(id)arg2 sourceName:(id)arg3;
- (void)publishVideoFileState;
- (void)pullStateForMusicVideo;
- (void)pullStateForImage;
- (void)pullStateForText;
- (void)showStateVC:(id)arg1;
- (void)generateJumpDataItem:(CDUnknownBlockType)arg1;
- (id)generateSourceInfo;
- (void)showUnsupportErrVC;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)clearAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)clearAuthHandle;
- (void)doAppAuth;
- (void)sendAppMsgToState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

