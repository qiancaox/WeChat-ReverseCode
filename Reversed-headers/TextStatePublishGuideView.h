//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton;

@interface TextStatePublishGuideView : UIView
{
    CDUnknownBlockType _completionHandler;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    UIButton *_knowButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *knowButton; // @synthesize knowButton=_knowButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)onTapKnowButton;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

