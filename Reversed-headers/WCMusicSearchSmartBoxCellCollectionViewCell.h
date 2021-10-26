//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIImageView, UIView;

@interface WCMusicSearchSmartBoxCellCollectionViewCell : UICollectionViewCell
{
    double _contentSpacing;
    MMUILabel *_textLabel;
    UIImageView *_iconView;
    UIView *_separatorView;
    struct CGSize _iconSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double contentSpacing; // @synthesize contentSpacing=_contentSpacing;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)setupHighlightedTextForLabel:(id)arg1 highlightedText:(id)arg2;
- (void)setupWithInfo:(id)arg1 query:(id)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

