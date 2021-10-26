//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class MMLiveView, NSString;

@interface MMLiveViewLoadingAnimationDelegate : NSObject <CAAnimationDelegate>
{
    long long _startTime;
    MMLiveView *_liveView;
    CDUnknownBlockType _overTimeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType overTimeBlock; // @synthesize overTimeBlock=_overTimeBlock;
@property(nonatomic) __weak MMLiveView *liveView; // @synthesize liveView=_liveView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

