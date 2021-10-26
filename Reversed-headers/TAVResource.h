//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "TAVResourceTrackInfoProvider-Protocol.h"

@class NSString;

@interface TAVResource : NSObject <NSCopying, TAVResourceTrackInfoProvider>
{
    struct CGSize _size;
    CDStruct_1b6d18a9 _scaledDuration;
    CDStruct_1b6d18a9 _duration;
    CDStruct_e83c9415 _sourceTimeRange;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) CDStruct_e83c9415 sourceTimeRange; // @synthesize sourceTimeRange=_sourceTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pcmBufferAtTimeRange:(CDStruct_e83c9415)arg1 audioFormat:(id)arg2;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)tracksForType:(id)arg1;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (CDStruct_1b6d18a9)sourceTimeForTimelineTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 scaledDuration; // @synthesize scaledDuration=_scaledDuration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

