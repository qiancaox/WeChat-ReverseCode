//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeviceInfo : NSObject
{
}

+ (id)commonDeviceInfo;
+ (id)idfaUUID;
+ (id)ssid;
+ (id)bssid;
+ (_Bool)isNewerThanPlatform:(id)arg1 mainGeneration:(int)arg2 subGeneration:(int)arg3;
+ (_Bool)isNewerThaniPodGeneration:(int)arg1 subGeneration:(int)arg2;
+ (_Bool)isNewerThaniPadGeneration:(int)arg1 subGeneration:(int)arg2;
+ (_Bool)isNewerThaniPhoneGeneration:(int)arg1 subGeneration:(int)arg2;
+ (_Bool)isNewerThaniPod6;
+ (_Bool)isNewerThaniPad5th;
+ (_Bool)isNewerThaniPadAir2;
+ (_Bool)isNewerThaniPhone6;
+ (_Bool)isNewerThaniPhone7;
+ (_Bool)isNewerThaniPhone8;
+ (_Bool)isNewerThaniPhoneX;
+ (_Bool)isSceneBased;
+ (_Bool)canUseInAppSplitView;
+ (_Bool)isSupportDragAndDrop;
+ (_Bool)isSupportSplitView;
+ (_Bool)hasForceTouchCapability:(id)arg1;
+ (_Bool)isiPadAndFaceIDHardwareSupported;
+ (_Bool)isDeviceFaceIDHardwareSupported;
+ (_Bool)isiOS11_2plus;
+ (_Bool)isiOS11_4plus;
+ (_Bool)isiOS12plus;
+ (_Bool)isiOS12_2plus;
+ (_Bool)isiOS13plus;
+ (_Bool)isiOS13_2;
+ (_Bool)isiOS14plus;
+ (_Bool)isiOS14_2Plus;
+ (_Bool)isiOS14_5plus;
+ (_Bool)isiOS15plus;
+ (double)GetiOSVersion;
+ (_Bool)isUnderiPhone6s;
+ (_Bool)isUnderiPhone6;
+ (_Bool)isiPadUniversal;
+ (_Bool)isiPadMini;
+ (_Bool)isiPadAir2;
+ (_Bool)isiPadAir;
+ (_Bool)isiPad;
+ (_Bool)isiPodTouch6;
+ (_Bool)isiPodTouch;
+ (_Bool)isiPhone12ProMax;
+ (_Bool)isiPhone11ProMax;
+ (_Bool)isiPhoneXsMax;
+ (_Bool)isiPhoneX;
+ (_Bool)isiPhonePlus;
+ (_Bool)isiPhone7p;
+ (_Bool)isiPhone7;
+ (_Bool)isiPhoneSE;
+ (_Bool)isiPhone6sp;
+ (_Bool)isiPhone6s;
+ (_Bool)isiPhone6p;
+ (_Bool)isiPhone6;
+ (_Bool)isiPhone5S;
+ (_Bool)isiPhone;
+ (id)osKernelVersion;
+ (id)DCache;
+ (id)DMemory;
+ (id)DCPU;
+ (id)DSystem;
+ (id)DModel;
+ (id)modelPlatform;
+ (id)deviceXml;
+ (long long)FreeDiskSpaceSize;
+ (long long)TotalDiskSpaceSize;
+ (id)fetchCurrentTimeZone;
+ (id)fetchModel;
+ (id)fetchSysFileInfo:(id)arg1;
+ (id)fetchDiskSize;
+ (id)fetchPhysicalMemory;
+ (id)fetchCarrierName;
+ (id)fetchMachineInfo;
+ (id)fetchSystemVersion;
+ (id)fetchDeviceName;
+ (id)fetchCurrentLanguage;
+ (id)fetchCountryCode;
+ (id)fetchBootSecTime;
+ (id)deviceCommonInfoSummary;
+ (_Bool)isSmallScreenSizePhone;
+ (_Bool)isiPhone6Screen;
+ (_Bool)isiPhone6pScreen;
+ (_Bool)is812hScreen;
+ (_Bool)is736hScreen;
+ (_Bool)is667hScreen;
+ (_Bool)is568hScreen;

@end

