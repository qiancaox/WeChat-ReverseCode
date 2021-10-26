//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCPlayerBufferEvent : NSObject
{
    unsigned int _seq;
    float _playbackTime;
    float _bufferedLen;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _bufferStartDataLen;
    unsigned long long _bufferEndDataLen;
    unsigned long long _bufferType;
}

@property(nonatomic) float bufferedLen; // @synthesize bufferedLen=_bufferedLen;
@property(nonatomic) unsigned long long bufferType; // @synthesize bufferType=_bufferType;
@property(nonatomic) unsigned long long bufferEndDataLen; // @synthesize bufferEndDataLen=_bufferEndDataLen;
@property(nonatomic) unsigned long long bufferStartDataLen; // @synthesize bufferStartDataLen=_bufferStartDataLen;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) float playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
- (id)getBufferReportVal;
- (id)getBufferEventDesc;
- (unsigned long long)getBufferLen;
- (unsigned long long)getBufferDuration;
- (id)initWithBufferType:(unsigned long long)arg1;

@end

