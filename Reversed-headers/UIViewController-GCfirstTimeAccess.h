//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, WXMASViewAttribute;

@interface UIViewController (GCfirstTimeAccess)
- (_Bool)isFirstTimeAccessKey:(id)arg1 identifier:(id)arg2;
- (id)firstTimeAccessDict;
@property(retain, nonatomic) NSDictionary *reportParamsDict;
@property(nonatomic) long long reportTag;
@property(retain, nonatomic) NSString *sessionId;
- (_Bool)isHalfPage;
- (void)setIsHalfPage:(_Bool)arg1;
- (id)liveOpenParam;
- (void)setLiveOpenParam:(id)arg1;
- (_Bool)needShowLiveMinizeWindow;
- (void)setNeedShowLiveMinimizeWindow:(_Bool)arg1;
- (void)setIsPreviewingInForceTouch:(_Bool)arg1;
- (_Bool)isPreviewingInForceTouch;
@property(readonly, nonatomic) WXMASViewAttribute *mas_bottomLayoutGuideBottom;
@property(readonly, nonatomic) WXMASViewAttribute *mas_bottomLayoutGuideTop;
@property(readonly, nonatomic) WXMASViewAttribute *mas_bottomLayoutGuide;
@property(readonly, nonatomic) WXMASViewAttribute *mas_topLayoutGuideBottom;
@property(readonly, nonatomic) WXMASViewAttribute *mas_topLayoutGuideTop;
@property(readonly, nonatomic) WXMASViewAttribute *mas_topLayoutGuide;
- (_Bool)hasPreviousFullScreenInNavCon:(id)arg1 currVC:(id)arg2;
- (_Bool)shouldForceFullScreen;
@property(nonatomic) _Bool isPresentedFromPreNavgationController; // @dynamic isPresentedFromPreNavgationController;
@end

