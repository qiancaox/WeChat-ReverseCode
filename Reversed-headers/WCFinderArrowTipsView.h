//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WCFinderArrowTipsView : UIView
{
    unsigned int _arrowType;
    UILabel *_tipsLabel;
    UIView *_bubbleView;
    double _arrowWidth;
    double _arrowHeight;
    struct UIEdgeInsets _tipsInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets tipsInsets; // @synthesize tipsInsets=_tipsInsets;
@property(nonatomic) unsigned int arrowType; // @synthesize arrowType=_arrowType;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)updateMargin;
- (void)setupTipsLabel;
- (void)drawTriangleAtPoint:(struct CGPoint)arg1;
- (void)drawArrowAtPoint:(struct CGPoint)arg1;
- (void)moveTo:(struct CGPoint)arg1 inView:(id)arg2;

@end

