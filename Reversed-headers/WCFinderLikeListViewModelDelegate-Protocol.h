//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM;

@protocol WCFinderLikeListViewModelDelegate <NSObject>

@optional
- (void)finderLikeListStartTopLoadingData;
- (void)finderLikeListDeleteDataItemVM:(WCFinderFeedContentVM *)arg1 index:(long long)arg2;
- (void)finderLikeListFetchFailWithErrorCode:(int)arg1;
- (void)finderLikeListEmpty;
- (void)finderLikeListDisinclineContentVM:(WCFinderFeedContentVM *)arg1 index:(long long)arg2;
- (void)finderLikeListNoMoreData;
- (void)finderLikeListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)finderLikeListLoadMoreFinished;
@end

