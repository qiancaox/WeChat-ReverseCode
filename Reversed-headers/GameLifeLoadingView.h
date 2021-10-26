//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "GCLoadingViewProtocol-Protocol.h"

@class MMUILabel, NSString, UIImageView;
@protocol GameLifeLoadingViewDelegate;

@interface GameLifeLoadingView : MMUIView <GCLoadingViewProtocol>
{
    UIImageView *_loadingImageView;
    MMUILabel *_loadingTextLabel;
    id <GameLifeLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GameLifeLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleRetryTap:(id)arg1;
- (void)onLoadingError;
- (void)startLoading;
- (void)relayout;
- (void)layoutSubviews;
- (void)endLoadingAnimation;
- (void)beginLoadingAnimation;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)gcEndLoading;
- (void)gcBeginLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

