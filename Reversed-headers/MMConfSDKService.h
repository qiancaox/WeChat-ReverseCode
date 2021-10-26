//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMConfSDKVideoHWencDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WXCNetWorkDelegate-Protocol.h"

@class ConfAVMemberList, IConfSDKRegisterableCallbackHolder, MMConfSDKAudioMgr, MMConfSDKCGIImp, MMConfSDKMemberMgr, MMConfSDKNativeCallbackMgr, MMConfSDKNetworkMgr, MMConfSDKVideoHWenc, MMTimer, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol MultitalkApiDelegate, OS_dispatch_queue;

@interface MMConfSDKService : MMUserService <MMConfSDKVideoHWencDelegate, MMServiceProtocol, WXCNetWorkDelegate>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    MMConfSDKNativeCallbackMgr *_nativeCallbackMgr;
    MMConfSDKMemberMgr *_memberMgr;
    MMConfSDKAudioMgr *_audioMgr;
    MMConfSDKNetworkMgr *_networkMgr;
    MMConfSDKCGIImp *_CGIImp;
    id <MultitalkApiDelegate> _apiDelegate;
    IConfSDKRegisterableCallbackHolder *joinSucc;
    IConfSDKRegisterableCallbackHolder *joinFail;
    IConfSDKRegisterableCallbackHolder *inviteSucc;
    IConfSDKRegisterableCallbackHolder *inviteFail;
    IConfSDKRegisterableCallbackHolder *inviteTimeout;
    IConfSDKRegisterableCallbackHolder *recvInvite;
    IConfSDKRegisterableCallbackHolder *recvInviteBusy;
    IConfSDKRegisterableCallbackHolder *recvNotifyFail;
    IConfSDKRegisterableCallbackHolder *ackSucc;
    IConfSDKRegisterableCallbackHolder *ackFail;
    IConfSDKRegisterableCallbackHolder *acceptSucc;
    IConfSDKRegisterableCallbackHolder *acceptFail;
    IConfSDKRegisterableCallbackHolder *acceptTimeout;
    IConfSDKRegisterableCallbackHolder *acceptByOtherDevice;
    IConfSDKRegisterableCallbackHolder *addResult;
    IConfSDKRegisterableCallbackHolder *memberChange;
    IConfSDKRegisterableCallbackHolder *videoMemberChange;
    IConfSDKRegisterableCallbackHolder *talkSucc;
    IConfSDKRegisterableCallbackHolder *talkFail;
    IConfSDKRegisterableCallbackHolder *callBroken;
    IConfSDKRegisterableCallbackHolder *callExit;
    IConfSDKRegisterableCallbackHolder *sessionExpiredCallback;
    IConfSDKRegisterableCallbackHolder *recvMissInvite;
    IConfSDKRegisterableCallbackHolder *initSucc;
    IConfSDKRegisterableCallbackHolder *initFail;
    CDUnknownBlockType _currentInterruptedCallback;
    CDUnknownBlockType _currentSpeakerChangedCallback;
    ConfAVMemberList *confAVMemberList;
    int _currentStatus;
    NSString *_currentAppId;
    int _exitReason;
    _Bool _isJoiningRoom;
    _Bool _isInit;
    _Bool _isRequireExit;
    CDUnknownBlockType _pendingExitCallback;
    _Bool _isSyncJoinDone;
    _Bool _isCallbackJoinDone;
    _Bool _isCallbackTalkDone;
    _Bool _isCameraStarted;
    _Bool _isHandsFree;
    int _screenStatus;
    _Bool _alreadyNotifyReady;
    _Bool _alreadyNotifyScreenSharing;
    _Bool _isProcessingMemberChg;
    long long _roomId;
    int _audioType;
    int _roomType;
    int _videoRatio;
    int _videoLength;
    _Bool _isMicrophoneMute;
    int mLastSimCardType;
    int _hwEncStatus;
    int _capW;
    int _capH;
    int _encStatusList[9];
    _Bool _isSWEncUsing;
    int _capStatus;
    MMConfSDKVideoHWenc *_hwEncoderList[9];
    struct {
        unsigned char encStatus;
        unsigned char capStatus;
        unsigned char encType[9];
    } _encModeStatus;
    int _screenEncStatusList[2];
    _Bool _isSWScreenEncUsing;
    MMConfSDKVideoHWenc *_hwScreenEncoderList[2];
    NSString *selfUsername;
    long long selfUin;
    NSString *callerName;
    NSString *_currentGroupid;
    NSString *_currentSdkGroupid;
    MMTimer *_timer;
    NSMutableArray *_displayUserList;
    int _memberRole;
    NSMutableArray *_cachedVideoMemberIds;
    NSMutableDictionary *_bannerCreateUserNameInfo;
    struct __CVBuffer *_screenPixelBuffer;
    int _lastScreenPlaneWidth;
    int _lastScreenPlaneHeight;
}

- (void).cxx_destruct;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (void)renewTimer;
- (void)onTimerExpired;
- (void)uninitEngine;
- (void)releaseDevice;
- (void)svrReport;
- (void)handleBannerMsg:(id)arg1 datelen:(int)arg2;
- (void)RecvNotifyImp:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5;
- (void)joinimp:(id)arg1 wxGroupId:(id)arg2;
- (void)joinSync:(id)arg1 wxGroupId:(id)arg2;
- (int)joinroom:(id)arg1 wxGroupId:(id)arg2;
- (void)inviteImp:(id)arg1 inviteCallback:(CDUnknownBlockType)arg2;
- (void)inviteSync:(id)arg1;
- (int)invite:(id)arg1 groupId:(id)arg2;
- (void)accept;
- (void)addMembers:(id)arg1;
- (void)hangup:(int)arg1;
- (void)sendBannerMsg:(unsigned int)arg1;
- (int)engineDoMemberSelectForView:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByOpenid:(id)arg1;
- (int)checkUsingMultiPathCellularConn;
- (id)getMemberQualityInfoList;
- (id)getTalkingMember;
- (void)forceExitRoom:(int)arg1;
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(_Bool)arg4;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(_Bool)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(_Bool)arg5;
- (void)stopVideo;
- (void)switchVideoToScreenPaused;
- (void)doVideoScreenSharingSecurityCheck:(id)arg1 fileId:(id)arg2;
- (void)switchVideoToScreen;
- (void)switchVideoToCamera;
- (void)switchVideoWithCameraEnabled:(_Bool)arg1 screenStatus:(int)arg2;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendScreenData:(char *)arg1 dataLen:(int)arg2 imgBuf:(struct __CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)sendScreenData:(void *)arg1;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(struct __CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(struct __CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendVideoData:(void *)arg1;
- (void)doQosCtrl:(_Bool)arg1;
- (void)CloseCodec:(int)arg1 codecFlag:(int)arg2;
- (int)GetEncHeight:(int)arg1 rmtDispW:(int)arg2 rmtDispH:(int)arg3 mode:(int)arg4;
- (int)GetEncWidth:(int)arg1 rmtDispW:(int)arg2 rmtDispH:(int)arg3 mode:(int)arg4;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(_Bool)arg2;
- (void)subscribeAll;
- (void)mayRelease:(_Bool)arg1;
- (void)updateConfig:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setMicroPhoneMute:(_Bool)arg1;
- (void)setSpeakerPhone:(_Bool)arg1;
- (void)cleanUpLongTermCallbacks;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (int)convertReason:(int)arg1;
- (void)cleanRecvNotifyListens;
- (void)callbackAccept:(CDUnknownBlockType)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)callbackInvite:(CDUnknownBlockType)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)callbackJoin:(CDUnknownBlockType)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)initWithSession:(id)arg1 refreshCallback:(_Bool)arg2;
- (void)stopListenNetworkChange;
- (void)startListenNetworkChange;
- (void)cleanUpJoinStatus;
- (void)callbackDeviceStartFailed:(CDUnknownBlockType)arg1 errCode:(int)arg2;
- (void)tryTriggerAcceptSucc:(CDUnknownBlockType)arg1;
- (void)tryTriggerInviteSucc:(CDUnknownBlockType)arg1;
- (void)tryTriggerJoinSucc:(CDUnknownBlockType)arg1;
- (void)setUpLongTermCallbackAfterJoin;
- (void)notifyVideoMemberChange:(id)arg1;
- (void)readyToTalk;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)EndSysCallInterruption;
- (void)BeginSysCallInterruption;
- (void)dealloc;
- (void)initEngine:(CDUnknownBlockType)arg1;
- (void)setMultitalkSelf:(id)arg1 useruin:(long long)arg2 multitalkApiDelegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

