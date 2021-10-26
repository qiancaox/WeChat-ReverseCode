//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAnnotationView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMHeadImageView, NSString, UIButton, UIImageView;
@protocol MMHeadImageAnnotationViewDelegate;

@interface MMHeadImageAnnotationView : QAnnotationView <UIGestureRecognizerDelegate>
{
    id <MMHeadImageAnnotationViewDelegate> _delegate;
    UIImageView *_annotationView;
    MMHeadImageView *_headImageView;
    UIButton *_calloutButton;
    UIImageView *_headingImageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMHeadImageAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHeading:(double)arg1;
- (void)bringToFront;
- (void)stopAnnimation:(_Bool)arg1;
- (void)setShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *username;
- (void)initView;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

