//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeEffectBaseAdapter.h"

@class NSNumber, NSString;

@interface FaceContourEffectAdapter : WeEffectBaseAdapter
{
    NSNumber *_highlightAlpha;
    NSNumber *_shadowAlpha;
    NSNumber *_faceModel;
    NSString *_highlightPath;
    NSString *_shadowPath;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shadowPath; // @synthesize shadowPath=_shadowPath;
@property(retain, nonatomic) NSString *highlightPath; // @synthesize highlightPath=_highlightPath;
@property(retain, nonatomic) NSNumber *faceModel; // @synthesize faceModel=_faceModel;
@property(retain, nonatomic) NSNumber *shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(retain, nonatomic) NSNumber *highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onImageFetchDone:(_Bool)arg1;
- (void)load;

@end

