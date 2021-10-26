//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMImageGridView : UIView
{
    struct CGRect m_startRect;
    double m_stepX;
    double m_stepY;
    long long m_columnCount;
    NSMutableArray *m_arrOfViews;
}

+ (double)getLayoutHeightForViews:(long long)arg1 columms:(long long)arg2 unitHeight:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_arrOfViews; // @synthesize m_arrOfViews;
@property(nonatomic) long long m_columnCount; // @synthesize m_columnCount;
@property(nonatomic) double m_stepY; // @synthesize m_stepY;
@property(nonatomic) double m_stepX; // @synthesize m_stepX;
@property(nonatomic) struct CGRect m_startRect; // @synthesize m_startRect;
- (struct CGSize)getLayoutSizeEx:(_Bool)arg1;
- (struct CGSize)getLayoutSizeWithRefresh;
- (struct CGSize)getLayoutSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

