//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIViewController, UIImageView, UIView, WAPopOverTaskBarView, WAPopOverTaskBarlogic;

@interface WAPopOverView : MMUIView
{
    _Bool _isDismissForbidAnimation;
    MMUIViewController *_containerVC;
    UIView *_interateView;
    UIImageView *_arrowImageView;
    UIView *_containerView;
    WAPopOverTaskBarView *_taskBarView;
    WAPopOverTaskBarlogic *_logic;
    UIView *_parentView;
    struct CGSize _preferedContentSize;
}

+ (double)getPopOverWidth;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) WAPopOverTaskBarlogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) WAPopOverTaskBarView *taskBarView; // @synthesize taskBarView=_taskBarView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) struct CGSize preferedContentSize; // @synthesize preferedContentSize=_preferedContentSize;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) _Bool isDismissForbidAnimation; // @synthesize isDismissForbidAnimation=_isDismissForbidAnimation;
- (void)didRotate:(id)arg1;
- (void)initInterateView;
- (void)initArrowImageView;
- (void)initContainerView;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithWAPopOverTaskLogic:(id)arg1;

@end

