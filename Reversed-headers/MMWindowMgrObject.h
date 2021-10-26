//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIWindow, MMWindowViewController, UIImageView;

@interface MMWindowMgrObject : NSObject
{
    MMWindowViewController *m_windowVC;
    MMUIWindow *m_Window;
    _Bool isChangeStatusBarStyle;
    _Bool isRequestKeyWindow;
    _Bool isNeedNavCtrl;
    int animationType;
    int transitionOptions;
    long long statusBarStyle;
    long long lastStatusBarStyle;
    UIImageView *blurBgImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedNavCtrl; // @synthesize isNeedNavCtrl;
@property(retain, nonatomic) UIImageView *blurBgImageView; // @synthesize blurBgImageView;
@property(nonatomic) _Bool isRequestKeyWindow; // @synthesize isRequestKeyWindow;
@property(nonatomic) int transitionOptions; // @synthesize transitionOptions;
@property(nonatomic) _Bool isChangeStatusBarStyle; // @synthesize isChangeStatusBarStyle;
@property(nonatomic) long long lastStatusBarStyle; // @synthesize lastStatusBarStyle;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle;
@property(nonatomic) int animationType; // @synthesize animationType;
- (id)description;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isObjectEqual:(id)arg1;
- (id)getMMWindow;
- (void)setMMWindow:(id)arg1;
- (id)getMMWindowVC;
- (void)setMMWindowVC:(id)arg1;

@end

