//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface WCPayRedEnvReportMgr : MMUserService <MMServiceProtocol>
{
    unsigned int _previewStartTime;
    unsigned int _redEnvStoryStartTime;
    unsigned int _redEnvStoryEnterType;
    unsigned int _redEnvStoryExitType;
    unsigned int _redEnvStoryScrollCount;
    unsigned int _redEnvStoryImageScrollCount;
    unsigned int _redEnvStoryVideoPlayTotalCount;
    unsigned int _redEnvStoryMPBtnClickCount;
    NSString *_previewSessionId;
    NSString *_redSkinEntrySessionId;
    NSMutableSet *_redSkinReportOnceOnlyKeySet;
    NSMutableDictionary *_redEnvBubbleSessionKeyDict;
    NSMutableSet *_redEnvBubbleReportOnceOnlyKeySet;
    NSString *_redEnvStorySessionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int redEnvStoryMPBtnClickCount; // @synthesize redEnvStoryMPBtnClickCount=_redEnvStoryMPBtnClickCount;
@property(nonatomic) unsigned int redEnvStoryVideoPlayTotalCount; // @synthesize redEnvStoryVideoPlayTotalCount=_redEnvStoryVideoPlayTotalCount;
@property(nonatomic) unsigned int redEnvStoryImageScrollCount; // @synthesize redEnvStoryImageScrollCount=_redEnvStoryImageScrollCount;
@property(nonatomic) unsigned int redEnvStoryScrollCount; // @synthesize redEnvStoryScrollCount=_redEnvStoryScrollCount;
@property(nonatomic) unsigned int redEnvStoryExitType; // @synthesize redEnvStoryExitType=_redEnvStoryExitType;
@property(nonatomic) unsigned int redEnvStoryEnterType; // @synthesize redEnvStoryEnterType=_redEnvStoryEnterType;
@property(nonatomic) unsigned int redEnvStoryStartTime; // @synthesize redEnvStoryStartTime=_redEnvStoryStartTime;
@property(retain, nonatomic) NSString *redEnvStorySessionId; // @synthesize redEnvStorySessionId=_redEnvStorySessionId;
@property(retain, nonatomic) NSMutableSet *redEnvBubbleReportOnceOnlyKeySet; // @synthesize redEnvBubbleReportOnceOnlyKeySet=_redEnvBubbleReportOnceOnlyKeySet;
@property(retain, nonatomic) NSMutableDictionary *redEnvBubbleSessionKeyDict; // @synthesize redEnvBubbleSessionKeyDict=_redEnvBubbleSessionKeyDict;
@property(retain, nonatomic) NSMutableSet *redSkinReportOnceOnlyKeySet; // @synthesize redSkinReportOnceOnlyKeySet=_redSkinReportOnceOnlyKeySet;
@property(retain, nonatomic) NSString *redSkinEntrySessionId; // @synthesize redSkinEntrySessionId=_redSkinEntrySessionId;
@property(nonatomic) unsigned int previewStartTime; // @synthesize previewStartTime=_previewStartTime;
@property(retain, nonatomic) NSString *previewSessionId; // @synthesize previewSessionId=_previewSessionId;
- (void)genRedEnvSelectRedSkinDidCancel:(id)arg1 afterId:(id)arg2;
- (void)genRedEnvSelectRedSkinDidConfirm:(id)arg1 afterId:(id)arg2;
- (void)genRedEnvSelectRedSkinDidScroll;
- (void)genRedEnvStoryViewVideo:(id)arg1 videoUrl:(id)arg2 replayCount:(unsigned int)arg3 playTime:(unsigned int)arg4 sessionId:(id)arg5 autoPlayFlag:(unsigned int)arg6 c2cOpenID:(id)arg7;
- (void)genRedEnvStoryViewPic:(id)arg1 picUrl:(id)arg2 sessionId:(id)arg3 c2cOpenID:(id)arg4;
- (void)reportRedEnvStoryExitWithControlData:(id)arg1;
- (void)addRedEnvStoryMPBtnClickCount;
- (void)addRedEnvStoryViewVideoTotalCount;
- (void)addRedEnvStoryScrollImageCount;
- (void)addRedEnvStoryScrollCount;
- (unsigned int)getRedEnvStoryExitType;
- (void)genRedEnvStorySessionIdAndStartTime;
- (void)reportRedEnvExposeSeriesWithControlData:(id)arg1 exposeType:(unsigned int)arg2 hasLogo:(unsigned int)arg3 reportOnce:(_Bool)arg4;
- (void)addRedEnvBubbleExposeKeyHasReport:(unsigned int)arg1 c2cUrl:(id)arg2;
- (_Bool)isRedEnvBubbleExposeKeyhadReport:(unsigned int)arg1 c2cUrl:(id)arg2;
- (void)clearRedEnvBubbleReportOnceOnlyKeySet;
- (id)getRedEnvBubbleExposeSessionIdWithC2CUrl:(id)arg1;
- (id)genRedEnvBubbleExposeSessionIdWithC2CUrl:(id)arg1;
- (void)reportRedSkinEntryWithActionType:(unsigned int)arg1 hasRedDot:(unsigned int)arg2 reportOnce:(_Bool)arg3;
- (id)getRedSkinEntrySessinoId;
- (void)genRedSkinEntrySessionId;
- (void)reportRedEnvPreViewWithActionType:(unsigned int)arg1 authorID:(id)arg2;
- (void)genPreViewSessionIdAndStartTime;
- (id)genReportSessionIdWithPreFixString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

