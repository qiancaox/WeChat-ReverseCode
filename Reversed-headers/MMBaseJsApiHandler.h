//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@interface MMBaseJsApiHandler : NSObject <PBMessageObserverDelegate>
{
    CDUnknownBlockType _callbackBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)onResponseBizCommReportCgi:(id)arg1;
- (void)addApi_reportCgi:(id)arg1;
- (void)addApi_getPlatform:(id)arg1;
- (void)addApi_userAgent:(id)arg1;
- (void)addApi_idkeyListReport:(id)arg1;
- (void)addApi_idkeyReport:(id)arg1;
- (void)addApi_kvReport:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1;
- (void)dealloc;

@end

