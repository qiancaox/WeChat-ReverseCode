//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWAHandOffService-Protocol.h"

@class NSString;

@interface WAHandOffProxy : NSObject <IWAHandOffService>
{
}

+ (void)modCurrentMiniProgramHandoffItemWithEntryPath:(id)arg1;
+ (void)removeCurrentHandOffItem;
+ (void)tryOpenCurrentHandOffWithTask:(id)arg1 handoffId:(id)arg2 withAppPath:(id)arg3 withActioId:(long long)arg4;
+ (void)trySetCurrentHandOffWithTask:(id)arg1 handoffId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

