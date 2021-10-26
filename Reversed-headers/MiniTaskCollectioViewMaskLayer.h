//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, MiniTaskCollectioViewMaskLayerConfig;

@interface MiniTaskCollectioViewMaskLayer : CALayer
{
    CAShapeLayer *_subLeftMask;
    CAShapeLayer *_subRightMask;
    CAShapeLayer *_subMaskForOneCell;
    CALayer *_guardLayer;
    CALayer *_bigGuardLayer;
    MiniTaskCollectioViewMaskLayerConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskCollectioViewMaskLayerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) CALayer *bigGuardLayer; // @synthesize bigGuardLayer=_bigGuardLayer;
@property(retain, nonatomic) CALayer *guardLayer; // @synthesize guardLayer=_guardLayer;
@property(retain, nonatomic) CAShapeLayer *subMaskForOneCell; // @synthesize subMaskForOneCell=_subMaskForOneCell;
@property(retain, nonatomic) CAShapeLayer *subRightMask; // @synthesize subRightMask=_subRightMask;
@property(retain, nonatomic) CAShapeLayer *subLeftMask; // @synthesize subLeftMask=_subLeftMask;
- (struct CGRect)transCellRectToMaskRect:(struct CGRect)arg1;
- (void)setupSublayers;
- (void)hideMaskLayer;
- (void)updateSubMaskLayersWithCellCount:(unsigned long long)arg1;
- (id)initWithConfig:(id)arg1;

@end

