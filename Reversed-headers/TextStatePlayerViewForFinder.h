//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFullNewMultiMediaView.h"

#import "TextStateBaseMediaView-Protocol.h"

@class NSString;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStatePlayerViewForFinder : WCFinderFullNewMultiMediaView <TextStateBaseMediaView>
{
    _Bool _muted;
    id <TextStateBaseMediaViewDelegate> _textStateDelegate;
}

+ (id)mediaWithContentVM:(id)arg1 isSubScene:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate=_textStateDelegate;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (void)layoutSubviews;
- (void)onPlayToEnd;
- (void)resetPlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (_Bool)isVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

