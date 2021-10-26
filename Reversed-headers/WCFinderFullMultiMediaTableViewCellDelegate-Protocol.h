//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, NSString, NSURL, UIButton, WCFinderCommonBottomBannerView, WCFinderContact, WCFinderDataItem, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderFullMultiMediaTableViewCell, WCFinderJumpInfo, WCFinderPlayerReport;

@protocol WCFinderFullMultiMediaTableViewCellDelegate <NSObject>

@optional
- (void)onFeedClickAdBannerWithJumpInfo:(WCFinderJumpInfo *)arg1;
- (void)onFeedCellClickHotWord:(WCFinderFeedContentVM *)arg1;
- (void)onVideoWithMediaId:(NSString *)arg1 stopPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 startPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onClickAdGuideFollowBtn:(WCFinderFeedContentVM *)arg1;
- (void)onClickAdGuideMoreDetailBtn:(WCFinderFeedContentVM *)arg1;
- (void)liveNoticeTableViewCell:(WCFinderFullMultiMediaTableViewCell *)arg1 updateLiveNoticeInfo:(FinderLiveNoticeInfo *)arg2;
- (void)onClickEventEntry:(WCFinderFeedContentVM *)arg1;
- (void)finderFriendLikeTableViewCellClickLikeAction:(WCFinderFullMultiMediaTableViewCell *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 isNormalLiked:(_Bool)arg3;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onRefreshFriendUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickFriendLikeListDetail:(WCFinderFeedContentVM *)arg1;
- (void)onClickFeedPatMusicAction:(WCFinderFeedContentVM *)arg1 enableClick:(_Bool)arg2;
- (void)onClickContentUsernameAction:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshContentCellUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickContentMentionAction:(NSString *)arg1 nickname:(NSString *)arg2 dataItem:(WCFinderDataItem *)arg3;
- (void)onClickContentTopicAction:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)clickContentPOIAction:(WCFinderDataItem *)arg1;
- (void)onClickContentExtReadingAction:(NSURL *)arg1;
- (void)onContentTableViewMediaTableViewCell:(WCFinderFullMultiMediaTableViewCell *)arg1 longPressContentAction:(WCFinderFeedContentVM *)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(WCFinderFeedContentVM *)arg1 isExpand:(_Bool)arg2;
- (void)onClickToolbarFeedAllLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarShareAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)onClickToolbarCollectionAction:(WCFinderFeedContentVM *)arg1;
- (void)clickRecommentUrl:(NSURL *)arg1;
- (void)onClickToolbarLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)onClickRealNameAction;
- (void)onRefreshToolbarUpdateFavDataFinished:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshToolbarUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarCancelUploading:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarRetryUploading:(WCFinderFeedContentVM *)arg1;
- (void)onClickViewAllCommentAction:(WCFinderFeedContentVM *)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onLongPressMediaInCell:(WCFinderFeedContentVM *)arg1;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)multiMediaCellForceToProtrait:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (void)multiMediaCellInPicture:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (void)multiMediaCellShowPlayRate:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (void)onMultiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 lastestLiveInfoClickAction:(WCFinderFeedContentVM *)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onShowLongVideoBubble:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentWarnFlagChanged:(WCFinderFeedContentVM *)arg1;
- (_Bool)onMultiMediaCellIsInHotSpots:(WCFinderFeedContentVM *)arg1;
- (void)onLiveFeedDidTap:(WCFinderFeedContentVM *)arg1;
- (void)onVideoPlayWithReport:(WCFinderPlayerReport *)arg1 mediaWrap:(WCFinderFeedMediaWrap *)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(WCFinderFeedContentVM *)arg4;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(NSString *)arg1;
- (void)onHeaderFollowBtnClickAction:(WCFinderFeedContentVM *)arg1 followButton:(UIButton *)arg2;
- (void)onHeaderMoreClickAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)onFeedVideoStopPlay:(WCFinderFullMultiMediaTableViewCell *)arg1 tid:(NSString *)arg2;
- (void)showSpamTipsWithString:(NSString *)arg1;
- (void)onClickFollowLikeBtnWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshMediaUI:(NSString *)arg1 needAnimation:(_Bool)arg2;
- (void)onFeedCellDidClickLiveNowView:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onFeedCellDidClickNickname:(WCFinderContact *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onFeedCellDidClickHeaderView:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)didFeedDoubleLikeAction:(WCFinderFeedContentVM *)arg1 touchPoint:(struct CGPoint)arg2;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(WCFinderFeedContentVM *)arg2 finderPlayerReport:(WCFinderPlayerReport *)arg3;
- (void)photoContentPageTurning:(WCFinderFeedContentVM *)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)onCloseBottomBannerView:(WCFinderCommonBottomBannerView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onClickBottomBannerView:(WCFinderCommonBottomBannerView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 triggerByUser:(_Bool)arg3;
- (void)multiMediaCellVideoPauseVideoIfSupport:(_Bool)arg1;
- (void)multiMediaCellBrowsePhotoLongTime;
@end

