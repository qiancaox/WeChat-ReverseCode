//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveLogicDelegate-Protocol.h"

@class FinderLiveAppMsgAlertInfo, FinderLiveAppMsgToastInfo, FinderLiveBadgeInfo, FinderLiveErrorPage, MMLivePollingFetchRequestBufferModel, NSError, WCFinderContact;

@protocol MMFinderLiveLogicDelegate <MMLiveLogicDelegate>

@optional
- (MMLivePollingFetchRequestBufferModel *)pollingFetchRequestBufferByCmdId:(long long)arg1;
- (void)onLoadingStop;
- (void)onLiveHalfScreenViewEnd:(_Bool)arg1 fromScene:(long long)arg2;
- (void)onSwitchUserRoleBeforeOpeningRedPacket;
- (void)onSwitchUserRoleBeforeConnectingMic;
- (void)onConnectedMicUserListUpdated;
- (void)onShowConnectedMicUserProfileWithContact:(WCFinderContact *)arg1 liveBadgeInfo:(FinderLiveBadgeInfo *)arg2 isOtherAnchor:(_Bool)arg3 isTapBackground:(_Bool)arg4 highlightRect:(struct CGRect)arg5;
- (void)onShowLiveHalfScreenViewFromScene:(long long)arg1;
- (void)onShowToastFromAppMsg:(FinderLiveAppMsgToastInfo *)arg1;
- (void)onShowAlertFromAppMsg:(FinderLiveAppMsgAlertInfo *)arg1;
- (void)onOperationPermissionChanged;
- (void)onShowForbidLiveViewWithError:(NSError *)arg1;
- (void)onShowErrorPage:(FinderLiveErrorPage *)arg1;
- (void)onFinderDataItemUpdated;
- (void)onKickedOut;
@end

