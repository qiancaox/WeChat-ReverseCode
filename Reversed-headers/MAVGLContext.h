//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSLock;

@interface MAVGLContext : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    NSLock *_lock;
    EAGLContext *_renderContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EAGLContext *renderContext; // @synthesize renderContext=_renderContext;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache;
- (id)setCurrent;
- (void)dealloc;
- (id)initWithCurrent;
- (id)init;

@end

