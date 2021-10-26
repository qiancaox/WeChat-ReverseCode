//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAAllTouchRecognizerDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol WATouchBaseViewDelegate;

@interface WATouchBaseView : UIView <WAAllTouchRecognizerDelegate>
{
    id <WATouchBaseViewDelegate> _touchDelegate;
    NSMutableSet *_curTouchSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *curTouchSet; // @synthesize curTouchSet=_curTouchSet;
@property(nonatomic) __weak id <WATouchBaseViewDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

