//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IExptServiceExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MultiTalkJumpAppWordingInfo, NSString;

@interface MultiTalkJumpAppMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    int _type;
    NSString *_schemePrefix;
    NSString *_h5UrlPrefix;
    NSString *_iconUrlString;
    MultiTalkJumpAppWordingInfo *_zhCNWordingInfo;
    MultiTalkJumpAppWordingInfo *_zhHKWordingInfo;
    MultiTalkJumpAppWordingInfo *_enWordingInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *enWordingInfo; // @synthesize enWordingInfo=_enWordingInfo;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *zhHKWordingInfo; // @synthesize zhHKWordingInfo=_zhHKWordingInfo;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *zhCNWordingInfo; // @synthesize zhCNWordingInfo=_zhCNWordingInfo;
@property(retain, nonatomic) NSString *iconUrlString; // @synthesize iconUrlString=_iconUrlString;
@property(retain, nonatomic) NSString *h5UrlPrefix; // @synthesize h5UrlPrefix=_h5UrlPrefix;
@property(retain, nonatomic) NSString *schemePrefix; // @synthesize schemePrefix=_schemePrefix;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)onExptItemListChange;
- (void)reportJumpAppWithType:(int)arg1 andPositionType:(int)arg2;
- (void)reportOpenHtmlWithType:(int)arg1 htmlUrlString:(id)arg2 andPositionType:(int)arg3;
- (void)reportConfirmJumpDialogWithType:(int)arg1;
- (void)reportCancelJumpDialogWithType:(int)arg1;
- (void)reportShowJumpDialogWithType:(int)arg1;
- (void)reportBannerViewClickedWithType:(int)arg1;
- (void)reportBannerViewExposureWithType:(int)arg1;
- (void)openHtmlUrl:(id)arg1 inViewController:(id)arg2;
- (void)jumpToAppWithSchemeUrlString:(id)arg1 andHtmlUrlString:(id)arg2 inViewController:(id)arg3 type:(int)arg4 positionType:(int)arg5;
- (void)jumpToAppFromBannerWithInfo:(id)arg1 inViewController:(id)arg2;
- (void)showJumpAppTipsWithInfo:(id)arg1 inViewController:(id)arg2;
- (id)getCurrentAppInfo;
- (id)currentWordingInfoFromExpt;
- (id)currentDefaultIconName;
- (id)htmlUrlStringWithPositionType:(int)arg1;
- (id)schemeUrlStringWithPositionType:(int)arg1;
- (id)getWordingInfo;
- (void)updateWordingInfoFromJsonString:(id)arg1;
- (void)checkAndUpdateData;
- (void)clearData;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

