//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAContact;

@protocol WAProfileHeaderViewDelegate <NSObject>
- (void)onTagViewClicked:(WAContact *)arg1 tagType:(long long)arg2;
- (void)onShareButtonClicked:(WAContact *)arg1;
- (void)onEnterButtonClicked:(WAContact *)arg1;
@end

