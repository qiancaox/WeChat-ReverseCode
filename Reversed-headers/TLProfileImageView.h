//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "TLProfileBaseMediaView-Protocol.h"

@class NSString;
@protocol TLProfileBaseMediaViewDelegate;

@interface TLProfileImageView : UIImageView <TLProfileBaseMediaView>
{
}

- (void)tl_stopPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_startPlayMedia;
@property(readonly, nonatomic) double tl_mediaAspectRatio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool tl_muted;
@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> tl_profileDelegate;

@end

