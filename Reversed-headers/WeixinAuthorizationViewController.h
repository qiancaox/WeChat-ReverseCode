//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMPageSheetBottomViewDelegate-Protocol.h"
#import "WeixinServiceAuthCgiDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UISwitch, WeixinServiceAuthCgi;
@protocol WeixinAuthorizationDelegate;

@interface WeixinAuthorizationViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, ILinkEventExt, WeixinServiceAuthCgiDelegate>
{
    NSMutableDictionary *m_dictToLink;
    int _scene;
    id <WeixinAuthorizationDelegate> _delegate;
    NSArray *_switchTypes;
    NSArray *_noSwitchTypes;
    UISwitch *_oSwitch;
    WeixinServiceAuthCgi *_weixinServiceAuthCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeixinServiceAuthCgi *weixinServiceAuthCgi; // @synthesize weixinServiceAuthCgi=_weixinServiceAuthCgi;
@property(retain, nonatomic) UISwitch *oSwitch; // @synthesize oSwitch=_oSwitch;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSArray *noSwitchTypes; // @synthesize noSwitchTypes=_noSwitchTypes;
@property(retain, nonatomic) NSArray *switchTypes; // @synthesize switchTypes=_switchTypes;
@property(nonatomic) __weak id <WeixinAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)weixinServiceAuthCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)weixinServiceAuthCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)viewDidLoad;
- (void)initDetailView;
- (void)initTitleView;
- (id)initWithSwitchTypes:(id)arg1 noSwitchTypes:(id)arg2 scene:(int)arg3;
- (id)initWithSwitchTypes:(id)arg1 scene:(int)arg2;
- (id)initWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2 scene:(int)arg3;
- (id)initWithSwitchType:(unsigned long long)arg1 scene:(int)arg2;
- (void)initDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

