//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WAPlateInputViewDelegate-Protocol.h"

@class MMUILabel, NSObject, NSString, WAPlateInputView, WAPlateItem;
@protocol WAPlateEditViewControllerDelegate;

@interface WAPlateEditViewController : MMUIViewController <WAPlateInputViewDelegate>
{
    _Bool _firstIn;
    NSObject<WAPlateEditViewControllerDelegate> *_delegate;
    WAPlateInputView *_plateInputView;
    WAPlateItem *_plateItem;
    MMUILabel *_inputReminder;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MMUILabel *inputReminder; // @synthesize inputReminder=_inputReminder;
@property(retain, nonatomic) WAPlateItem *plateItem; // @synthesize plateItem=_plateItem;
@property(retain, nonatomic) WAPlateInputView *plateInputView; // @synthesize plateInputView=_plateInputView;
@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(nonatomic) __weak NSObject<WAPlateEditViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onInputDisableFinish;
- (void)OnInputCanFinish:(id)arg1;
- (void)onFinishBtnClicked;
- (void)disMissSelf;
- (void)configPlateItem:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initSubviewsWithStyle:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (id)init;
- (id)initWithPlateItem:(id)arg1 Style:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

