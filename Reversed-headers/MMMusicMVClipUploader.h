//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderPostDataItemExt-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol MMMusicMVClipUploaderDelegate, OS_dispatch_queue;

@interface MMMusicMVClipUploader : NSObject <WCFinderPostDataItemExt>
{
    NSMutableDictionary *_dictUploadingClip;
    id <MMMusicMVClipUploaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property __weak id <MMMusicMVClipUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemPostUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemPostUpLoadSuccessful:(id)arg1 localTid:(id)arg2;
- (void)fillMoreVideoInformationFrom:(id)arg1 toFinderDataItem:(id)arg2;
- (void)uploadClipItem:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

