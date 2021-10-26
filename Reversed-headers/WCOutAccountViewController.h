//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IWCOutFacadeExt-Protocol.h"
#import "InviteFriendLogicDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, MMUILabel, NSString, UIImageView, UILabel, WCOutInviteFriendLogic;

@interface WCOutAccountViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, InviteFriendLogicDelegate, IWCOutFacadeExt, ILinkEventExt>
{
    unsigned int _clickDetailCount;
    unsigned int _clickFeedbackCount;
    unsigned int _clickReadmeCount;
    UIImageView *_recordRedDot;
    UILabel *_remainingTime;
    UILabel *_invalidDate;
    MMUILabel *_discountLabel;
    UIImageView *_chargeRedDot;
    UIImageView *_msgRedDot;
    MMUILabel *_tipsPackageLabel;
    NSString *_enterTs;
    NSString *_outTs;
    MMTableView *_tableView;
    WCOutInviteFriendLogic *_inviteFriendLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic; // @synthesize inviteFriendLogic=_inviteFriendLogic;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int clickReadmeCount; // @synthesize clickReadmeCount=_clickReadmeCount;
@property(nonatomic) unsigned int clickFeedbackCount; // @synthesize clickFeedbackCount=_clickFeedbackCount;
@property(nonatomic) unsigned int clickDetailCount; // @synthesize clickDetailCount=_clickDetailCount;
@property(retain, nonatomic) NSString *outTs; // @synthesize outTs=_outTs;
@property(retain, nonatomic) NSString *enterTs; // @synthesize enterTs=_enterTs;
@property(retain, nonatomic) MMUILabel *tipsPackageLabel; // @synthesize tipsPackageLabel=_tipsPackageLabel;
@property(retain, nonatomic) UIImageView *msgRedDot; // @synthesize msgRedDot=_msgRedDot;
@property(retain, nonatomic) UIImageView *chargeRedDot; // @synthesize chargeRedDot=_chargeRedDot;
@property(retain, nonatomic) MMUILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *invalidDate; // @synthesize invalidDate=_invalidDate;
@property(retain, nonatomic) UILabel *remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) UIImageView *recordRedDot; // @synthesize recordRedDot=_recordRedDot;
- (void)onCheckFeeClicked;
- (double)getAccountCellHeight;
- (id)getPackageArr;
- (void)onClickActionSheetShareRecord;
- (void)onClickActionSheetWebRecharge;
- (void)onClickMoreBtn;
- (void)configRightBarButtonItem;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateNewxmlInfo;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeMsgCell:(id)arg1;
- (void)makeRecordCell:(id)arg1;
- (void)refreshDisCountLabel;
- (void)refreshTipsPackageLabel;
- (void)makePackageCell:(id)arg1;
- (void)makeChargeCell:(id)arg1;
- (void)makeAccountCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)getRealSectionIndex:(long long)arg1;
- (void)finishShowAnimation;
- (void)didReceiveCouponResponse;
- (void)clickAgreementButton;
- (void)clickFAQButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)configCloseFuntionFooterView;
- (void)configFAQbutton;
- (void)configTableView;
- (void)configModel;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

