//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QVisLayerPayload : NSObject
{
    _Bool _hidden;
    _Bool _isAnimated;
    _Bool _enable3D;
    int _minZoomLevel;
    int _maxZoomLevel;
    int _zIndex;
    NSString *_layerID;
    double _opacity;
    long long _displayLevel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) int minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;

@end

