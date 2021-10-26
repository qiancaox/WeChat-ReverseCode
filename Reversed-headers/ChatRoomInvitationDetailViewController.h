//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "OpenIMContactInfoExt-Protocol.h"
#import "WeixinContactInfoExt-Protocol.h"

@class CContact, CMessageWrap, MMHeadImageView, MMTableView, MMTableViewInfo, MMUILabel, NSString, UILabel, UIView;
@protocol ChatRoomInvitationDetailDelegate;

@interface ChatRoomInvitationDetailViewController : MMUIViewController <ILinkEventExt, OpenIMContactInfoExt, MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, IContactMgrExt, IGroupMgrExt, WeixinContactInfoExt>
{
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    MMHeadImageView *m_headImageView;
    UILabel *m_nickNameView;
    MMUILabel *m_labelSubDesc;
    UILabel *m_inviteNumberView;
    UILabel *m_inviteReasonView;
    UIView *m_seperateLineView;
    CContact *m_inviterContact;
    double _lastScreenWidth;
    CContact *m_chatRoomContact;
    CMessageWrap *m_messageWrap;
    id <ChatRoomInvitationDetailDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatRoomInvitationDetailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CMessageWrap *m_messageWrap; // @synthesize m_messageWrap;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)reportApproveChatRoomInvitationWithActionType:(long long)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)approveInvitation;
- (void)OnApproveChatRoomInvitation:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3 withUserData:(id)arg4;
- (void)approveMemberFromOwner;
- (void)OnClickHeadImage;
- (void)onModifyContact:(id)arg1;
- (void)onCheckDisableAllOperation:(id)arg1 Disable:(_Bool *)arg2;
- (void)openContactInfo:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (double)getMemListCellHeight;
- (void)makeMemListSection:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genFooterView;
- (id)genHeaderView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initView;
- (void)reloadData;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

