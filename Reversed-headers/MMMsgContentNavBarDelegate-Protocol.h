//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMsgContentTipsItem;

@protocol MMMsgContentNavBarDelegate <NSObject>
- (void)onMsgContentNavBarHiddenChange:(_Bool)arg1;
- (_Bool)shuoldShowTipsBar:(MMMsgContentTipsItem *)arg1;
- (void)onClickMsgTipsBarClose:(MMMsgContentTipsItem *)arg1;
- (void)onClickMsgTipsBarTrailingButton:(MMMsgContentTipsItem *)arg1;
- (void)onClickBizTipsBarClose:(MMMsgContentTipsItem *)arg1;
- (void)onClickBizTipsBar:(MMMsgContentTipsItem *)arg1;
@end

