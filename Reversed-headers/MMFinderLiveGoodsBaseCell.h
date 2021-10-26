//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class UIImageView;
@protocol MMFinderLiveGoodsBaseCellDelegate;

@interface MMFinderLiveGoodsBaseCell : MMMultiMenuTableViewCell
{
    _Bool m_bIsEditting;
    _Bool m_bNeedOffset;
    _Bool m_bShowSelectedFlag;
    _Bool m_bSelected;
    _Bool m_bAnimated;
    unsigned int m_iAnimatedCount;
    UIImageView *m_selectedImageView;
    id <MMFinderLiveGoodsBaseCellDelegate> _multiSelectDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveGoodsBaseCellDelegate> multiSelectDelegate; // @synthesize multiSelectDelegate=_multiSelectDelegate;
@property(retain, nonatomic) UIImageView *m_selectedImageView; // @synthesize m_selectedImageView;
@property(nonatomic) _Bool m_bAnimated; // @synthesize m_bAnimated;
@property(nonatomic) unsigned int m_iAnimatedCount; // @synthesize m_iAnimatedCount;
@property(nonatomic) _Bool m_bSelected; // @synthesize m_bSelected;
@property(nonatomic) _Bool m_bShowSelectedFlag; // @synthesize m_bShowSelectedFlag;
@property(nonatomic) _Bool m_bNeedOffset; // @synthesize m_bNeedOffset;
@property(nonatomic) _Bool m_bIsEditting; // @synthesize m_bIsEditting;
- (id)unSelectedImageForSelectedButton;
- (id)selectedImageForSelectedButton;
- (struct CGSize)selectedButtonSize;
- (double)selectedButtonLeftMargin;
- (double)adjustedLeftOffsetForEditing;
@property(readonly, nonatomic) double reorderButtonLeftOffset;
- (void)changeSelectdStatus:(_Bool)arg1;
- (void)customTableViewCellRecorderControl;
- (void)adjustSelectFlagFrameInternal;
- (void)layoutSelectedImageView;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetState;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

