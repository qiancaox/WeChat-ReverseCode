//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGroupMgrExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "textViewDelegate-Protocol.h"

@class CContact, MMTableViewInfo, MMTextView, NSMutableDictionary, NSString, UIView, WCTableViewNormalCellManager;

@interface ChatRoomInfoEditDescViewController : MMUIViewController <IGroupMgrExt, UITextViewDelegate, MMTableViewInfoDelegate, textViewDelegate>
{
    CContact *m_chatRoomContact;
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsOriginChatRoomDesc;
    MMTextView *m_descTextView;
    WCTableViewNormalCellManager *m_descCellInfo;
    NSMutableDictionary *m_dicParam;
    _Bool m_bEditMode;
    _Bool m_bEditable;
    UIView *m_oHeaderView;
    UIView *m_oFooterView;
    _Bool _m_bHideEdit;
    int _scene;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool m_bHideEdit; // @synthesize m_bHideEdit=_m_bHideEdit;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)scrollRectToVisibleForView:(id)arg1;
- (void)adjustDescTextView;
- (void)fixDescViewHeight;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)OnSetChatRoomDesc:(id)arg1 Desc:(id)arg2 Error:(id)arg3;
- (void)checkNeedReload:(id)arg1;
- (void)OnDone;
- (void)OnReturnToChat;
- (void)OnReturn;
- (void)OnEdit;
- (void)OnCancel;
- (void)doCancelEdit;
- (_Bool)isChanged;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeDescEditView;
- (void)makeFooter;
- (id)makeHeader;
- (void)reloadTableData;
- (void)reportEnterScene;
- (void)viewDidLoad;
- (void)updateEditMode;
- (void)updateText:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

