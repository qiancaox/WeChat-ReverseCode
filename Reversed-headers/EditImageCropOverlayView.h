//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CALayer, CAShapeLayer;

@interface EditImageCropOverlayView : MMUIView
{
    CALayer *_blackLayer;
    CAShapeLayer *_shapeLayer;
    unsigned long long _overlayLevel;
    long long _cropOverlayViewStyle;
    struct CGRect _brightFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long _cropOverlayViewStyle; // @synthesize _cropOverlayViewStyle;
@property(nonatomic) unsigned long long _overlayLevel; // @synthesize _overlayLevel;
@property(nonatomic) struct CGRect _brightFrame; // @synthesize _brightFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

