//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MMMultiMenuItem;

@interface MenuButton : UIButton
{
    double _targetWidth;
    MMMultiMenuItem *_menuItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMultiMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
- (void)setBackgroundColor:(id)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

