//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface AttributeLabel : UILabel
{
    UIColor *_userColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *userColor; // @synthesize userColor=_userColor;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3 highlightFont:(id)arg4;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;

@end

