//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class CBCentralManager, CLLocationManager, MMTimer, NSDictionary, NSMutableDictionary, NSString;

@interface WASystemInfo : MMRootService <CLLocationManagerDelegate, CBCentralManagerDelegate, MMServiceProtocol>
{
    _Bool _checkBlueTooth;
    NSDictionary *_systemInfoDic;
    NSMutableDictionary *_systemRegularDic;
    NSMutableDictionary *_systemPermissionDic;
    CBCentralManager *_bluetoothManager;
    CLLocationManager *_locationManager;
    MMTimer *_updateTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CBCentralManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(nonatomic) _Bool checkBlueTooth; // @synthesize checkBlueTooth=_checkBlueTooth;
@property(retain, nonatomic) NSMutableDictionary *systemPermissionDic; // @synthesize systemPermissionDic=_systemPermissionDic;
@property(retain, nonatomic) NSMutableDictionary *systemRegularDic; // @synthesize systemRegularDic=_systemRegularDic;
@property(retain, nonatomic) NSDictionary *systemInfoDic; // @synthesize systemInfoDic=_systemInfoDic;
- (void)onNetworkWeakChange:(_Bool)arg1;
- (void)onNetworkStatusChange:(int)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)updateSystemPermissionInfo;
- (void)initSystemPermissionInfo;
- (id)stateByAuthorized:(_Bool)arg1 notDetermined:(_Bool)arg2;
- (void)updateRegularSystemInfo;
- (void)mergeSystemDic;
- (void)makeBlueToothInfo:(id)arg1;
- (id)startCheckBlueTooth:(_Bool)arg1;
- (void)updateSystemInfo;
- (void)onTimeUpdateSystemInfo;
- (void)startUpdateSystemInfo;
- (void)didStatusBarFrameChanged;
- (void)didOrientationChanged;
- (void)onApplicationDidFinishLaunching:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (id)getSystemInfo;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

