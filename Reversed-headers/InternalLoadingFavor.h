//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCPayBusiF2FGetFavorCgiDelegate-Protocol.h"

@class NSString;
@protocol InternalLoadingFavorDelegate;

@interface InternalLoadingFavor : NSObject <WCPayBusiF2FGetFavorCgiDelegate>
{
    id <InternalLoadingFavorDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <InternalLoadingFavorDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

