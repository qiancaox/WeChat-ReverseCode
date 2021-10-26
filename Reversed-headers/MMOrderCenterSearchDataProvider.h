//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMOrderCenterOrderDataProvider-Protocol.h"

@class NSString;

@interface MMOrderCenterSearchDataProvider : NSObject <MMOrderCenterOrderDataProvider>
{
    _Bool _newSearch;
    _Bool _hasMoreOrders;
    NSString *_keyword;
    NSString *_lastOrderId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoreOrders; // @synthesize hasMoreOrders=_hasMoreOrders;
@property(retain, nonatomic) NSString *lastOrderId; // @synthesize lastOrderId=_lastOrderId;
@property(nonatomic) _Bool newSearch; // @synthesize newSearch=_newSearch;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)noDataPrompt;
- (void)getOrdersWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 forceRefresh:(_Bool)arg3;
- (id)initWithKeyword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

