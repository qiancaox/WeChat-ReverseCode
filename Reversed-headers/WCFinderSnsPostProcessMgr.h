//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCAlbumPickerFooterViewDelegate-Protocol.h"
#import "WCAlbumPreviewBrowserViewControllerDelegate-Protocol.h"
#import "WCEditImageViewControllerDelegate-Protocol.h"
#import "WCEditVideoViewControllerDelegate-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol WCFinderSnsPostProcessMgrDelegate;

@interface WCFinderSnsPostProcessMgr : NSObject <WCAlbumPickerFooterViewDelegate, WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCEditImageViewControllerDelegate, WCAlbumPreviewBrowserViewControllerDelegate>
{
    id <WCFinderSnsPostProcessMgrDelegate> _delegate;
    NSMutableArray *_assetArray;
    unsigned long long _enterTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSMutableArray *assetArray; // @synthesize assetArray=_assetArray;
@property(nonatomic) __weak id <WCFinderSnsPostProcessMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 andForceChangeToScene:(unsigned int)arg3;
- (void)returnToTimelineOrAlbum;
- (void)updateVideoPath:(id)arg1 andThumbnail:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)presentEditViewControllerWithLocalPathArray:(id)arg1 mediaType:(long long)arg2 fromVC:(id)arg3;
- (void)reportEnterPage:(unsigned long long)arg1 eventCode:(long long)arg2 dismiss:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

