//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WCRedesignTextItem;

@interface WCAccountNewPhoneVerifyPageView : UIView
{
    unsigned long long _page;
    WCRedesignTextItem *_passwordTextItem;
    WCRedesignTextItem *_verifyCodeTextItem;
    UIButton *_verifyCodeButton;
    CDUnknownBlockType _tapVerifyCodeButtonHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapVerifyCodeButtonHandler; // @synthesize tapVerifyCodeButtonHandler=_tapVerifyCodeButtonHandler;
@property(retain, nonatomic) UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(retain, nonatomic) WCRedesignTextItem *verifyCodeTextItem; // @synthesize verifyCodeTextItem=_verifyCodeTextItem;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
- (void)changeToPage:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

