//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMMenuControllerExt-Protocol.h"

@class NSString, UILabel, UIView;
@protocol WAMainFrameTaskBarSectionBaseViewReportDelegate;

@interface WAMainFrameTaskBarSectionBaseView : UICollectionViewCell <MMMenuControllerExt>
{
    UILabel *_titleLabel;
    UIView *_contentContainer;
    UIView *_topArea;
    UIView *_cellMask;
    NSString *_sectionId;
    id <WAMainFrameTaskBarSectionBaseViewReportDelegate> _reportDelegate;
}

+ (long long)topAreaHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionBaseViewReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) UIView *cellMask; // @synthesize cellMask=_cellMask;
@property(retain, nonatomic) UIView *topArea; // @synthesize topArea=_topArea;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)willDisplayItem:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)deleteItem:(id)arg1 weappData:(id)arg2 pos:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onClick:(id)arg1 pos:(long long)arg2 isMyWeApp:(_Bool)arg3;
- (void)onClick:(id)arg1 weappData:(id)arg2 pos:(long long)arg3;
- (void)onMenuControllerDidHide;
- (_Bool)supportAddToMinimize;
- (void)addCellMask:(id)arg1;
- (void)reload;
- (void)initView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)title;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

