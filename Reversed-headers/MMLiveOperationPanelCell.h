//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UILabel;

@interface MMLiveOperationPanelCell : UIButton
{
    NSString *_title;
    NSString *_svgIconName;
    UILabel *_customizedTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *customizedTitleLabel; // @synthesize customizedTitleLabel=_customizedTitleLabel;
@property(readonly, copy, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 svgIconName:(id)arg2;

@end

