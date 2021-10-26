//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MiniTaskEdgeGestureHandlerInterface-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol MiniTaskEdgeGestureHandlerDelegate;

@interface MiniTaskEdgeGestureHandler : NSObject <UIGestureRecognizerDelegate, MiniTaskEdgeGestureHandlerInterface>
{
    _Bool _shouldAutoComplete;
    _Bool _shouldEnableTapic;
    _Bool _shouldSpeedEnterWhenSwapFast;
    _Bool _hasTapic;
    unsigned int _edgeGestureType;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    id <MiniTaskEdgeGestureHandlerDelegate> _delegate;
    UIViewController *_toVC;
    double _resistanceParam;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTapic; // @synthesize hasTapic=_hasTapic;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) unsigned int edgeGestureType; // @synthesize edgeGestureType=_edgeGestureType;
@property(nonatomic) _Bool shouldSpeedEnterWhenSwapFast; // @synthesize shouldSpeedEnterWhenSwapFast=_shouldSpeedEnterWhenSwapFast;
@property(nonatomic) _Bool shouldEnableTapic; // @synthesize shouldEnableTapic=_shouldEnableTapic;
@property(nonatomic) double resistanceParam; // @synthesize resistanceParam=_resistanceParam;
@property(nonatomic) _Bool shouldAutoComplete; // @synthesize shouldAutoComplete=_shouldAutoComplete;
@property(nonatomic) __weak UIViewController *toVC; // @synthesize toVC=_toVC;
@property(nonatomic) __weak id <MiniTaskEdgeGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
- (_Bool)isSweepFastInVelocity:(struct CGPoint)arg1;
- (double)progressFromCurGesturer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handlerScreenEdgeGesture:(id)arg1;
- (id)screenEdgeGesture;
- (_Bool)isInteracting;
- (void)initEdgeGestureWithEdgeGestureType:(unsigned int)arg1;
- (id)initWithEdgeGestureType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

