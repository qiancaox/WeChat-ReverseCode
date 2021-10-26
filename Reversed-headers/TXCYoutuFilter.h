//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCBeautifyFilter.h"

@class YTBeautyBlurFilter, YTBeautyBorderFilter, YTBeautySmoothFilter;

@interface TXCYoutuFilter : TXCBeautifyFilter
{
    double _smoothBlurAlpha;
    double _smoothSharpenStrength;
    YTBeautyBlurFilter *_smoothBlurFilter;
    YTBeautyBorderFilter *_borderFilter;
    YTBeautyBlurFilter *_borderBlurFilter;
    YTBeautySmoothFilter *_smoothFilter;
    struct CGSize _smoothSharpenSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTBeautySmoothFilter *smoothFilter; // @synthesize smoothFilter=_smoothFilter;
@property(retain, nonatomic) YTBeautyBlurFilter *borderBlurFilter; // @synthesize borderBlurFilter=_borderBlurFilter;
@property(retain, nonatomic) YTBeautyBorderFilter *borderFilter; // @synthesize borderFilter=_borderFilter;
@property(retain, nonatomic) YTBeautyBlurFilter *smoothBlurFilter; // @synthesize smoothBlurFilter=_smoothBlurFilter;
@property(nonatomic) double smoothSharpenStrength; // @synthesize smoothSharpenStrength=_smoothSharpenStrength;
@property(nonatomic) struct CGSize smoothSharpenSize; // @synthesize smoothSharpenSize=_smoothSharpenSize;
@property(nonatomic) double smoothBlurAlpha; // @synthesize smoothBlurAlpha=_smoothBlurAlpha;
- (void)updateBlurAndSharpenStrength:(_Bool)arg1;
- (void)updateFilterChain;
- (id)framebufferForOutput;
- (void)setRuddinessLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setBeautyLevel:(float)arg1;
- (id)initWithSharpnessEnhancement:(_Bool)arg1;
- (id)init;

@end

