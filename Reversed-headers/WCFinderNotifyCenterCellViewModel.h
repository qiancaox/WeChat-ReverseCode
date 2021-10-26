//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderPrivateAccountExt-Protocol.h"

@class NSArray, NSString, WCFinderContact, WCFinderMention;
@protocol WCFinderNotifyCenterCellViewModelDelegate;

@interface WCFinderNotifyCenterCellViewModel : NSObject <WCFinderPrivateAccountExt>
{
    _Bool _isAuthor;
    _Bool _isFinder;
    _Bool _isCommentRelated;
    _Bool _canLink;
    _Bool _isPureText;
    _Bool _isAggregated;
    id <WCFinderNotifyCenterCellViewModelDelegate> _delegate;
    double _cellHeight;
    NSString *_headURL;
    NSString *_thumbURL;
    NSString *_title;
    NSString *_suffixTitle;
    NSString *_content;
    NSString *_timeString;
    unsigned long long _type;
    NSString *_objectTid;
    NSString *_refContent;
    NSString *_descriptionText;
    unsigned long long _mentionID;
    unsigned long long _refCommentID;
    unsigned long long _linkType;
    NSString *_linkURL;
    NSString *_miniAppName;
    NSString *_feedText;
    NSString *_nonceID;
    WCFinderContact *_contact;
    NSString *_navigationTitle;
    NSArray *_aggregatedHeadURLArray;
    WCFinderMention *_mention;
    NSString *_reuseIdentifier;
    NSString *_username;
}

+ (id)notifyCenterCellRegisterInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(readonly, copy, nonatomic) NSArray *aggregatedHeadURLArray; // @synthesize aggregatedHeadURLArray=_aggregatedHeadURLArray;
@property(readonly, nonatomic) _Bool isAggregated; // @synthesize isAggregated=_isAggregated;
@property(readonly, copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(readonly, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(readonly, copy, nonatomic) NSString *feedText; // @synthesize feedText=_feedText;
@property(readonly, nonatomic) _Bool isPureText; // @synthesize isPureText=_isPureText;
@property(readonly, copy, nonatomic) NSString *miniAppName; // @synthesize miniAppName=_miniAppName;
@property(readonly, copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) _Bool canLink; // @synthesize canLink=_canLink;
@property(readonly, nonatomic) _Bool isCommentRelated; // @synthesize isCommentRelated=_isCommentRelated;
@property(readonly, nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(readonly, nonatomic) unsigned long long mentionID; // @synthesize mentionID=_mentionID;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *refContent; // @synthesize refContent=_refContent;
@property(readonly, nonatomic) _Bool isFinder; // @synthesize isFinder=_isFinder;
@property(readonly, nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(readonly, copy, nonatomic) NSString *objectTid; // @synthesize objectTid=_objectTid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *suffixTitle; // @synthesize suffixTitle=_suffixTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(readonly, copy, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) __weak id <WCFinderNotifyCenterCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPrivateAccountFollowApplyStateChanged:(_Bool)arg1;
- (long long)finderObjectType;
- (id)getDisplayContent;
- (void)acceptFollowApply;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (id)getMentionTitleWithMention:(id)arg1;
- (id)getSuffixTitleWithCount:(unsigned long long)arg1;
- (_Bool)isFollowMentionType;
- (_Bool)canShowFansProfile;
- (void)dealloc;
- (id)initWithMention:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

