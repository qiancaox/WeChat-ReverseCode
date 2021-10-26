//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WSTemplateJSLogicImplDelegate-Protocol.h"

@class MMUIViewController, NSString;
@protocol WSTemplateBaseJSHandlerDelegate;

@interface WSTemplateBaseJSHandler : NSObject <WSTemplateJSLogicImplDelegate>
{
    id <WSTemplateBaseJSHandlerDelegate> _delegate;
    MMUIViewController *_containerVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WSTemplateBaseJSHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleJSApi_openFinderView:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_playVideo:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openProfilePage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_ClosePage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_reportKV:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openWeAppPage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_log:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_OpenWebView:(id)arg1 callbackID:(id)arg2;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (id)jsEventsNeedRegister;
- (void)handleJSApi_openAdPage:(id)arg1 callbackID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

