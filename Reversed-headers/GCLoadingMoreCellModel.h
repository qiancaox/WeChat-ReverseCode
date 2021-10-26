//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCViewHolderCellModel.h"

@class UIView;
@protocol GCLoadMoreProtocol, GCLoadingViewProtocol;

@interface GCLoadingMoreCellModel : GCViewHolderCellModel
{
    _Bool _isLoading;
    id <GCLoadMoreProtocol> _loadMoreDelegate;
    UIView<GCLoadingViewProtocol> *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIView<GCLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <GCLoadMoreProtocol> loadMoreDelegate; // @synthesize loadMoreDelegate=_loadMoreDelegate;
- (void)endLoading;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithLoadingView:(id)arg1;

@end

