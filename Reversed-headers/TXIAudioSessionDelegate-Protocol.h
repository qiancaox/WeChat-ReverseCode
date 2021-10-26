//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TXIAudioSessionDelegate <NSObject>
- (int)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (int)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (int)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (int)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (int)setCategory:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (int)setCategory:(NSString *)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (int)setCategory:(NSString *)arg1 error:(id *)arg2;
- (int)setMode:(NSString *)arg1 error:(id *)arg2;
- (int)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (int)setActive:(_Bool)arg1 error:(id *)arg2;
@end

