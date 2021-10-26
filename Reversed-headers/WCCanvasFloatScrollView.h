//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, WCCanvasComponent, WCCanvasComponentItem, WCDataItem;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasFloatScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    WCCanvasComponentItem *_componentItem;
    WCCanvasComponent *_component;
    WCDataItem *_dataItem;
    long long _orientation;
    id <WCCanvasComponentDelegate> _componentDelegate;
    struct CGPoint _beginDraggingOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint beginDraggingOffset; // @synthesize beginDraggingOffset=_beginDraggingOffset;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCCanvasComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
- (void)didScrollViewEndDecelerating;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)contentViewScrollToTop;
- (_Bool)didContainWebStoreComponent;
- (void)setContentComponentFullScreen;
- (_Bool)didScrollViewScrollToTop;
- (void)notifyComponentStatusChanged:(_Bool)arg1;
- (void)initComponent;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 componentItem:(id)arg2 dataItem:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

