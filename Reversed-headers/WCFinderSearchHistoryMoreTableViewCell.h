//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WCFinderSearchHistoryMoreTableViewCell : UITableViewCell
{
    UILabel *_label;
    UIImageView *_iconView;
    unsigned long long _cellType;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void)updateCellType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

