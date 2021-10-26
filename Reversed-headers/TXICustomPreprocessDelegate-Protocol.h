//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, TXSVFrame;

@protocol TXICustomPreprocessDelegate <NSObject>

@optional
- (void)onRecordPcmData:(NSData *)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (void)onRecordRawPcmData:(NSData *)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4 withBgm:(_Bool)arg5;
- (void)onTextureDestoryed;
- (void)onDetectFacePoints:(NSArray *)arg1;
- (void)onCustomPreprocessFrame:(TXSVFrame *)arg1 dstFrame:(TXSVFrame *)arg2 format:(long long)arg3;
@end

