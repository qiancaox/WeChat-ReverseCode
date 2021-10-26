//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface MMLiveMorphDismissAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_videoView;
    struct CGSize _videoSize;
    struct CGRect _sourceFrame;
    struct CGRect _targetFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

