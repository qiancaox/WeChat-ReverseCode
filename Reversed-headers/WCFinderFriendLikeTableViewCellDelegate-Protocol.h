//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WCFinderFeedContentVM, WCFinderFriendLikeTableViewCell;

@protocol WCFinderFriendLikeTableViewCellDelegate <NSObject>

@optional
- (void)finderFriendLikeTableViewCellClickLikeAction:(WCFinderFriendLikeTableViewCell *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 isNormalLiked:(_Bool)arg3;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onRefreshFriendUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickFollowLikeBtn:(WCFinderFeedContentVM *)arg1;
- (void)onClickFriendLikeListDetail:(WCFinderFeedContentVM *)arg1;
@end

