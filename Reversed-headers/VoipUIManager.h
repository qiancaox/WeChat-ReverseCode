//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "IVOIPExt-Protocol.h"
#import "IVOIPModeSwitchExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MultiTalkMainWindowDelegate-Protocol.h"
#import "VideoVoipViewDelegate-Protocol.h"
#import "VoipAlertViewDelegate-Protocol.h"
#import "VoipMinimizeWindowDelegate-Protocol.h"

@class CContact, MMTimer, MMTipsViewController, MMVoipToastWindow, MinimizeTaskData, MultiTalkMainWindow, NSString, VideoVoipCallerView, VideoVoipReceiverView, VideoVoipView, VoipAlertView, VoipCheckAudioDeviceObj, VoipMinimizeView, VoipMinimizeWindow, WavAudioPlayer;

@interface VoipUIManager : MMUserService <MMKernelExt, MultiTalkMainWindowDelegate, VideoVoipViewDelegate, VoipMinimizeWindowDelegate, MMTipsViewControllerDelegate, IVOIPModeSwitchExt, IMinimizeTaskDelegateInterface, MMServiceProtocol, IVOIPExt, VoipAlertViewDelegate, MMConfigMgrExt>
{
    _Bool _isAudioMode;
    _Bool _m_needRestartWXMusic;
    _Bool _hasShownChangeToCelluarTip;
    _Bool _hasShownLongUseCellularTips;
    _Bool _isMinimizeMode;
    _Bool _m_hasBeganTalk;
    unsigned int _m_scoreIntervalDay;
    int _m_currentRoomId;
    unsigned int _m_lastScoreTime;
    unsigned int _m_currentStartTalkTime;
    unsigned int _lastAudioNotifyTimeForNetStatus;
    unsigned int _lastMinimizeNotifyTimeForNetStatus;
    unsigned int _lastStatusNotifyTimeForNetStatus;
    CContact *m_tempContact;
    VoipAlertView *m_voipAlertView;
    VideoVoipCallerView *m_videoVoipCallerViewController;
    VideoVoipReceiverView *m_videoVoipReceiverViewController;
    VoipMinimizeWindow *m_voipMinimizeWindow;
    MMVoipToastWindow *m_voipToastWindow;
    MultiTalkMainWindow *m_mainWindow;
    MMTipsViewController *m_tipsViewController;
    MMTipsViewController *m_scoreTipsViewController;
    NSString *_m_scoreTipsViewTitle;
    long long _m_currentRoomKey;
    MMTimer *_netStatusUpdateTimer;
    WavAudioPlayer *_wavAudioPlayer;
    MinimizeTaskData *_minimizeTaskData;
    VoipMinimizeView *_minimizeView;
    VoipCheckAudioDeviceObj *_checkAudioDeviceObj;
    CContact *_startCallContactFromCallKit;
}

+ (_Bool)canForceStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVideoWithContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *startCallContactFromCallKit; // @synthesize startCallContactFromCallKit=_startCallContactFromCallKit;
@property(retain, nonatomic) VoipCheckAudioDeviceObj *checkAudioDeviceObj; // @synthesize checkAudioDeviceObj=_checkAudioDeviceObj;
@property(nonatomic) _Bool m_hasBeganTalk; // @synthesize m_hasBeganTalk=_m_hasBeganTalk;
@property(nonatomic) _Bool isMinimizeMode; // @synthesize isMinimizeMode=_isMinimizeMode;
@property(retain, nonatomic) VoipMinimizeView *minimizeView; // @synthesize minimizeView=_minimizeView;
@property(retain, nonatomic) MinimizeTaskData *minimizeTaskData; // @synthesize minimizeTaskData=_minimizeTaskData;
@property(nonatomic) _Bool hasShownLongUseCellularTips; // @synthesize hasShownLongUseCellularTips=_hasShownLongUseCellularTips;
@property(nonatomic) _Bool hasShownChangeToCelluarTip; // @synthesize hasShownChangeToCelluarTip=_hasShownChangeToCelluarTip;
@property(nonatomic) unsigned int lastStatusNotifyTimeForNetStatus; // @synthesize lastStatusNotifyTimeForNetStatus=_lastStatusNotifyTimeForNetStatus;
@property(nonatomic) unsigned int lastMinimizeNotifyTimeForNetStatus; // @synthesize lastMinimizeNotifyTimeForNetStatus=_lastMinimizeNotifyTimeForNetStatus;
@property(nonatomic) unsigned int lastAudioNotifyTimeForNetStatus; // @synthesize lastAudioNotifyTimeForNetStatus=_lastAudioNotifyTimeForNetStatus;
@property(retain, nonatomic) WavAudioPlayer *wavAudioPlayer; // @synthesize wavAudioPlayer=_wavAudioPlayer;
@property(retain, nonatomic) MMTimer *netStatusUpdateTimer; // @synthesize netStatusUpdateTimer=_netStatusUpdateTimer;
@property(nonatomic) unsigned int m_currentStartTalkTime; // @synthesize m_currentStartTalkTime=_m_currentStartTalkTime;
@property(nonatomic) unsigned int m_lastScoreTime; // @synthesize m_lastScoreTime=_m_lastScoreTime;
@property(nonatomic) long long m_currentRoomKey; // @synthesize m_currentRoomKey=_m_currentRoomKey;
@property(nonatomic) int m_currentRoomId; // @synthesize m_currentRoomId=_m_currentRoomId;
@property(nonatomic) unsigned int m_scoreIntervalDay; // @synthesize m_scoreIntervalDay=_m_scoreIntervalDay;
@property(retain, nonatomic) NSString *m_scoreTipsViewTitle; // @synthesize m_scoreTipsViewTitle=_m_scoreTipsViewTitle;
@property(nonatomic) _Bool m_needRestartWXMusic; // @synthesize m_needRestartWXMusic=_m_needRestartWXMusic;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(retain, nonatomic) MMTipsViewController *m_scoreTipsViewController; // @synthesize m_scoreTipsViewController;
@property(retain, nonatomic) MMTipsViewController *m_tipsViewController; // @synthesize m_tipsViewController;
@property(retain, nonatomic) MultiTalkMainWindow *m_mainWindow; // @synthesize m_mainWindow;
@property(retain, nonatomic) MMVoipToastWindow *m_voipToastWindow; // @synthesize m_voipToastWindow;
@property(retain, nonatomic) VoipMinimizeWindow *m_voipMinimizeWindow; // @synthesize m_voipMinimizeWindow;
@property(retain, nonatomic) VideoVoipReceiverView *m_videoVoipReceiverViewController; // @synthesize m_videoVoipReceiverViewController;
@property(retain, nonatomic) VideoVoipCallerView *m_videoVoipCallerViewController; // @synthesize m_videoVoipCallerViewController;
@property(retain, nonatomic) VoipAlertView *m_voipAlertView; // @synthesize m_voipAlertView;
@property(retain, nonatomic) CContact *m_tempContact; // @synthesize m_tempContact;
- (void)checkAndUpdateNetStatus;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(struct CGSize)arg2 toSize:(struct CGSize)arg3;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (_Bool)canUseGlobalMinimization;
- (void)updateMinimizeViewFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)createMinimizeView;
- (id)getMinimizeTaskKey;
- (id)getMinimizeTaskData;
- (void)OnVideoModeChangeToVoiceMode;
- (void)audioDeviceUnPlugin;
- (void)audioDevicePlugin;
- (void)checkAndDismissScoreTipsVC;
- (void)cleanScoreData;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withScore:(long long)arg3 withTipsVC:(id)arg4;
- (void)acceptCallUseCallkit;
- (void)onPreQuit;
- (void)onMMDynamicConfigUpdated;
- (void)OnMicStartFailed;
- (void)onGetNewVideoScoreIntervalDay:(unsigned int)arg1 andScoreTitle:(id)arg2;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)SendInvite:(int)arg1;
- (void)Cancel;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (_Bool)onVideoVoipViewRequestMinimizeStatus;
- (void)onVideoVoipViewMinCardModeChangeToMinimizeMode;
- (void)onVideoVoipViewChangeToMinimizeMode;
- (void)onVideoVoipViewClose;
- (void)onVoipMinimizeWindowClicked;
- (id)voipSelectHangupAndAcceptButtonBackImage;
- (id)voipHangupButtonBackImage;
- (id)voipAcceptButtonBackImage;
- (id)disabledVoipDescriptButtonBackImage;
- (id)selectedVoipDescriptButtonBackImage;
- (id)normalVoipDescriptButtonBackImage;
@property(readonly, nonatomic) VideoVoipView *currentVoipViewController;
- (id)getVoIPCallOutUserName;
- (_Bool)isValidVoipViewController:(id)arg1;
- (void)setReceiverViewMonoMsgForCloseNotification:(id)arg1;
- (void)updateWarningTipsWithRoomid:(unsigned int)arg1 roomkey:(unsigned long long)arg2 type:(unsigned int)arg3 tips:(id)arg4;
- (void)switchToSpeakPhoneMode:(_Bool)arg1;
- (void)clearCurrentString;
- (_Bool)isUsingEarDeviceInLastTalk;
- (_Bool)isUsingBuiltInReceiverInLastTalk;
- (unsigned long long)audioDeviceModeInLastTalk;
- (_Bool)isUsingEarDevice;
- (_Bool)isUsingBuiltInReceiver;
- (unsigned long long)audioDeviceMode;
- (void)changeToMinimizeToast;
- (void)changeToAudioToast;
- (void)changeToVideoToast;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 withKeyboardHeight:(double)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 showAtMinimizeMode:(_Bool)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (void)showCannotStartVoipTwice;
- (id)getConflictWording;
- (void)showConflictWording;
- (void)recoverVoipAudioMode;
- (_Bool)isVoipSpeakerMode;
- (_Bool)isVoipCalling;
- (_Bool)isVideoVoipWorking;
- (_Bool)isVoipWorking;
- (_Bool)isViewEnding;
- (_Bool)showVideoEntranceInMainFrame;
- (_Bool)closeViewWith:(id)arg1;
- (void)openVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3 startInApp:(_Bool)arg4;
- (void)checkAndOpenVoipCallerViewByCallKit;
- (void)appDidFirstBecomeActive;
- (void)openVoipCallerViewByCallKitWithContact:(id)arg1;
- (void)openVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3;
- (_Bool)isMinCardMode;
- (_Bool)isTheSameContactWithCurrentVoip:(id)arg1;
- (void)initVoipCheckAudioDeviceObj;
- (void)openVideoVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3 isEarMode:(_Bool)arg4;
- (_Bool)canStartVoip;
- (_Bool)canOpenVoipByTimeLogic:(id)arg1;
- (void)clearData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

