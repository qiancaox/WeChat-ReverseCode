//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WCFinderInPictureContainerView : UIView
{
    UIView *_gradientView;
    UIButton *_closeButton;
    UIView *_playerView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
- (void)updateTipsLabelWith:(id)arg1 hidden:(_Bool)arg2;
- (void)pauseVideo;
- (id)initWithPlayerView:(id)arg1 targetVC:(id)arg2;

@end

