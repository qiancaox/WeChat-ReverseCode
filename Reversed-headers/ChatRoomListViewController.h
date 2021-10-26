//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MemberListViewController.h"

#import "IContactMgrExt-Protocol.h"
#import "MemberDataDelegate-Protocol.h"

@class NSString;

@interface ChatRoomListViewController : MemberListViewController <MemberDataDelegate, IContactMgrExt>
{
}

- (_Bool)shouldHideTabbarBeforeSearchBarBecomeActive;
- (void)commitEditingStyle:(long long)arg1 ForIndexPath:(id)arg2;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)JumpToChatRoom:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)deleteContact:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)updateCount;
- (_Bool)hasIndexBar;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

