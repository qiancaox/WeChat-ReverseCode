//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidasIAPProgressHUD;

@interface MidasIAPLoadingView : NSObject
{
    int _type;
    MidasIAPProgressHUD *_hud;
}

+ (id)shareInstance;
@property(retain, nonatomic) MidasIAPProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)onDidBecomeActive;
- (void)onWillResignActive;
- (_Bool)isShowing;
- (void)recover;
- (void)hold;
- (void)close;
- (void)show;
- (id)init;
- (void)dealloc;

@end

