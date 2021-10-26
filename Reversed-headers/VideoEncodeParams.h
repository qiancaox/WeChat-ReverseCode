//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, NSDictionary;

@interface VideoEncodeParams : NSObject
{
    _Bool _videoOnly;
    _Bool _isEnableHEVCEncode;
    _Bool _useSWEncoding;
    _Bool _useAssetDurationForCompose;
    _Bool _useHDRToSDR;
    _Bool _supportHDR;
    _Bool _originVideoIsHDR;
    float _width;
    float _height;
    float _fps;
    float _videoBitrate;
    float _frameInterval;
    float _audioBitrate;
    float _audioSampleRate;
    int _audioChannel;
    int _adaptiveBitrateUp;
    int _adaptiveBirateDown;
    int _resolutionAdjust;
    float _scaleFactor;
    int _selectedKbpsLevel;
    NSDictionary *_extraInfo;
    AVVideoCompositionCoreAnimationTool *_animationTool;
    NSDictionary *_colorProperties;
    NSDictionary *_originVideoColorProperties;
    NSDictionary *_colorRange;
    unsigned long long _scene;
    struct CGRect _cropFrame;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) int selectedKbpsLevel; // @synthesize selectedKbpsLevel=_selectedKbpsLevel;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool originVideoIsHDR; // @synthesize originVideoIsHDR=_originVideoIsHDR;
@property(nonatomic) _Bool supportHDR; // @synthesize supportHDR=_supportHDR;
@property(nonatomic) _Bool useHDRToSDR; // @synthesize useHDRToSDR=_useHDRToSDR;
@property(nonatomic) _Bool useAssetDurationForCompose; // @synthesize useAssetDurationForCompose=_useAssetDurationForCompose;
@property(copy, nonatomic) NSDictionary *colorRange; // @synthesize colorRange=_colorRange;
@property(copy, nonatomic) NSDictionary *originVideoColorProperties; // @synthesize originVideoColorProperties=_originVideoColorProperties;
@property(copy, nonatomic) NSDictionary *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(nonatomic) _Bool useSWEncoding; // @synthesize useSWEncoding=_useSWEncoding;
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool; // @synthesize animationTool=_animationTool;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) int resolutionAdjust; // @synthesize resolutionAdjust=_resolutionAdjust;
@property(nonatomic) int adaptiveBirateDown; // @synthesize adaptiveBirateDown=_adaptiveBirateDown;
@property(nonatomic) int adaptiveBitrateUp; // @synthesize adaptiveBitrateUp=_adaptiveBitrateUp;
@property(nonatomic) _Bool isEnableHEVCEncode; // @synthesize isEnableHEVCEncode=_isEnableHEVCEncode;
@property(nonatomic) _Bool videoOnly; // @synthesize videoOnly=_videoOnly;
@property(nonatomic) int audioChannel; // @synthesize audioChannel=_audioChannel;
@property(nonatomic) float audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) float audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) float frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) float videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) float fps; // @synthesize fps=_fps;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (_Bool)shouldExportWithHDR;
- (id)YCbCrMatrix;
- (id)transferFunction;
- (id)colorPrimaries;
- (id)colorPropertyDict;
- (id)description;
- (id)init;

@end

