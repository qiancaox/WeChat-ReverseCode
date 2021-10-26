//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, NSString;
@protocol MinimizeTransitionInterface, UIViewControllerAnimatedTransitioning;

@protocol MinimizationTransitionControllerDelegate <NSObject>
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;

@optional
- (id <UIViewControllerAnimatedTransitioning>)customMinimizeTransitionForTaskData:(MinimizeTaskData *)arg1 transitionContext:(id <MinimizeTransitionInterface>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)customMaximizeTransitionForTaskData:(MinimizeTaskData *)arg1 transitionContext:(id <MinimizeTransitionInterface>)arg2;
- (void)minimizationInteractivePopGestureRecognizerDidEndWithCompletion:(_Bool)arg1;
- (_Bool)shouldBlockMinimizationEntryInInteractivePop;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (NSString *)currentMinimizationTaskBizKey;
- (NSString *)currentMinimizationTaskBizName;
@end

