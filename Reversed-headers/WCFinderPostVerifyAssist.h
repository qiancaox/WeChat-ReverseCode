//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderUserPageFetchExt-Protocol.h"

@class AnyPromise, NSString, WCFinderContact;

@interface WCFinderPostVerifyAssist : NSObject <WCFinderUserPageFetchExt>
{
    WCFinderContact *_contact;
    AnyPromise *_userPrepare;
}

+ (id)assistWithContact:(id)arg1 userPrepareResponse:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AnyPromise *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)onFinderUserPageContactInfoUpdate:(id)arg1;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)startEnterpriseVerity;
- (void)startRealNameVerity;
- (void)showRealNameVerityPicker;
- (void)showVerityPicker;
- (void)tryContinuePostFromDelegateVC:(id)arg1;
- (void)startRequestPrepareResponse;
- (void)dealloc;
- (id)userPrepareResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

