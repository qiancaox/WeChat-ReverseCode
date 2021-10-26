//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ScreenshotView, UIImageView;

@interface MMMagnifiterView : UIView
{
    UIImageView *_imageView;
    ScreenshotView *_screenshotView;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) ScreenshotView *screenshotView; // @synthesize screenshotView=_screenshotView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)setViewToMagnify:(id)arg1;
- (void)setTouchPoint:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

