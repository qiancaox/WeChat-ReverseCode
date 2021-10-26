//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, LiveSdkInfo, MMLiveTask, NSArray, NSDictionary, NSError, NSString, TRTCQualityInfo, TRTCStatistics;

@protocol MMLiveTaskMgrExt <NSObject>

@optional
- (void)onSwitchedToLiveWithExportId:(NSString *)arg1;
- (void)onFollowConfirmPopup:(_Bool)arg1;
- (void)onLiveTaskMainOrAssistantAnchorRestore:(MMLiveTask *)arg1;
- (void)onLiveTaskMainOrAssistantAnchorExit:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 updateLiveDescription:(NSString *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 micMutedDidChange:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 otherConnectMicAnchor:(NSString *)arg2 anchorSeiStatus:(unsigned int)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 liveViewConnectMicStateChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 anchorIsTalking:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 isPureAudioModeChanged:(_Bool)arg2 showTip:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 userVoiceVolume:(NSArray *)arg2 totalVolume:(long long)arg3 isSelfAnchorUserTalking:(_Bool)arg4;
- (void)onGroupLiveEntranceExposed:(long long)arg1 contact:(CBaseContact *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 SEIConnectMicUserInfoListUpdated:(NSArray *)arg2 listChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 cdnPlayRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTaskFirstShowCdnPlayerView:(MMLiveTask *)arg1;
- (void)onLiveTask:(MMLiveTask *)arg1 connectOtherRoomResult:(_Bool)arg2 userId:(NSString *)arg3 errCode:(int)arg4 errMsg:(NSString *)arg5;
- (void)onLiveTask:(MMLiveTask *)arg1 remoteUserLeaveRoom:(NSString *)arg2 reason:(long long)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 remoteUserEnterRoom:(NSString *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 netStatus:(NSDictionary *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 cdnPlayEventId:(int)arg2 params:(NSDictionary *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 sysCallInterrupted:(_Bool)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 user:(NSString *)arg2 eventName:(NSString *)arg3 info:(NSDictionary *)arg4;
- (void)onLiveTask:(MMLiveTask *)arg1 statistics:(TRTCStatistics *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 networkLocalQuality:(TRTCQualityInfo *)arg2 remoteQuality:(NSArray *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 user:(NSString *)arg2 videoAvailable:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 user:(NSString *)arg2 audioAvailable:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 switchRoleType:(int)arg2 errMsg:(NSString *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 liveSdkInfoWillExpire:(LiveSdkInfo *)arg2;
- (void)onLiveTask:(MMLiveTask *)arg1 exitLiveRoom:(long long)arg2 error:(NSError *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 enterLiveRoom:(NSError *)arg2;
- (void)onMinimizeWindowDismissLiveView:(MMLiveTask *)arg1;
- (void)onMinimizeWindowAttachLiveView:(MMLiveTask *)arg1;
- (void)onLiveTaskMinimizedWindowDismiss;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(MMLiveTask *)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(MMLiveTask *)arg1;
- (void)onWAWebViewControllerDisappear:(MMLiveTask *)arg1;
- (void)onWAWebViewControllerAppear:(MMLiveTask *)arg1;
- (void)onDismissMinimizeWindowDidEnd:(MMLiveTask *)arg1;
- (void)onShowMinimizeWindowWillStart:(MMLiveTask *)arg1;
- (void)onMinimizeInteractiveWillEnd:(MMLiveTask *)arg1;
- (void)onCollapseAnimationWillStartBeforeRotation:(MMLiveTask *)arg1;
- (void)onCollapseAnimationWillStart:(MMLiveTask *)arg1;
- (void)onExitLiveSuccessWithLiveTask:(MMLiveTask *)arg1;
- (void)onMMLiveStartFinishedWithLiveTask:(MMLiveTask *)arg1 startExtraInfo:(NSDictionary *)arg2 startSuccess:(_Bool)arg3;
- (void)onMMLiveWillStart;
- (void)onMMLiveVerifyFinishedWithLiveTask:(MMLiveTask *)arg1 startExtraInfo:(NSDictionary *)arg2 verifySuccess:(_Bool)arg3;
@end

