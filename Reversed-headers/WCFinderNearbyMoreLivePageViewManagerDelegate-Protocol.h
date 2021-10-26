//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, WCFinderDataItem, WCFinderDiscoveryNearbyLiveCollectionViewCell, WCFinderLiveTabInfo, WCFinderNearbyMoreLivePageViewManager;

@protocol WCFinderNearbyMoreLivePageViewManagerDelegate <NSObject>

@optional
- (_Bool)finderMoreLivePageCanPrefetchBottom;
- (void)finderMoreLiveReportFollowFoldAction:(unsigned long long)arg1;
- (NSString *)finderMoreLivePageViewMangerChannelExtra:(WCFinderNearbyMoreLivePageViewManager *)arg1 tid:(NSString *)arg2 isFold:(_Bool)arg3;
- (void)finderMoreLiveAutoPlayChanged:(WCFinderDiscoveryNearbyLiveCollectionViewCell *)arg1;
- (void)finderMoreLivePageViewBeginDrag:(WCFinderNearbyMoreLivePageViewManager *)arg1;
- (void)finderMoreLivePageReady;
- (_Bool)finderMoreLivePageAlwaysDarkStyle;
- (UIColor *)finderMoreLiveFeedViewBgColor;
- (void)finderMoreLivePageViewMangerEnterLive:(WCFinderNearbyMoreLivePageViewManager *)arg1 dataItem:(WCFinderDataItem *)arg2 isFold:(_Bool)arg3;
- (void)finderMoreLivePageViewManger:(WCFinderNearbyMoreLivePageViewManager *)arg1 jumpToTabInfo:(WCFinderLiveTabInfo *)arg2;
- (void)firstPageRequestFinishedInFinderMoreLivePageViewManager:(WCFinderNearbyMoreLivePageViewManager *)arg1;
@end

