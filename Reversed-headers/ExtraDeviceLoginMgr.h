//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface ExtraDeviceLoginMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    unsigned int _uiFromScene;
    unsigned int _extDevice;
    NSString *_loginUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int extDevice; // @synthesize extDevice=_extDevice;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(nonatomic) unsigned int uiFromScene; // @synthesize uiFromScene=_uiFromScene;
- (void)onGetExtDeviceControlReponse:(id)arg1 eventID:(unsigned int)arg2;
- (unsigned int)sendDeviceControlCGIWithIsLock:(_Bool)arg1;
- (unsigned int)unlockExtDevice;
- (unsigned int)lockExtDevice;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetExtDeviceLoginResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)sendExtraDeviceLoginRequset;
- (void)showExtraDeviceLoginViewControllerWithExtInfo:(id)arg1;
- (void)handleExtraDeviceLoginUrl:(id)arg1 uiFromScene:(unsigned int)arg2;
- (unsigned int)getExtDeviceType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

