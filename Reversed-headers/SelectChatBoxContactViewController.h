//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableSet, NSString;
@protocol SelectChatBoxContactViewControllerDelegate;

@interface SelectChatBoxContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isMultiSelect;
    id <SelectChatBoxContactViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_selectedContacts;
    NSMutableSet *_selectedUsernames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *selectedUsernames; // @synthesize selectedUsernames=_selectedUsernames;
@property(retain, nonatomic) NSMutableArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isMultiSelect; // @synthesize isMultiSelect=_isMultiSelect;
@property(nonatomic) __weak id <SelectChatBoxContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deselectSession:(id)arg1;
- (void)selectSession:(id)arg1;
- (_Bool)isSessionSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCancel;
- (void)onConfirmButton;
- (void)updateNavButtons;
- (void)initUI;
- (void)viewDidLoad;
- (id)initWithSelectedUsernames:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

