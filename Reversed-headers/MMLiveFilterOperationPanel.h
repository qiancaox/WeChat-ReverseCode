//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, MMLiveBeautyStyleSlider, MMLiveTaskId, MMUIButton, NSArray, NSString, UICollectionView, UITapGestureRecognizer;
@protocol MMLiveFilterOperationPanelDelegate;

@interface MMLiveFilterOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    id <MMLiveFilterOperationPanelDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_arrowButton;
    UICollectionView *_filterItemsCollectionView;
    MMLiveBeautyStyleSlider *_beautyStyleSlider;
    NSArray *_filterDataItemsList;
    unsigned long long _currentFilterItemIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentFilterItemIndex; // @synthesize currentFilterItemIndex=_currentFilterItemIndex;
@property(retain, nonatomic) NSArray *filterDataItemsList; // @synthesize filterDataItemsList=_filterDataItemsList;
@property(retain, nonatomic) MMLiveBeautyStyleSlider *beautyStyleSlider; // @synthesize beautyStyleSlider=_beautyStyleSlider;
@property(retain, nonatomic) UICollectionView *filterItemsCollectionView; // @synthesize filterItemsCollectionView=_filterItemsCollectionView;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveFilterOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (void)updateEffectFilter;
- (void)closePanelDirectly;
- (void)close:(_Bool)arg1;
- (void)closeAction;
- (void)showPanel;
- (void)updateBeautyStyleSliderValue;
- (void)updateFilterDataItemsList;
- (id)getLiveTask;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

