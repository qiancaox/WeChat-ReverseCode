//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@protocol WCCardDataSource, WCCardSecondaryViewDelegate;

@interface WCCardSecondaryView : MMUIView
{
    id <WCCardDataSource> _cardDataSource;
    id <WCCardSecondaryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardSecondaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fieldClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCardDataSource:(id)arg1;
- (void)dealloc;

@end

