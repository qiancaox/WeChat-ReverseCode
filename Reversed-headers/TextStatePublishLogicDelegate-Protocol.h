//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TextStatePublishLogicDelegate <NSObject>
- (void)onTextStatePublishFailedWithErrorMessage:(NSString *)arg1 tid:(NSString *)arg2;
- (void)onTextStatePublishSucceededWithTid:(NSString *)arg1 textStateId:(NSString *)arg2 topicId:(NSString *)arg3;
@end

