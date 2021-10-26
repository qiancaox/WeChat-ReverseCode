//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMMusicLyricsPanelDelegate-Protocol.h"
#import "MMMusicLyricsRtnExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMMusicInfo, MMMusicLyricsPanel, NSString, UIPanGestureRecognizer, UIView;
@protocol MMMusicLyricsViewControllerDelegate;

@interface MMMusicLyricsViewController : MMUIViewController <MMMusicLyricsPanelDelegate, MMMusicLyricsRtnExt, UIGestureRecognizerDelegate>
{
    MMMusicInfo *m_musicInfo;
    struct CGRect m_lyricsViewFrame;
    MMMusicLyricsPanel *m_lyricsPanel;
    UIView *m_bgCoverView;
    _Bool _isDragOrClickLyrics;
    id <MMMusicLyricsViewControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGesture1;
    UIPanGestureRecognizer *_panGesture2;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDragOrClickLyrics; // @synthesize isDragOrClickLyrics=_isDragOrClickLyrics;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture2; // @synthesize panGesture2=_panGesture2;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture1; // @synthesize panGesture1=_panGesture1;
@property(nonatomic) __weak id <MMMusicLyricsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)onDragOrClickLyrics;
- (void)onClickUpBtn;
- (void)onWillCloseLyricsPanel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)dealloc;
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

