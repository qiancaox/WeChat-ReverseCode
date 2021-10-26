//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveAliasInfo, FinderLiveAppMsgAlertInfo, FinderLiveAppMsgGameInvitationInfo, FinderLiveAppMsgGameLiveTeamUpInfo, FinderLiveAppMsgIssueCouponInfo, FinderLiveAppMsgLotteryDrawInfo, FinderLiveAppMsgToastInfo, FinderLiveAppMsgUpdateFinderObjectInfo, FinderLiveBattleInfo, FinderLiveBulletin, FinderLiveCheerInfo, FinderLiveContact, FinderLiveErrorPage, FinderLiveGameData, FinderLiveGiftInfo, FinderLiveNoticeInfo, FinderWindowProductInfo, FinderWxAppInfo, GameLiveJumpInfo, LiveSdkInfo, MMFinderJoinLiveContext, MMFinderLiveAnchorStatusItem, MMFinderLiveGetLiveMessageRespContext, MMFinderLiveRedPacketReceiveInfo, MMFinderLiveRedPacketSendInfo, MMFinderLiveRewardAppMsgInfo, MMFinderLiveTaskId, NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSString, WCFinderContact, WCFinderDataItem, WCFinderGetLiveOnlineMemberResult, WCFinderLiveInfo;

@protocol WCFinderLiveExt <NSObject>

@optional
- (void)onGetPollingFetchEventWithTaskId:(MMFinderLiveTaskId *)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3;
- (void)onResumeGameLive;
- (void)onPauseGameLive;
- (void)onJoinMiniGameLiveError:(NSError *)arg1;
- (void)onJoinGameTeamMeetRequirementWithTaskId:(MMFinderLiveTaskId *)arg1 joinGameTeamMode:(unsigned int)arg2 joinGameLaunchParam:(NSString *)arg3;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(MMFinderLiveTaskId *)arg1 appMsgGameTeamInfo:(FinderLiveAppMsgGameLiveTeamUpInfo *)arg2;
- (void)onGetFinderLiveRedPacketsWithTaskId:(MMFinderLiveTaskId *)arg1 redPacketInfos:(NSArray *)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(MMFinderLiveTaskId *)arg1 receiveRedPacketInfo:(MMFinderLiveRedPacketReceiveInfo *)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(MMFinderLiveTaskId *)arg1 sendRedPacketInfo:(MMFinderLiveRedPacketSendInfo *)arg2;
- (void)onGetFinderLiveDropGiftForAnchor:(MMFinderLiveTaskId *)arg1;
- (void)onGetFinderLiveDropGift:(MMFinderLiveTaskId *)arg1 giftInfo:(FinderLiveGiftInfo *)arg2;
- (void)onGetFinderLiveShowCheerClapModeHint:(unsigned int)arg1;
- (void)onGetFinderLiveCheerEnterClapModeWithLevel:(unsigned int)arg1;
- (void)onFinderLiveDidCreateNotice:(FinderLiveNoticeInfo *)arg1;
- (void)onLiveNoticeReserveStateChanged:(FinderLiveNoticeInfo *)arg1;
- (void)onGetFinderLiveBulletinBoardInfoWithTaskId:(MMFinderLiveTaskId *)arg1 liveBulletin:(FinderLiveBulletin *)arg2;
- (void)onFinderLiveUpdateFinderCheerIcon:(FinderLiveCheerInfo *)arg1;
- (void)onFinderLiveUpdateFinderObjectInfoWithTaskId:(MMFinderLiveTaskId *)arg1 finderObjectInfo:(FinderLiveAppMsgUpdateFinderObjectInfo *)arg2;
- (void)onFinderLiveGameInvitationWithTaskId:(MMFinderLiveTaskId *)arg1 invitationInfo:(FinderLiveAppMsgGameInvitationInfo *)arg2;
- (void)onFinderLiveIdentitySynced:(FinderLiveAliasInfo *)arg1 liveIdentity:(unsigned int)arg2;
- (void)onFinderLiveAnchorStatusUpdated:(MMFinderLiveAnchorStatusItem *)arg1;
- (void)onGetHighlightCheerUserWithFinderContacts:(NSMutableArray *)arg1;
- (void)onGetFinderLiveToastInfoWithTaskId:(MMFinderLiveTaskId *)arg1 toastInfo:(FinderLiveAppMsgToastInfo *)arg2;
- (void)onGetFinderLiveAlertInfoWithTaskId:(MMFinderLiveTaskId *)arg1 alertInfo:(FinderLiveAppMsgAlertInfo *)arg2;
- (void)onGetFinderLiveRewardAppMsgWithTaskId:(MMFinderLiveTaskId *)arg1 rewardAppMsgInfo:(MMFinderLiveRewardAppMsgInfo *)arg2;
- (void)onGetFinderLiveLotteryDrawInfoWithTaskId:(MMFinderLiveTaskId *)arg1 lotteryDrawInfo:(FinderLiveAppMsgLotteryDrawInfo *)arg2;
- (void)onGetFinderLiveLotteryInfoWithTaskId:(MMFinderLiveTaskId *)arg1 liveLotteryInfos:(NSArray *)arg2 lotteryDrawInfos:(NSArray *)arg3 fromJoinLive:(_Bool)arg4;
- (void)onGetFinderLiveNotifyApplyRandomMicInfoWithTaskId:(MMFinderLiveTaskId *)arg1 finderLiveContact:(FinderLiveContact *)arg2 randomMicBuffer:(NSData *)arg3;
- (void)onGetFinderLiveAnchorConnectMicBattleInfoWithTaskId:(MMFinderLiveTaskId *)arg1 battleInfo:(FinderLiveBattleInfo *)arg2;
- (void)onGetFinderLiveAnchorCloseMicBattleMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 battleSessionId:(NSString *)arg3;
- (void)onGetFinderLiveAnchorAcceptMicBattleMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 battleSessionId:(NSString *)arg3 battleDuration:(unsigned int)arg4;
- (void)onGetFinderLiveAnchorApplyMicBattleMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 battleSessionId:(NSString *)arg3 confirmTtl:(unsigned int)arg4 battleSeq:(unsigned long long)arg5;
- (void)onGetFinderLiveAnchorConnectMicStatusInfoWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 connectMicFinderContact:(WCFinderContact *)arg3 coverImageUrlString:(NSString *)arg4 status:(long long)arg5 sessionId:(NSString *)arg6 sequence:(unsigned long long)arg7 sdkUserId:(NSString *)arg8;
- (void)onGetFinderLiveAnchorCloseMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 sessionId:(NSString *)arg3;
- (void)onGetFinderLiveAnchorAcceptMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 coverImageUrlString:(NSString *)arg3 sdkUserId:(NSString *)arg4 sdkRoomId:(unsigned int)arg5 sdkPkSign:(NSString *)arg6 sessionId:(NSString *)arg7 sequence:(unsigned long long)arg8;
- (void)onGetFinderLiveAnchorApplyMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 coverImageUrlString:(NSString *)arg3 sdkUserId:(NSString *)arg4 sdkRoomId:(unsigned int)arg5 randomMicBuffer:(NSData *)arg6 sessionId:(NSString *)arg7;
- (void)onGetFinderLiveCloseMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 sessionId:(NSString *)arg3;
- (void)onGetFinderLiveAcceptMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 connectMicFinderContact:(FinderLiveContact *)arg2 liveSdkInfo:(LiveSdkInfo *)arg3 withVideo:(_Bool)arg4 expiredTime:(unsigned long long)arg5 sdkUserId:(NSString *)arg6 sessionId:(NSString *)arg7 sequence:(unsigned long long)arg8;
- (void)onGetFinderLiveApplyMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(FinderLiveContact *)arg2 withVideo:(_Bool)arg3 confirmTime:(unsigned int)arg4 sdkUserId:(NSString *)arg5 sessionId:(NSString *)arg6 micUserAttrFlag:(unsigned int)arg7;
- (void)finderLiveHoverSnsTimelineSwitchChanged:(_Bool)arg1;
- (void)onTopComment:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(NSString *)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onFinderLiveVerifyRealNameForComment;
- (void)onFinderLiveVerified:(NSError *)arg1 isNameVerified:(_Bool)arg2 withVerifyUrl:(NSString *)arg3 withEntryType:(long long)arg4;
- (void)onGetFinderContact:(NSError *)arg1 contact:(FinderLiveContact *)arg2;
- (void)onGetGameLiveJumpInfo:(GameLiveJumpInfo *)arg1;
- (void)onFinderLiveUpdateCommentSingleEnable;
- (void)onFinderLiveUpdateCommentEnable;
- (void)onFinderLiveDidResumeWithTaskId:(MMFinderLiveTaskId *)arg1 finderDataItem:(WCFinderDataItem *)arg2 error:(NSError *)arg3;
- (void)onFinderLiveDidPauseWithTaskId:(MMFinderLiveTaskId *)arg1 finderDataItem:(WCFinderDataItem *)arg2 error:(NSError *)arg3;
- (void)onGetFinderLiveSetAnchorStatusResult:(NSError *)arg1 anchorStatus:(MMFinderLiveAnchorStatusItem *)arg2 extraInfo:(id)arg3 liveId:(unsigned long long)arg4;
- (void)onGetFinderLiveBanComment:(NSError *)arg1 enableComment:(_Bool)arg2 forUserName:(NSString *)arg3;
- (void)onGetFinderLiveIssueCouponInfoWithTaskId:(MMFinderLiveTaskId *)arg1 issueCouponInfo:(FinderLiveAppMsgIssueCouponInfo *)arg2;
- (void)onGetFinderLivePromoteProductInfoWithTaskId:(MMFinderLiveTaskId *)arg1 productInfo:(FinderWindowProductInfo *)arg2;
- (void)onDeleteFinderShopShelfProduct:(NSError *)arg1 productIds:(NSArray *)arg2;
- (void)onSetTopFinderShopShelfProduct:(NSError *)arg1 productId:(unsigned long long)arg2;
- (void)onEndPromoteAdResult:(NSError *)arg1;
- (void)onSendPromoteAdResult:(NSError *)arg1;
- (void)onEndPromoteProductResult:(NSError *)arg1;
- (void)onSendPromoteProductResult:(NSError *)arg1;
- (void)onGetFinderShopShelfProduct:(NSError *)arg1 productList:(NSArray *)arg2 addProductAppInfo:(FinderWxAppInfo *)arg3;
- (void)onGetFinderShopWindowProduct:(NSError *)arg1 productsInfo:(NSDictionary *)arg2;
- (void)onFinderGetLiveOnlineMember:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 onlineMemberResult:(WCFinderGetLiveOnlineMemberResult *)arg3;
- (void)onFinderLiveCloseWithTid:(NSString *)arg1;
- (void)onPostFinderLiveLike:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 attendLottery:(_Bool)arg3;
- (void)onPostFinderLiveMessage:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 attendLottery:(_Bool)arg3;
- (void)onGetFinderLiveMessage:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 onlineContacts:(NSArray *)arg3 msgList:(NSArray *)arg4 finderLiveInfo:(WCFinderLiveInfo *)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 nextRequestInterval:(unsigned int)arg11 currentLikeCount:(unsigned long long)arg12 liveGameData:(FinderLiveGameData *)arg13 respContext:(MMFinderLiveGetLiveMessageRespContext *)arg14;
- (void)onGetFinderLiveError:(NSError *)arg1 finderLiveInfo:(WCFinderLiveInfo *)arg2;
- (void)onCancelFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2;
- (void)onCloseFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned int)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)onJoinFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2 joinLiveContext:(MMFinderJoinLiveContext *)arg3 errorPage:(FinderLiveErrorPage *)arg4;
- (void)onCreateFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2 errorPage:(FinderLiveErrorPage *)arg3;
@end

