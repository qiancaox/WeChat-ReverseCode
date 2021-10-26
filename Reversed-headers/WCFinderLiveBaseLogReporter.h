//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCFinderLiveBaseLogReporterExt-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"

@class MMFinderLiveTaskId, NSString;

@interface WCFinderLiveBaseLogReporter : NSObject <WCFinderFeedContentVMExt, MMLiveTaskMgrExt, IWCFinderLiveBaseLogReporterExt>
{
    _Bool _isPrivateAccount;
    _Bool _liveStatus;
    _Bool _isFloat;
    _Bool _isShowWaApp;
    unsigned int _shopPermit;
    unsigned int _shareTimelineCount;
    unsigned int _shareSingleChatCount;
    unsigned int _shareGroupChatCount;
    unsigned int _minizaionCount;
    long long _roleType;
    unsigned long long _liveStartTime;
    MMFinderLiveTaskId *_liveTaskId;
    unsigned long long _liveId;
    NSString *_finderFeedId;
    NSString *_finderUserName;
    NSString *_liveTopic;
    NSString *_sessionBuffer;
    unsigned long long _profileViewShowTime;
    NSString *_commentScene;
    NSString *_scenenote;
    long long _enterIconType;
    unsigned long long _enterRoomTime;
    NSString *_tagName;
    NSString *_subTagName;
    unsigned long long _visiableMode;
    unsigned long long _visiableCount;
    unsigned long long _lastFullTS;
    unsigned long long _lastFloatTS;
    unsigned long long _totalFullTime;
    unsigned long long _totalFloatTime;
    NSString *_channelExtra;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *channelExtra; // @synthesize channelExtra=_channelExtra;
@property(nonatomic) unsigned int minizaionCount; // @synthesize minizaionCount=_minizaionCount;
@property(nonatomic) _Bool isShowWaApp; // @synthesize isShowWaApp=_isShowWaApp;
@property(nonatomic) _Bool isFloat; // @synthesize isFloat=_isFloat;
@property(nonatomic) unsigned long long totalFloatTime; // @synthesize totalFloatTime=_totalFloatTime;
@property(nonatomic) unsigned long long totalFullTime; // @synthesize totalFullTime=_totalFullTime;
@property(nonatomic) unsigned long long lastFloatTS; // @synthesize lastFloatTS=_lastFloatTS;
@property(nonatomic) unsigned long long lastFullTS; // @synthesize lastFullTS=_lastFullTS;
@property(nonatomic) unsigned int shareGroupChatCount; // @synthesize shareGroupChatCount=_shareGroupChatCount;
@property(nonatomic) unsigned int shareSingleChatCount; // @synthesize shareSingleChatCount=_shareSingleChatCount;
@property(nonatomic) unsigned int shareTimelineCount; // @synthesize shareTimelineCount=_shareTimelineCount;
@property(nonatomic) unsigned long long visiableCount; // @synthesize visiableCount=_visiableCount;
@property(nonatomic) unsigned long long visiableMode; // @synthesize visiableMode=_visiableMode;
@property(retain, nonatomic) NSString *subTagName; // @synthesize subTagName=_subTagName;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) unsigned int shopPermit; // @synthesize shopPermit=_shopPermit;
@property(nonatomic) unsigned long long enterRoomTime; // @synthesize enterRoomTime=_enterRoomTime;
@property(nonatomic) long long enterIconType; // @synthesize enterIconType=_enterIconType;
@property(retain, nonatomic) NSString *scenenote; // @synthesize scenenote=_scenenote;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long profileViewShowTime; // @synthesize profileViewShowTime=_profileViewShowTime;
@property(nonatomic) _Bool liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(retain, nonatomic) NSString *liveTopic; // @synthesize liveTopic=_liveTopic;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *finderFeedId; // @synthesize finderFeedId=_finderFeedId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned long long liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
- (id)replaceCommaToSemicolon:(id)arg1;
- (void)onShareTextState;
- (void)onVerifyAction:(unsigned long long)arg1;
- (void)onFloatOperation:(unsigned long long)arg1;
- (void)onCancleShareSession:(id)arg1;
- (void)onCancleShareTimeline;
- (void)onShareSession:(id)arg1;
- (void)onShareTimeline;
- (void)reportQuitFloat:(id)arg1;
- (void)reportEnterFloat:(id)arg1;
- (void)reportVerifyAction:(unsigned long long)arg1;
- (void)notifyVerifyAction:(unsigned long long)arg1;
- (void)onWAWebViewControllerDisappear:(id)arg1;
- (void)onWAWebViewControllerAppear:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)reportShareTextState;
- (void)onForwardMessageCancelWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onCancelForwardForForwardViewWithContentVM:(id)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1;
- (void)enterLive:(id)arg1;
- (void)unRegisterBaseExtension;
- (void)registerBaseExtension;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

