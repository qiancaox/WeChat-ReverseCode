//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMOrderCenterTableViewCellComponent-Protocol.h"

@class MMOrderCenterTableViewCellSkuListExpander, NSMutableArray, NSString;
@protocol MMOrderCenterTableViewCellSkuListViewDelegate;

@interface MMOrderCenterTableViewCellSkuListView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellSkuListViewDelegate> _delegate;
    MMOrderCenterTableViewCellSkuListExpander *_expander;
    NSMutableArray *_accessibilityElementsArray;
}

+ (double)heightForOrder:(id)arg1 estimate:(_Bool)arg2;
+ (_Bool)shouldUseComponentForOrder:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *accessibilityElementsArray; // @synthesize accessibilityElementsArray=_accessibilityElementsArray;
@property(retain, nonatomic) MMOrderCenterTableViewCellSkuListExpander *expander; // @synthesize expander=_expander;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellSkuListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)onExpanderTapped;
- (double)layoutAndReportHeightForSkuItems:(id)arg1;
- (void)updateWithOrder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

