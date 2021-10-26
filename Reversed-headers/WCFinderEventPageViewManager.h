//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderEventPageViewModelDelegate-Protocol.h"
#import "WCFinderFeedFlowViewDataSource-Protocol.h"
#import "WCFinderFeedFlowViewDelegate-Protocol.h"

@class MMUIViewController, NSString, WCFinderEventPageViewModel, WCFinderFeedFlowView;
@protocol WCFinderEventPageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderEventPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderEventPageViewModelDelegate>
{
    id <WCFinderEventPageViewManagerDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderEventPageViewModel *_viewModel;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WCFinderEventPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderEventPageViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderEventInvalidWithErrorCode:(int)arg1;
- (void)finderEventNoMoreData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventReloadAllData;
- (void)finderEventFeedOrderChanged;
- (void)finderEventReloadHeaderViewWithTopicInfo:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 view:(id)arg3 InViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

