//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderTopicInfo;

@protocol WCFinderEventPageViewModelDelegate <NSObject>

@optional
- (void)finderEventFeedOrderChanged;
- (void)finderEventInvalidWithErrorCode:(int)arg1;
- (void)finderEventNoMoreData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventReloadAllData;
- (void)finderEventReloadHeaderViewWithTopicInfo:(WCFinderTopicInfo *)arg1;
@end

