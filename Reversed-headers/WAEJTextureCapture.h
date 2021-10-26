//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, EJStatusHolder, EJTextureHolder, EJTextureProgram, NSMutableDictionary, WAEJCanvasContext, WAEJJavaScriptView;

@interface WAEJTextureCapture : NSObject
{
    WAEJJavaScriptView *_scriptView;
    WAEJCanvasContext *_canvas;
    EJStatusHolder *_status;
    _Bool _available;
    _Bool _storage;
    int _viewWidth;
    int _viewHeight;
    int _buffWidth;
    int _buffHeight;
    unsigned int _presentCount;
    unsigned int _flipCount;
    unsigned int _captureCount;
    _Bool hook;
    _Bool needSwitch;
    _Bool ready;
    _Bool offScreen;
    _Bool _hooked;
    _Bool _switchNeed;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
    NSMutableDictionary *_delegates;
    EJTextureHolder *_renderTexture;
    EJTextureHolder *_flipTexture;
    EAGLContext *_context;
    EJTextureProgram *_program1;
    EJTextureProgram *_program2;
}

@property(retain, nonatomic) EJTextureProgram *program2; // @synthesize program2=_program2;
@property(retain, nonatomic) EJTextureProgram *program1; // @synthesize program1=_program1;
@property(nonatomic) unsigned int renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) EJTextureHolder *flipTexture; // @synthesize flipTexture=_flipTexture;
@property(retain, nonatomic) EJTextureHolder *renderTexture; // @synthesize renderTexture=_renderTexture;
@property(retain, nonatomic) NSMutableDictionary *delegates; // @synthesize delegates=_delegates;
@property _Bool switchNeed; // @synthesize switchNeed=_switchNeed;
@property _Bool hooked; // @synthesize hooked=_hooked;
@property(readonly, nonatomic) int buffHeight; // @synthesize buffHeight=_buffHeight;
@property(readonly, nonatomic) int buffWidth; // @synthesize buffWidth=_buffWidth;
@property(nonatomic) _Bool offScreen; // @synthesize offScreen;
- (_Bool)delCaptureDelegate:(unsigned int)arg1;
- (_Bool)addCaptureDelegate:(unsigned int)arg1 delegate:(id)arg2;
- (void)runOnMainThread:(CDUnknownBlockType)arg1;
- (void)recordCapture:(int)arg1 height:(int)arg2;
- (void)presentCapture:(int)arg1 height:(int)arg2;
- (void)capture;
- (_Bool)flip:(int)arg1 height:(int)arg2;
- (_Bool)renderPresent:(int)arg1 height:(int)arg2;
- (_Bool)renderStorage:(id)arg1;
- (_Bool)renderLayer:(id)arg1;
- (_Bool)bindTexture:(unsigned int)arg1 height:(unsigned int)arg2;
- (unsigned int)realHeight;
- (unsigned int)realWidth;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) _Bool needSwitch; // @synthesize needSwitch;
@property(readonly, nonatomic) _Bool hook; // @synthesize hook;
@property(readonly, nonatomic) _Bool ready; // @synthesize ready;
- (_Bool)checkAvailable;
- (void)destroy;
- (_Bool)create;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1 canvas:(id)arg2;

@end

