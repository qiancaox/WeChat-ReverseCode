//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLoadSessionExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WXGSelectTimeViewControllerDelegate-Protocol.h"

@class MMTableView, MMUIActivityIndicatorView, NSDate, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView, WXGSelectTimeViewController;
@protocol WXGChatLogSessionViewControllerDelegate;

@interface WXGChatLogSessionViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMLoadSessionExt, WXGSelectTimeViewControllerDelegate>
{
    unsigned long long m_curMaxDataCount;
    NSDate *m_beginBeginDate;
    NSDate *m_endEndDate;
    NSDate *m_beginDate;
    NSDate *m_endDate;
    _Bool m_selectAllTime;
    _Bool m_selectTextOnly;
    _Bool _doneWithPop;
    _Bool _showSize;
    _Bool _showSelectTime;
    _Bool _showSelectTextOnly;
    NSString *_rightNavigationTitleString;
    NSString *_leftNavigationTitleString;
    NSString *_emptyTipString;
    NSString *_titleString;
    NSString *_selectTimeTitle;
    NSString *_selectContentTitle;
    NSString *_showNumberSessionTip;
    NSString *_showTimeSelectTip;
    NSString *_showCotentSelectTip;
    id <WXGChatLogSessionViewControllerDelegate> _delegate;
    MMTableView *_sessionTableView;
    UIImageView *_footerImageView;
    UIView *_seperatorLine;
    UIButton *_selectAllButton;
    UIButton *_moreSelectButton;
    UIButton *_nextStepButton;
    UILabel *_moreSelectContentLabel;
    UILabel *_emptyTipLabel;
    UILabel *_loadingLabel;
    UIView *_infoPannel;
    UILabel *_sizeLabel;
    UILabel *_selectTimeLabel;
    UILabel *_selectContentLabel;
    NSMutableArray *_selectedSessionArray;
    WXGSelectTimeViewController *_selectTimeVC;
    MMUIActivityIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) WXGSelectTimeViewController *selectTimeVC; // @synthesize selectTimeVC=_selectTimeVC;
@property(retain, nonatomic) NSMutableArray *selectedSessionArray; // @synthesize selectedSessionArray=_selectedSessionArray;
@property(retain, nonatomic) UILabel *selectContentLabel; // @synthesize selectContentLabel=_selectContentLabel;
@property(retain, nonatomic) UILabel *selectTimeLabel; // @synthesize selectTimeLabel=_selectTimeLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIView *infoPannel; // @synthesize infoPannel=_infoPannel;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) UILabel *moreSelectContentLabel; // @synthesize moreSelectContentLabel=_moreSelectContentLabel;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) UIButton *moreSelectButton; // @synthesize moreSelectButton=_moreSelectButton;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(retain, nonatomic) MMTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(nonatomic) __weak id <WXGChatLogSessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *showCotentSelectTip; // @synthesize showCotentSelectTip=_showCotentSelectTip;
@property(retain, nonatomic) NSString *showTimeSelectTip; // @synthesize showTimeSelectTip=_showTimeSelectTip;
@property(retain, nonatomic) NSString *showNumberSessionTip; // @synthesize showNumberSessionTip=_showNumberSessionTip;
@property(retain, nonatomic) NSString *selectContentTitle; // @synthesize selectContentTitle=_selectContentTitle;
@property(retain, nonatomic) NSString *selectTimeTitle; // @synthesize selectTimeTitle=_selectTimeTitle;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *emptyTipString; // @synthesize emptyTipString=_emptyTipString;
@property(retain, nonatomic) NSString *leftNavigationTitleString; // @synthesize leftNavigationTitleString=_leftNavigationTitleString;
@property(retain, nonatomic) NSString *rightNavigationTitleString; // @synthesize rightNavigationTitleString=_rightNavigationTitleString;
@property(nonatomic) _Bool showSelectTextOnly; // @synthesize showSelectTextOnly=_showSelectTextOnly;
@property(nonatomic) _Bool showSelectTime; // @synthesize showSelectTime=_showSelectTime;
@property(nonatomic) _Bool showSize; // @synthesize showSize=_showSize;
@property(nonatomic) _Bool doneWithPop; // @synthesize doneWithPop=_doneWithPop;
- (void)onSelectTimeViewCompleteWithBeginDate:(id)arg1 endDate:(id)arg2 selectAllTime:(_Bool)arg3 selectTextOnly:(_Bool)arg4;
- (void)onSelectTimeViewCancel;
- (id)getCurrentDateWithoutHourMinSecond;
- (void)onLoadingCurrentSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onFilterdDataFinished;
- (void)onLoadSessionDataFinished;
- (void)onReloadDataItem;
- (void)onLoadDataFinished;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelectTime;
- (void)onSelecteAll;
- (void)onDone;
- (void)onCancel;
- (void)p_popViewController;
- (id)getDataSizeShowString:(id)arg1;
- (id)getSelectButtonTitle;
- (struct CGRect)getTableViewFrame;
- (_Bool)whetherSelectAllTime;
- (_Bool)whetherSessionItemSelected:(id)arg1;
- (void)loadMoreData;
- (unsigned long long)getDataSize:(id)arg1;
- (_Bool)isSessionDataFull;
- (_Bool)isSessionDataEmpty;
- (void)updateInfoPannel;
- (void)initInfoPannel;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)resetLoadingTip:(id)arg1;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)updateView;
- (void)initView;
- (void)resetBeginDate;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

