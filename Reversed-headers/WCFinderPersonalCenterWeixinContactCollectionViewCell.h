//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class WCTableViewManager;
@protocol WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate;

@interface WCFinderPersonalCenterWeixinContactCollectionViewCell : UICollectionViewCell
{
    id <WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate> _delegate;
    WCTableViewManager *_tableViewManager;
    unsigned long long _unReadCount;
    unsigned long long _favCount;
    unsigned long long _likeCount;
}

+ (id)feedCountStrWithCount:(unsigned long long)arg1;
+ (_Bool)isInLimitState;
+ (double)cellHeight;
+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long favCount; // @synthesize favCount=_favCount;
@property(nonatomic) unsigned long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak id <WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickBlockManager;
- (void)onClickOrderCenter;
- (void)onClickPrivateMsgList;
- (void)onClickNotificationList;
- (void)onClickFavList;
- (void)onClickLikeList;
- (void)onClickFollowList;
- (void)reloadTableView;
- (void)setup;
- (void)updateUnreadNotificationCount:(unsigned long long)arg1;
- (void)updateLikeCount:(unsigned long long)arg1 favCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

