//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class AVMutableVideoComposition, CALayer, NSString, UIImage;

@interface VideoCompositionAttr : MMObject
{
    _Bool _hasOriginSound;
    _Bool _isPhotoCompositionVideo;
    _Bool _isBlurHorizontalVideo;
    _Bool _useAssetDurationForCompose;
    UIImage *overlayImage;
    CALayer *_overlayLayer;
    unsigned long long _entranceType;
    NSString *_videoBGMPath;
    AVMutableVideoComposition *_videoComposition;
    struct CGRect _cropFrame;
    CDStruct_e83c9415 cropTimeRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useAssetDurationForCompose; // @synthesize useAssetDurationForCompose=_useAssetDurationForCompose;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) _Bool isBlurHorizontalVideo; // @synthesize isBlurHorizontalVideo=_isBlurHorizontalVideo;
@property(nonatomic) _Bool isPhotoCompositionVideo; // @synthesize isPhotoCompositionVideo=_isPhotoCompositionVideo;
@property(nonatomic) _Bool hasOriginSound; // @synthesize hasOriginSound=_hasOriginSound;
@property(copy, nonatomic) NSString *videoBGMPath; // @synthesize videoBGMPath=_videoBGMPath;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) CDStruct_e83c9415 cropTimeRange; // @synthesize cropTimeRange;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage;
- (id)description;

@end

