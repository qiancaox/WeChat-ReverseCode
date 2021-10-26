//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveChooseClarityTableDataDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveChooseClarityTableViewModel, MMFinderLiveChooseClarityViewNavBar, MMTableView, NSIndexPath, NSString, UIView;
@protocol MMFinderLiveChooseClarityDelegate;

@interface MMFinderLiveChooseClarityView : MMPageSheetBaseView <MMFinderLiveChooseClarityTableDataDelegate>
{
    id <MMFinderLiveChooseClarityDelegate> _operationDelegate;
    MMFinderLiveChooseClarityTableViewModel *_lotteryMethodTableViewModel;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveChooseClarityViewNavBar *_navBar;
    MMTableView *_lotteryMethodTableView;
    NSIndexPath *_selectIndexPath;
}

+ (id)changeModelArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) MMTableView *lotteryMethodTableView; // @synthesize lotteryMethodTableView=_lotteryMethodTableView;
@property(retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMFinderLiveChooseClarityTableViewModel *lotteryMethodTableViewModel; // @synthesize lotteryMethodTableViewModel=_lotteryMethodTableViewModel;
@property(nonatomic) __weak id <MMFinderLiveChooseClarityDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
- (double)getLotteryTableHeight;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)updateData:(id)arg1 chooseInfo:(id)arg2;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithLotteryMethodData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

