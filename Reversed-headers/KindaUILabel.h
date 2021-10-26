//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, NSAttributedString, NSMutableArray, UIColor, UITextView;
@protocol KindaUILabelDelegate;

@interface KindaUILabel : UILabel
{
    id <KindaUILabelDelegate> _delegate;
    NSArray *_highlightRanges;
    UIColor *_highlightColor;
    NSArray *_bkgDataItems;
    NSMutableArray *_links;
    long long _expandHitWidth;
    long long _expandHitHeight;
    NSAttributedString *_backupAttributedText;
    UITextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSAttributedString *backupAttributedText; // @synthesize backupAttributedText=_backupAttributedText;
@property(nonatomic) long long expandHitHeight; // @synthesize expandHitHeight=_expandHitHeight;
@property(nonatomic) long long expandHitWidth; // @synthesize expandHitWidth=_expandHitWidth;
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSArray *bkgDataItems; // @synthesize bkgDataItems=_bkgDataItems;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
@property(nonatomic) __weak id <KindaUILabelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAccessibilityElement;
- (id)makeAccessibilityElements;
- (struct CGRect)rectWithStringRange:(struct _NSRange)arg1;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;
- (void)drawTextBackground;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)rangeForIndex:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)indexInLocation:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

