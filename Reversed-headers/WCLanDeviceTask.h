//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCLanDeviceTask : NSObject
{
    int m_subTaskId;
    NSString *m_deviceType;
    NSString *m_deviceId;
    long long m_taskId;
    long long m_taskCmd;
}

- (void).cxx_destruct;
@property(nonatomic) int m_subTaskId; // @synthesize m_subTaskId;
@property(nonatomic) long long m_taskCmd; // @synthesize m_taskCmd;
@property(nonatomic) long long m_taskId; // @synthesize m_taskId;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;

@end

