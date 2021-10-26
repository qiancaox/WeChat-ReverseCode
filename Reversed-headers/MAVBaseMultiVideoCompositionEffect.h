//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAVVideoCompositionMixer-Protocol.h"

@class CIContext, EAGLContext, MAVPixelHelper, NSArray, NSString;

@interface MAVBaseMultiVideoCompositionEffect : NSObject <TAVVideoCompositionMixer>
{
    struct __CVOpenGLESTextureCache *_textureCache;
    CDUnknownBlockType _renderCallback;
    EAGLContext *_renderContext;
    CIContext *_ciContext;
    NSArray *_lastTrackList;
    long long _lastRenderPts;
    MAVPixelHelper *_pixelHelper;
    struct CGSize _assetSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVPixelHelper *pixelHelper; // @synthesize pixelHelper=_pixelHelper;
@property(nonatomic) long long lastRenderPts; // @synthesize lastRenderPts=_lastRenderPts;
@property(retain, nonatomic) NSArray *lastTrackList; // @synthesize lastTrackList=_lastTrackList;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) EAGLContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property(copy, nonatomic) CDUnknownBlockType renderCallback; // @synthesize renderCallback=_renderCallback;
@property(nonatomic) struct __CVOpenGLESTextureCache *textureCache; // @synthesize textureCache=_textureCache;
- (id)createInputTrackListFromPixelBuffer:(id)arg1 pts:(long long)arg2;
- (void)renderTracks:(long long)arg1 trackList:(id)arg2 renderInfo:(id)arg3 toPixelBuffer:(struct __CVBuffer *)arg4;
- (void)applyEffectToPixelBufferCollection:(id)arg1 renderInfo:(id)arg2 toDestPixelBuffer:(struct __CVBuffer *)arg3;
- (_Bool)enableRenderPixelBufDirected;
- (id)applyEffectToImageCollection:(id)arg1 renderInfo:(id)arg2;
- (void)ensureCurrentGLContext;
- (void)destroyTextureCache;
- (void)destroyCacheFrame;
- (void)createTextureCache;
- (void)destroyGLContextIfExist;
- (void)createGLContextIfNeed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

