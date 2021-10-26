//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicFlexEditBarSortHelper, UIView;

@protocol MMMusicFlexEditBarSortHelperDelegate <NSObject>
- (_Bool)editBarSortHelper:(MMMusicFlexEditBarSortHelper *)arg1 shouldHanldeGestureEndWithLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)editBarSortHelper:(MMMusicFlexEditBarSortHelper *)arg1 didChangeLongPressLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)onDidExitSortModeFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onDidEnterSortModeFromCellIndex:(unsigned long long)arg1;
- (void)onWillEnterSortModeWithLocationInSelf:(struct CGPoint)arg1 locationInSuper:(struct CGPoint)arg2 locateView:(UIView *)arg3;
- (_Bool)canEnterSortModeWithLocationInSelf:(struct CGPoint)arg1 locateView:(UIView *)arg2;
- (_Bool)canSortSubView:(UIView *)arg1;
@end

