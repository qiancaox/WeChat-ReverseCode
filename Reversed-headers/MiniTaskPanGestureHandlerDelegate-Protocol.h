//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MiniTaskPanGestureHandler;

@protocol MiniTaskPanGestureHandlerDelegate <NSObject>
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(MiniTaskPanGestureHandler *)arg1;

@optional
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(MiniTaskPanGestureHandler *)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionWillEndOfPanGesture:(MiniTaskPanGestureHandler *)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionChangedOfPanGesture:(MiniTaskPanGestureHandler *)arg1 progress:(double)arg2;
- (_Bool)shouldMiniInteractiveTransitionBeginOfPanGesture:(MiniTaskPanGestureHandler *)arg1;
@end

