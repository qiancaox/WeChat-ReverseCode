//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class GameCenterJsService, NSString;

@interface GameCenterJsServiceMgr : MMUserService <MMServiceProtocol>
{
    GameCenterJsService *_jsService;
}

- (void).cxx_destruct;
- (void)processEventFromNative:(id)arg1 event:(id)arg2;
- (void)processCallbackFromNative:(id)arg1 callbackId:(id)arg2;
- (void)postMessageFromWebView:(id)arg1 message:(id)arg2;
- (void)dispatchJsServiceState:(id)arg1;
- (id)getJsServiceState;
- (_Bool)checkAndDestroyJsService;
- (void)destroy;
- (_Bool)checkAndDestroy;
- (void)stop;
- (void)create;
- (_Bool)canCreate;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

