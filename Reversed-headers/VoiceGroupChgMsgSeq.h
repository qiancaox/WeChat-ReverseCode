//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoiceGroupChgMsgSeq : NSObject
{
    int _createMsgSeq;
    int _memberStatusMsgSeq;
    int _cancelCreateStatusMsgSeq;
    int _videoMemberMsgSeq;
    int _videoSubscribeMsgSeq;
    int _deviceHandleMsgSeq;
    int _audioStreamMsgSeq;
}

@property(nonatomic) int audioStreamMsgSeq; // @synthesize audioStreamMsgSeq=_audioStreamMsgSeq;
@property(nonatomic) int deviceHandleMsgSeq; // @synthesize deviceHandleMsgSeq=_deviceHandleMsgSeq;
@property(nonatomic) int videoSubscribeMsgSeq; // @synthesize videoSubscribeMsgSeq=_videoSubscribeMsgSeq;
@property(nonatomic) int videoMemberMsgSeq; // @synthesize videoMemberMsgSeq=_videoMemberMsgSeq;
@property(nonatomic) int cancelCreateStatusMsgSeq; // @synthesize cancelCreateStatusMsgSeq=_cancelCreateStatusMsgSeq;
@property(nonatomic) int memberStatusMsgSeq; // @synthesize memberStatusMsgSeq=_memberStatusMsgSeq;
@property(nonatomic) int createMsgSeq; // @synthesize createMsgSeq=_createMsgSeq;
- (_Bool)updateMsgSeq:(int)arg1 msgSeq:(int)arg2;
- (void)reset;

@end

