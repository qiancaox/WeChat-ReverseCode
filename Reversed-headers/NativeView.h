//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterPlatformView-Protocol.h"

@class FlutterMethodChannel, NSString, UIView;

@interface NativeView : NSObject <FlutterPlatformView>
{
    UIView *_view;
    FlutterMethodChannel *_channel;
}

- (void).cxx_destruct;
- (id)view;
- (void)buttonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

