//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentPubbleCellFrame.h"

#import "ILinkEventExt-Protocol.h"

@class MMFinderLiveTask, NSMutableDictionary, NSString;

@interface MMFinderLiveTableStyleCommentPubbleCellFrame : MMLiveCommentPubbleCellFrame <ILinkEventExt>
{
    long long _layoutResult;
    NSMutableDictionary *_extraLayoutInfoDict;
}

+ (double)contentLeftMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraLayoutInfoDict; // @synthesize extraLayoutInfoDict=_extraLayoutInfoDict;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)currentExtraLayoutInfo;
- (id)getFansGroupInfo;
- (id)getFansGroupName:(id)arg1;
- (unsigned int)getFansGroupRank:(id)arg1;
- (_Bool)hasFansGroupRank:(id)arg1;
- (unsigned int)getGlobalRank:(id)arg1;
- (_Bool)hasGlobalRank:(id)arg1;
- (unsigned int)getRawardRank:(id)arg1;
- (_Bool)hasRewardRank:(id)arg1;
- (_Bool)hasRank:(id)arg1;
- (struct CGRect)frameOfLastLine:(id)arg1;
- (double)getLastLineMaxY:(id)arg1;
- (long long)getCurrentLines:(id)arg1;
@property(readonly, nonatomic) _Bool isCombRewardSuffixOverLine;
- (_Bool)isCombRewardMultiline;
- (_Bool)isCommentContentMultiline;
- (void)calculateSizeForSubscribeWithComment:(id)arg1;
- (void)calculateSizeForLivePOIWithComment:(id)arg1;
- (void)calculateSizeForRedPacketWithComment:(id)arg1;
- (void)calculateSizeForRewardWithComment:(id)arg1 signSize:(struct CGSize)arg2 giftImageSize:(struct CGSize)arg3 rewardCountTextSize:(struct CGSize)arg4;
- (void)calculateSizeForComboLiveRewardWithComment:(id)arg1;
- (void)calculateSizeForAnchorNoticeWithComment:(id)arg1;
- (id)generateDisplayedContentForDataItem:(id)arg1 isExpanded:(_Bool)arg2;
- (void)calculateSizeForLiveAnchorTopicWithComment:(id)arg1;
- (void)calculateSizeForOfficialNoticeWithComment:(id)arg1;
- (void)calculateSizeForUserWithComment:(id)arg1;
- (void)lazyCaculateSizeCurrent;
- (void)calculateIfNeeded;
- (_Bool)isCurrentLayouted;
- (_Bool)isLiveTopicExpand;
- (id)contentArrStyles;
- (struct CGSize)cellSize;
- (struct CGSize)contentSize;
- (double)contentTopWithSignTextView;
- (double)contentLeftWithSignTextView;
- (double)signTextViewInsetLeft;
- (double)signTextViewInsetTop;
- (double)signTextViewTop;
- (double)signTextViewLeft;
- (double)commentPubbleInsetBottom;
- (double)commentPubbleInsetTop;
- (long long)fansGroupUIStyle;
- (long long)globalSignViewUIStyle;
- (id)signLabelFont;
- (id)labelFont;
- (void)caculateSizeForComment:(id)arg1;
- (id)getDisplayStr:(id)arg1;
- (id)layoutIdentityKey;
- (long long)layoutResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

