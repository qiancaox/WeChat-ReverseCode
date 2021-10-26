//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITableView;
@protocol WCFinderCustomPagingDelegate;

@interface WCFinderCustomPaging : NSObject
{
    _Bool _magicAdjustDecelerating;
    id <WCFinderCustomPagingDelegate> _delegate;
    UITableView *_tableView;
    struct CGPoint _targetContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool magicAdjustDecelerating; // @synthesize magicAdjustDecelerating=_magicAdjustDecelerating;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderCustomPagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableViewBeginDeceleratingWithSpeed:(double)arg1;
- (void)tableViewBeginDecelerating;
@property(readonly, nonatomic) _Bool isAnimating;
- (_Bool)_isSplitCellAtIdx:(long long)arg1;
- (struct CGRect)targetFrameForSlideStop;
- (struct CGRect)targetFrameForSlideDown;
- (struct CGRect)targetFrameForSlideUp;
- (void)tableViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (id)initWithTableView:(id)arg1;

@end

