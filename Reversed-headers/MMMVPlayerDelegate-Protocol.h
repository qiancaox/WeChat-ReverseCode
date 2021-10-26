//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMVPlayer, MMMusicInfo, MMMusicPlayerErrInfo, MVPlayerTimeRange;

@protocol MMMVPlayerDelegate <NSObject>

@optional
- (_Bool)mvPlayer:(MMMVPlayer *)arg1 shouldHandleFinishLoopTimeRange:(MVPlayerTimeRange *)arg2;
- (_Bool)mvPlayerShouldPlayVideo:(MMMVPlayer *)arg1;
- (void)mvPlayerShouldHideVideoBuffering:(MMMVPlayer *)arg1;
- (void)mvPlayerShouldShowVideoBuffering:(MMMVPlayer *)arg1;
- (void)MVPlayer:(MMMVPlayer *)arg1 didUpdateEpisodeIndexFrom:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)MVPlayer:(MMMVPlayer *)arg1 onMusicStateChanged:(unsigned long long)arg2 musicInfo:(MMMusicInfo *)arg3 errorInfo:(MMMusicPlayerErrInfo *)arg4;
- (void)MVPlayer:(MMMVPlayer *)arg1 onMusicDurationAvailable:(double)arg2;
- (void)MVPlayer:(MMMVPlayer *)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
@end

