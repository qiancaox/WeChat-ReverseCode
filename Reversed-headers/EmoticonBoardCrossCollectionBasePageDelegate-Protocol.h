//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EmoticonBoardCrossCollectionBasePageCell;

@protocol EmoticonBoardCrossCollectionBasePageDelegate <NSObject>
- (_Bool)accessibilityManualScrollTo:(long long)arg1;
- (void)onPageCell:(EmoticonBoardCrossCollectionBasePageCell *)arg1 didScrollToOffset:(struct CGPoint)arg2;
@end

