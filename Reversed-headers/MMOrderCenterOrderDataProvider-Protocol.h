//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMOrderCenterOrderDataProvider <NSObject>
- (void)getOrdersWithSuccessBlock:(void (^)(NSArray *, _Bool))arg1 failBlock:(void (^)(int, NSString *))arg2 forceRefresh:(_Bool)arg3;

@optional
- (NSString *)noDataPrompt;
@end

