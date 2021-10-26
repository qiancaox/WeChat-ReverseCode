//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LOTColorValueDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCFinderFinderTopLiveCellDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class CAGradientLayer, NSMutableArray, NSString, UILabel, UIMonitorCollectionView, WCFinderFeedLayoutContentVM;
@protocol WCFinderFriendLiveSectionTableViewCellDelegate;

@interface WCFinderLiveFeedCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, LOTColorValueDelegate, WCGeneralMonitorDelegate, WCFinderFinderTopLiveCellDelegate>
{
    _Bool _isInDarkMode;
    _Bool _stopPlayLive;
    id <WCFinderFriendLiveSectionTableViewCellDelegate> _delegate;
    unsigned long long _displayType;
    UIView *_liveHeaderView;
    UIMonitorCollectionView *_collectionView;
    CAGradientLayer *_gradientLayer;
    NSMutableArray *_dataSource;
    WCFinderFeedLayoutContentVM *_layoutContentVM;
    UILabel *_titleLabel;
    NSString *_titleText;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool stopPlayLive; // @synthesize stopPlayLive=_stopPlayLive;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *layoutContentVM; // @synthesize layoutContentVM=_layoutContentVM;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIMonitorCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *liveHeaderView; // @synthesize liveHeaderView=_liveHeaderView;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <WCFinderFriendLiveSectionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (struct CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(struct CGColor *)arg5 endColor:(struct CGColor *)arg6 currentColor:(struct CGColor *)arg7;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)liveDataFetchFinish:(_Bool)arg1;
- (void)liveSectionNoMoreData;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateWithDataSource:(id)arg1;
- (void)initCollectionView;
- (void)initLiveHeaderView;
- (void)initGradientLayer;
- (void)stopPlay;
- (void)startPlay;
- (void)startLiveAnimation;
- (void)scrollToTop;
- (id)getVisibleFeedVM;
- (void)updateTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isInDarkMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

