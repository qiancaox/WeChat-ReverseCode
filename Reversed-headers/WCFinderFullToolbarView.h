//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedNotRealNameToolbarViewDelegate-Protocol.h"
#import "WCFinderFeedRetryToolBarDelegate-Protocol.h"
#import "WCFinderFeedToolbarActionDelegate-Protocol.h"
#import "WCFinderFeedUploadingToolBarDelegate-Protocol.h"

@class NSString, WCFinderFeedContentVM;
@protocol WCFinderFullToolbarViewDelegate;

@interface WCFinderFullToolbarView : UIView <WCFinderFeedToolbarActionDelegate, WCFinderFeedRetryToolBarDelegate, WCFinderFeedUploadingToolBarDelegate, WCFinderFeedContentVMExt, WCFinderFeedNotRealNameToolbarViewDelegate>
{
    unsigned long long _contentStatus;
    id <WCFinderFullToolbarViewDelegate> _delegate;
    unsigned long long _toolBarStyle;
    UIView *_toolbarView;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) unsigned long long toolBarStyle; // @synthesize toolBarStyle=_toolBarStyle;
@property(nonatomic) __weak id <WCFinderFullToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contentStatus; // @synthesize contentStatus=_contentStatus;
- (void)onFeedLiveOnlineCountChange:(long long)arg1;
- (void)updateLikeTipsShowState;
- (void)clickRecommendUrl:(id)arg1;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 commentOpenStatueChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)finderFeedUploadingToolBarClickCancel:(id)arg1;
- (void)finderFeedRetryToolBarClickRetry:(id)arg1;
- (void)finderFeedRetryToolBarClickCancel:(id)arg1;
- (void)didClickShareAction:(id)arg1;
- (void)didClickCollectionAction;
- (_Bool)isToolbarEnableClickLike;
- (void)didClickLikeAction:(_Bool)arg1;
- (void)finderAuthorClickAllLikeAction;
- (void)viewAllCommentAction;
- (void)finderNotRealNameToolBarClickRealNameLink:(id)arg1;
- (void)finderNotRealNameToolBarClickRetry:(id)arg1;
- (void)finderNotRealNameToolBarClickCancel:(id)arg1;
- (id)getAuthorNotRealNameToolBar;
- (id)getCollectionToolbar;
- (id)getAuthorUploadingToolBar;
- (id)getRetryToolBarWithErrorTips:(id)arg1 buttonOptionFlag:(unsigned long long)arg2;
- (id)getEventNotExistFailWithoutRetryToolBar;
- (id)getFileNotExistFailWithoutRetryToolBar;
- (id)getAuthorCDNLargeFailWithoutRetryToolBar;
- (id)getAuthorUploadFailWithoutRetryToolBar;
- (id)getAuthorUploadFailToolBar;
- (id)getAuthorNormalToolBar;
- (id)getLiveNormalToolBar;
- (void)prepareForReuse;
- (void)onClickPrivateLikeButton;
- (void)initToolbarViewWithStyle:(unsigned long long)arg1;
- (void)cellDidEndDisplayingWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (_Bool)isShowingLikeEducateTips;
- (void)updateToolBarWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2 toolbarDisableConfig:(unsigned long long)arg3;
- (void)unRegisterAllKeyExtension;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

