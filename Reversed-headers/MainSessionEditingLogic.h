//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class NSString, UITableView;
@protocol MainSessionEditingLogicDelegate;

@interface MainSessionEditingLogic : NSObject <WCActionSheetDelegate, IWCDeviceBrandMgrExt>
{
    id <MainSessionEditingLogicDelegate> _delegate;
    NSString *_confirmingSessionName;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *confirmingSessionName; // @synthesize confirmingSessionName=_confirmingSessionName;
@property(nonatomic) __weak id <MainSessionEditingLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleHideSession:(id)arg1 atCell:(id)arg2;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)deleteSessionAtIndexPath:(id)arg1;
- (void)onConfirmDeleteSessionAtIndex:(id)arg1;
- (void)handleBrandUnsubscribeAtIndexPath:(id)arg1;
- (void)handleCommitDelete:(id)arg1 atTableView:(id)arg2;
- (void)handleEditing:(long long)arg1 forTableView:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

