//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol wxNativeLogDelegate;

@protocol IWXPhysxAdaptorAPI <NSObject>
- (void)releaseContext;
- (void)setLogDelegate:(id <wxNativeLogDelegate>)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;
@end

