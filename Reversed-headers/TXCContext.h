//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, EAGLSharegroup, NSMutableArray, NSMutableDictionary, TXCFramebufferCache, TXCProgram;
@protocol OS_dispatch_queue;

@interface TXCContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    unsigned long long _api;
    EAGLContext *_context;
    TXCProgram *_currentShaderProgram;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    TXCFramebufferCache *_framebufferCache;
}

+ (_Bool)supportsFastTextureUpload;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (_Bool)deviceSupportsFramebufferReads;
+ (_Bool)deviceSupportsRedTextures;
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;
+ (int)maximumVaryingVectorsForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumTextureSizeForThisDevice;
+ (void)setActiveShaderProgram:(id)arg1;
+ (void)resetImageProcessingContext;
+ (void)useImageProcessingContext;
+ (id)sharedFramebufferCache;
+ (id)sharedContextQueue;
+ (id)sharedImageProcessingContext;
+ (void *)contextKey;
- (void).cxx_destruct;
@property(readonly) unsigned long long api; // @synthesize api=_api;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) TXCProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
@property(readonly) TXCFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)releaseCoreVideoTextureCache;
- (void)useSharegroup:(id)arg1 api:(unsigned long long)arg2;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)presentBufferForDisplay;
- (void)setContextShaderProgram:(id)arg1;
- (void)useAsCurrentContext;
- (id)init;

@end

