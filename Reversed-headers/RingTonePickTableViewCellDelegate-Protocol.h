//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RingToneDetail;

@protocol RingTonePickTableViewCellDelegate <NSObject>
- (void)stopPlayRing;
- (void)onTapPlayRingTone:(RingToneDetail *)arg1 isToPlay:(_Bool)arg2 scene:(unsigned long long)arg3;
- (void)onTapUseRingtone:(RingToneDetail *)arg1 scene:(unsigned long long)arg2;
@end

