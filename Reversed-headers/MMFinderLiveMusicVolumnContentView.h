//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMLiveMusicStyleSlider, MMUILabel;

@interface MMFinderLiveMusicVolumnContentView : UIView
{
    int _previousVolumeValue;
    MMLiveMusicStyleSlider *_sliderBar;
    MMUILabel *_progressTipLabel;
    CDUnknownBlockType _volumnAdjustCallback;
}

+ (int)getAdaptedProgressValue:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) int previousVolumeValue; // @synthesize previousVolumeValue=_previousVolumeValue;
@property(copy, nonatomic) CDUnknownBlockType volumnAdjustCallback; // @synthesize volumnAdjustCallback=_volumnAdjustCallback;
@property(retain, nonatomic) MMUILabel *progressTipLabel; // @synthesize progressTipLabel=_progressTipLabel;
@property(retain, nonatomic) MMLiveMusicStyleSlider *sliderBar; // @synthesize sliderBar=_sliderBar;
- (void)setVolumn:(int)arg1;
- (int)currentVolumn;
- (void)recoverPreviousVolumn;
- (void)reduceVolumnToLowVoice;
- (void)updateProgressTip:(int)arg1;
- (void)onMusicStyleSliderValueChanged:(id)arg1;
- (void)layoutProgressTipLabel;
- (void)layoutSliderBar;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

