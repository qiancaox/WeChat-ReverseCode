//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, VoipMultiRelayConnData, VoipMultiRelayData;

@protocol IVOIPSyncExt

@optional
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)OnGotRemoteRelayData:(NSData *)arg1;
- (void)OnGotRemoteNewConnData:(VoipMultiRelayConnData *)arg1;
- (void)OnGotRemoteConnectData:(VoipMultiRelayData *)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 DataFlag:(unsigned int)arg2;
- (void)OnSyncError:(int)arg1;
@end

