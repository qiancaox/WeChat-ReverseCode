//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

@interface EmoticonLensMoreHeaderView : UICollectionReusableView
{
    _Bool _showTopSeparator;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_topSeparator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

