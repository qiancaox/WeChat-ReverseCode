//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderGetUserCgiDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol WCFinderQRCodeViewModelDelegate;

@interface WCFinderQRCodeViewModel : NSObject <WCFinderGetUserCgiDelegate>
{
    NSString *_scanResultURL;
    UIViewController *_vc;
    unsigned long long _entryScene;
    id <WCFinderQRCodeViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderQRCodeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(copy, nonatomic) NSString *scanResultURL; // @synthesize scanResultURL=_scanResultURL;
- (id)parsePromoterTokenFromURLString:(id)arg1;
- (void)getUserCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getUserCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)startHandleScanResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

