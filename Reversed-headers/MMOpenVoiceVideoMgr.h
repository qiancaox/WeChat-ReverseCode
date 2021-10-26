//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoMgr : NSObject
{
    struct mutex mutex_;
    // Error parsing type: {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, name: ready_
    unsigned int _logCnt;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSMutableDictionary *_views;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *views; // @synthesize views=_views;
@property(nonatomic) unsigned int logCnt; // @synthesize logCnt=_logCnt;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)releaseAll;
- (void)updateCaptureSize:(int)arg1;
- (void)getVideoSize:(id)arg1 got:(_Bool *)arg2 width:(unsigned int *)arg3 height:(unsigned int *)arg4;
- (id)getScreenSize:(id)arg1;
- (id)getVideoSize:(id)arg1;
- (void)updateMembers:(id)arg1;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 isScreen:(_Bool)arg6;
- (void)removeView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)insertView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)exit;
- (void)setUp;
- (void)dealloc;
- (id)init;

@end

