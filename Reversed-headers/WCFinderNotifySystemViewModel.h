//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WCFinderNotifyCenterUnit;
@protocol WCFinderNotifySystemViewModelDelegate;

@interface WCFinderNotifySystemViewModel : NSObject
{
    _Bool _shouldStopContinue;
    WCFinderNotifyCenterUnit *_systemMentionUnit;
    id <WCFinderNotifySystemViewModelDelegate> _delegate;
    NSArray *_mentionArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *mentionArray; // @synthesize mentionArray=_mentionArray;
@property(nonatomic) _Bool shouldStopContinue; // @synthesize shouldStopContinue=_shouldStopContinue;
@property(nonatomic) __weak id <WCFinderNotifySystemViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderNotifyCenterUnit *systemMentionUnit; // @synthesize systemMentionUnit=_systemMentionUnit;
- (id)cellViewModelArrayWithMentions:(id)arg1;
- (void)updateMentionListMentions:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)addMentionsToMentionList:(id)arg1;
- (void)appendMentionsToMentionList:(id)arg1;
- (void)updateUnread;
- (void)fetchMoreMentions;
- (void)fetchLastSystemMentions;

@end

