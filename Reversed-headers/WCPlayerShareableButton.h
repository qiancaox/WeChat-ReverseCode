//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class RichTextView, UIImageView, UIView;

@interface WCPlayerShareableButton : MMUIButton
{
    RichTextView *_richTitle;
    UIImageView *_indicator;
    UIView *_hightLightMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hightLightMaskView; // @synthesize hightLightMaskView=_hightLightMaskView;
@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) RichTextView *richTitle; // @synthesize richTitle=_richTitle;
- (void)setHighlighted:(_Bool)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

