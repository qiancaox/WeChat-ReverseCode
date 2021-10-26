//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "BrandPaySubcribeMgrExt-Protocol.h"

@class BizAppMsgDetailInfo, BizMessage, BrandProfileMessageBaseCell, BrandProfileMessageSectionData, NSMutableArray, NSString, UIFont, UIImage;

@interface BrandProfileMessageBaseViewModel : MMObject <BrandPaySubcribeMgrExt>
{
    double _viewHeight;
    unsigned long long _cellIndex;
    unsigned long long _cellPosition;
    struct CGSize _titleSize;
    NSMutableArray *_titleLabelStyles;
    struct CGSize _digestSize;
    NSMutableArray *_digestLabelStyles;
    _Bool _isPaid;
    _Bool _isPaySubcribeOpen;
    NSString *_pageIdentifier;
    BrandProfileMessageSectionData *_sectionData;
    id _oldTypeMsg;
    BizMessage *_groupMsg;
    BizAppMsgDetailInfo *_itemMsg;
    unsigned long long _cellCount;
    BrandProfileMessageBaseCell *_cellView;
}

+ (id)createViewModelWithGroupMsg:(id)arg1;
+ (id)createViewModelWithItemMsg:(id)arg1 cellCount:(unsigned long long)arg2 cellIndex:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak BrandProfileMessageBaseCell *cellView; // @synthesize cellView=_cellView;
@property(readonly, nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(readonly, nonatomic) unsigned long long cellCount; // @synthesize cellCount=_cellCount;
@property(readonly, nonatomic) BizAppMsgDetailInfo *itemMsg; // @synthesize itemMsg=_itemMsg;
@property(readonly, nonatomic) BizMessage *groupMsg; // @synthesize groupMsg=_groupMsg;
@property(readonly, nonatomic) id oldTypeMsg; // @synthesize oldTypeMsg=_oldTypeMsg;
@property(nonatomic) __weak BrandProfileMessageSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (void)updateTitle;
- (void)updatePayStatus:(_Bool)arg1;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
@property(readonly, nonatomic) UIImage *paySubcribeTagImage;
@property(readonly, nonatomic) struct CGSize payTagSize;
@property(readonly, nonatomic) _Bool isPaid;
@property(readonly, nonatomic) _Bool isPayContent;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) double digestMaxWidth;
@property(readonly, nonatomic) UIFont *digestFont;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) struct CGSize titleSize;
- (struct CGSize)titleTagImageSize;
- (_Bool)hasTitleTag;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) unsigned long long digestLineNumber;
@property(readonly, nonatomic) unsigned long long titleLineNumber;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) double titleMaxWidth;
@property(readonly, nonatomic) _Bool isShowLargeCover;
@property(readonly, nonatomic) _Bool hasLandingPage;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) double friendsReadHeight;
@property(readonly, nonatomic) NSString *friendsReadStr;
@property(readonly, nonatomic) UIFont *friendsReadFont;
@property(readonly, nonatomic) struct CGSize coverImgSize;
- (id)getVideoCoverImage;
@property(readonly, nonatomic) NSString *coverImgURL;
@property(readonly, nonatomic) NSString *digestStr;
@property(readonly, nonatomic) unsigned long long cellPosition;
- (id)tableViewCellClassName;
@property(readonly, nonatomic) double normalCoverBottomMargin;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (double)normalItemHeight;
- (double)topItemHeight;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;
- (id)initWithGroupMsg:(id)arg1;
- (void)clearLayoutCache;
- (void)dealloc;
- (void)initPaySubcribeStateIfNeed;
- (id)initWithItemMsg:(id)arg1 cellCount:(unsigned long long)arg2 cellIndex:(unsigned long long)arg3;

@end

