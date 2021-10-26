//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAcceptAgreementBaseViewController.h"

#import "MMAcceptAgreementCommonHeadViewDelegate-Protocol.h"

@class MMFinderLiveTask, NSString, UIButton, UIImage, UIView;
@protocol WCFinderLiveCompleteAgreementResultViewControllerDelegate;

@interface WCFinderLiveCompleteAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate>
{
    UIButton *m_actionBtn;
    NSString *m_headTitle;
    NSString *m_headContent;
    NSString *m_headContentWithLink;
    _Bool m_isWeakActionBtn;
    UIImage *m_logoSVGImage;
    NSString *m_actionBtnStr;
    id <WCFinderLiveCompleteAgreementResultViewControllerDelegate> _m_delegate;
    MMFinderLiveTask *_liveTask;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) __weak id <WCFinderLiveCompleteAgreementResultViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isWeakActionBtn; // @synthesize m_isWeakActionBtn;
@property(retain, nonatomic) NSString *m_actionBtnStr; // @synthesize m_actionBtnStr;
@property(retain, nonatomic) UIImage *m_logoSVGImage; // @synthesize m_logoSVGImage;
- (_Bool)useTransparentNavibar;
- (void)setupBlurBackground;
- (void)onHeadContentLinkClicked:(id)arg1;
- (void)doAction;
- (void)layoutActionBtn;
- (void)layoutCommonHeadView;
- (void)layoutView;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithHeadTitle:(id)arg1 headContentWithLink:(id)arg2 liveTask:(id)arg3;
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2 liveTask:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

