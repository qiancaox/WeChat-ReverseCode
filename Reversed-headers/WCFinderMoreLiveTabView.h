//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderTabViewProtocol-Protocol.h"

@class NSString, UIColor, UILabel;
@protocol WCFinderTabViewDelegate;

@interface WCFinderMoreLiveTabView : UIView <WCFinderTabViewProtocol>
{
    unsigned int _bindTabId;
    id <WCFinderTabViewDelegate> delegate;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    UIView *_containerView;
    UILabel *_titleLabel;
    NSString *_bindPath;
    UIView *_redDotView;
    double _fontSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int bindTabId; // @synthesize bindTabId=_bindTabId;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(copy, nonatomic) NSString *bindPath; // @synthesize bindPath=_bindPath;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) __weak id <WCFinderTabViewDelegate> delegate; // @synthesize delegate;
- (void)processRedDotView;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)sizeToFit;
- (_Bool)isRedDotViewHidden;
- (void)setTitleText:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

