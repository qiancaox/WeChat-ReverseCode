//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiSelectTableViewCell.h"

@class BaseChatCellView;

@interface ChatTableViewCell : MultiSelectTableViewCell
{
    BaseChatCellView *m_cellView;
    _Bool m_willBeDisplayed;
    _Bool m_didEndDisplayed;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BaseChatCellView *cellView; // @synthesize cellView=m_cellView;
- (void)layoutSubviews;
- (void)didEndDisplayed;
- (void)willBeDisplayed;
- (void)setHidden:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;

@end

