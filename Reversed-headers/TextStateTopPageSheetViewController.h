//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "TextStateCardContentViewDelegate-Protocol.h"

@class CContact, NSString, TextStateCardContentView, UIButton, UIView;
@protocol TextStateTopPageSheetViewControllerDelegate;

@interface TextStateTopPageSheetViewController : MMWindowViewController <TextStateCardContentViewDelegate>
{
    id <TextStateTopPageSheetViewControllerDelegate> _delegate;
    CContact *_contact;
    UIView *_maskView;
    UIButton *_backgroundButton;
    TextStateCardContentView *_cardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateCardContentView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <TextStateTopPageSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissCardViewController;
- (void)didSelectActivityStateIcon:(id)arg1;
- (void)enterSelfLikeList:(id)arg1;
- (void)onTapBlankArea:(id)arg1;
- (void)onTapSourceButton:(id)arg1;
- (void)onTapBackgroundButton;
- (void)dismissPageSheetAnimated:(_Bool)arg1;
- (void)presentPageSheetAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

