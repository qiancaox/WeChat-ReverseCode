//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAutoLayoutSheetView.h"

@class DiscoverEntranceSettingConfig;
@protocol DiscoverEntranceSettingSheetViewDelegate;

@interface DiscoverEntranceSettingSheetView : MMAutoLayoutSheetView
{
    id <DiscoverEntranceSettingSheetViewDelegate> _delegate;
    DiscoverEntranceSettingConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverEntranceSettingConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <DiscoverEntranceSettingSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideSubSwitchViewsWhenEntranceValueChanged:(_Bool)arg1;
- (id)genEntrySwitchViewWithTitle:(id)arg1 uiSwitch:(id)arg2;
- (id)genSwitchViewWithInfo:(id)arg1;
- (void)appendSwitchListViewWithInfos:(id)arg1;
- (void)appendIconView;
- (void)customArrangeViews;
- (void)pageSheetWillDisappear;
- (void)onSwitchChanged:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

