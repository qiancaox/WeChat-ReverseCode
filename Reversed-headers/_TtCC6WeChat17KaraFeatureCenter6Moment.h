//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtCC6WeChat17KaraFeatureCenter9Component.h"

@interface _TtCC6WeChat17KaraFeatureCenter6Moment : _TtCC6WeChat17KaraFeatureCenter9Component
{
    // Error parsing type: , name: _abtest
    // Error parsing type: , name: device
    // Error parsing type: , name: contact
    // Error parsing type: , name: _tableOfHistoricalImages
    // Error parsing type: , name: _tableOfHistoricalVideos
    // Error parsing type: , name: _tableOfHistoricalWebViews
}

- (void)onBeginDownload:(id)arg1 downloadType:(long long)arg2;
- (void)momentWillBeDownloaded:(id)arg1 atDate:(id)arg2;
- (void)userDidSeeMoments:(id)arg1 atDate:(id)arg2;
- (void)userDidBeInterestedInMomentMedia:(id)arg1 atDate:(id)arg2;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;

@end

