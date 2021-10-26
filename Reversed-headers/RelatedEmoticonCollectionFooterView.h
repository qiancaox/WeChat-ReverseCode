//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class EmoticonCellLikeButton, UIImageView, UILabel;
@protocol RelatedEmoticonCollectionFooterViewDelegate;

@interface RelatedEmoticonCollectionFooterView : UICollectionReusableView
{
    id <RelatedEmoticonCollectionFooterViewDelegate> _delegate;
    EmoticonCellLikeButton *_button;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) EmoticonCellLikeButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <RelatedEmoticonCollectionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapFooterButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

