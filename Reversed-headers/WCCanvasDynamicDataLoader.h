//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCCanvasDynamicDataLoaderDelegate;

@interface WCCanvasDynamicDataLoader : MMObject <PBMessageObserverDelegate>
{
    id <WCCanvasDynamicDataLoaderDelegate> _delegate;
}

+ (_Bool)cacheDynamicXML:(id)arg1 forCanvasId:(unsigned long long)arg2;
+ (_Bool)cacheUxDynamicXML:(id)arg1 forCanvasId:(id)arg2 canvasExt:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCanvasDynamicDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleUpdateCanvasStateResponse:(id)arg1;
- (void)updateCanvasStateWithCanvasId:(id)arg1 uxinfo:(id)arg2 enterScene:(int)arg3 adExtInfo:(id)arg4;
- (void)handleGetCouponResponse:(id)arg1;
- (void)getCouponWithAppId:(id)arg1 stockId:(id)arg2 uxInfo:(id)arg3 componentId:(id)arg4;
- (void)handleSearchContactResponse:(id)arg1;
- (void)handleFetchTwistCardIdResponse:(id)arg1;
- (void)fetchTwistCardIdWithSnsId:(id)arg1 uxInfo:(id)arg2 extInfo:(id)arg3 canvasId:(id)arg4 canvasScene:(int)arg5;
- (void)doSearchContactWithAliasname:(id)arg1;
- (void)handleupdateProfileUsernameResponse:(id)arg1;
- (void)updateProfileUsernameWithGroupInfo:(id)arg1 andUxinfo:(id)arg2;
- (void)handleUpdateQrCodeResponse:(id)arg1;
- (void)updateQrCodeWithPoi:(id)arg1 qrExtInfo:(id)arg2 uxInfo:(id)arg3 componentId:(id)arg4 snsId:(id)arg5;
- (void)queryRedEnvelopesSkinStateResp:(id)arg1;
- (void)queryRedEnvelopesSkinState:(id)arg1;
- (void)updateSharedUxinfoResponse:(id)arg1;
- (void)updateSharedUxinfo:(id)arg1 enterScene:(unsigned int)arg2;
- (void)handleGetSmartPhoneResponse:(id)arg1;
- (void)loadSmartPhoneWithSid:(unsigned int)arg1 compId:(unsigned int)arg2 aid:(unsigned long long)arg3 traceId:(id)arg4 uxinfo:(id)arg5;
- (void)handleOfficialSyncResponse:(id)arg1;
- (void)handleFavOfficialItemResponse:(id)arg1;
- (void)handleAdCanvasInfoResponse:(id)arg1;
- (void)handleGameCanvasInfoResponse:(id)arg1;
- (void)handleUxCanvasInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)loadUxCanvasDynamicDataForSyncBuffer:(id)arg1;
- (void)favProduct:(id)arg1;
- (id)getCachedUxXMLForCanvasId:(id)arg1 canvasExt:(id)arg2;
- (void)loadUxDynamicXMLForCanvasId:(id)arg1 canvasExt:(id)arg2 shouldCache:(_Bool)arg3;
- (void)loadDynamicXMLForCanvasId:(unsigned long long)arg1 uxInfo:(id)arg2 enterScene:(unsigned int)arg3;
- (id)getCachedXMLForCanvasId:(unsigned long long)arg1;
- (void)loadGameCanvasDynamicDataForApp:(id)arg1 shareType:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (id)init;

@end

