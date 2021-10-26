//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GPUImageInput-Protocol.h"

@class GLProgram, GPUImageFramebuffer, NSString;

@interface GPUImageView : UIView <GPUImageInput>
{
    unsigned long long inputRotation;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    GLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize inputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize boundsSizeAtFrameBufferEpoch;
    _Bool enabled;
    unsigned long long aspectRatio;
    unsigned long long _fillMode;
    struct CGSize _sizeInPixels;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long aspectRatio; // @synthesize aspectRatio;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)destroyFrameBuffer;
- (int)generateFrameBuffer:(_Bool)arg1 newSize:(struct CGSize)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)presentFramebuffer;
- (void)setDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)createDisplayFramebuffer;
- (void)dealloc;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

