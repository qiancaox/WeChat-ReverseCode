//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EditStoryImageAttr : NSObject
{
    _Bool _storyHideInTimeline;
    _Bool _lyricsOn;
    NSString *_mainText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(nonatomic, getter=isLyricsOn) _Bool lyricsOn; // @synthesize lyricsOn=_lyricsOn;
@property(nonatomic, getter=isStoryHideInTimeLine) _Bool storyHideInTimeline; // @synthesize storyHideInTimeline=_storyHideInTimeline;
- (id)init;

@end

