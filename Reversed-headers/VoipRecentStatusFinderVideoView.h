//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VoipRecentStatusFinderCardContentProtocol-Protocol.h"

@class NSString, UIImageView, VoipRecentStatusFadeView, WCFinderSimplePlayerView;

@interface VoipRecentStatusFinderVideoView : UIView <VoipRecentStatusFinderCardContentProtocol>
{
    _Bool _shouldPlaySound;
    _Bool _isSoundBtnHidden;
    CDUnknownBlockType _didClickSoundButtonCallback;
    WCFinderSimplePlayerView *_contentsView;
    UIView *_soundView;
    UIImageView *_soundIconImageView;
    VoipRecentStatusFadeView *_topFadeView;
    VoipRecentStatusFadeView *_bottomFadeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView; // @synthesize bottomFadeView=_bottomFadeView;
@property(retain, nonatomic) VoipRecentStatusFadeView *topFadeView; // @synthesize topFadeView=_topFadeView;
@property(retain, nonatomic) UIImageView *soundIconImageView; // @synthesize soundIconImageView=_soundIconImageView;
@property(retain, nonatomic) UIView *soundView; // @synthesize soundView=_soundView;
@property(retain, nonatomic) WCFinderSimplePlayerView *contentsView; // @synthesize contentsView=_contentsView;
@property(copy, nonatomic) CDUnknownBlockType didClickSoundButtonCallback; // @synthesize didClickSoundButtonCallback=_didClickSoundButtonCallback;
@property(nonatomic) _Bool isSoundBtnHidden; // @synthesize isSoundBtnHidden=_isSoundBtnHidden;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
- (void)onSilenceViewClickWithSender:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWCFinderDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

