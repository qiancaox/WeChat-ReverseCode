//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "NativeRenderDelegate-Protocol.h"
#import "WASkiaCanvasTextureDelegate-Protocol.h"
#import "WASkiaViewDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, WAJSContextPlugin_NativeRender;

@interface WAWebViewPlugin_SkiaCanvas : WAWebViewPlugin_embedView <WASkiaViewDelegate, WASkiaCanvasTextureDelegate, NativeRenderDelegate>
{
    NSNumber *_oldScrollEnabled;
    WAJSContextPlugin_NativeRender *_nativeRender;
    NSMutableArray *_canvasViews;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *canvasViews; // @synthesize canvasViews=_canvasViews;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchDown:(id)arg1;
- (struct __CVBuffer *)copyPixelBufferByViewId:(unsigned int)arg1;
- (void)setInteractionEnable:(_Bool)arg1 mode:(long long)arg2 canvasId:(unsigned int)arg3;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)render;
- (_Bool)removeChildView:(unsigned int)arg1;
- (unsigned int)insertCanvas:(struct CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

