//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerHttpMediaWrap.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, WSVideoDotInfo;

@interface WSVideoModel : WCPlayerHttpMediaWrap <NSCopying>
{
    _Bool _hasReorderUrl;
    _Bool _isGoodLook;
    _Bool _ifExpandCommentView;
    _Bool _needEducate;
    _Bool _videoApiFailHasRetryOnce;
    _Bool _hasRetryToUpdateVideoApiOrCdnUrl;
    _Bool _startByAutoPlay;
    _Bool _bForbidOperate;
    _Bool _bForbidFeedBack;
    _Bool _bForbidFeedBackBySvr;
    _Bool _isVideoVoted;
    _Bool _hasShowAttachView;
    _Bool _hasTriggerRecommendInsert;
    unsigned int _videoApiExpireTime;
    unsigned int _fileSize;
    unsigned int _pxWidth;
    unsigned int _pxHeight;
    unsigned int _uiUrlType;
    unsigned int _bitRate;
    unsigned int _cdnScene;
    unsigned int _cdnSourceType;
    unsigned int _duration;
    unsigned int _playCount;
    unsigned int _category;
    unsigned int _realShareCategory;
    unsigned int _resultType;
    unsigned int _type;
    unsigned int _itemType;
    unsigned int _globalColikeCnt;
    unsigned int _externalVideo;
    int _eUrlStatus;
    unsigned int _replayCount;
    unsigned int _pauseCount;
    unsigned int _videoVotes;
    unsigned int _friendVotes;
    unsigned int _videoVoteSthreshold;
    unsigned int _friendVoteSthreshold;
    unsigned int _switchFlag;
    unsigned int _videoSecondType;
    unsigned int _insertPos;
    unsigned int _requestDuration;
    unsigned int _requestPercent;
    NSString *_vid;
    NSString *_title;
    NSString *_titleUrl;
    NSString *_desc;
    NSString *_docUrl;
    NSString *_docId;
    NSString *_videoPlatform;
    NSString *_videoApi;
    NSString *_thumbUrl;
    NSArray *_arrVideoUrl;
    NSString *_shareString;
    NSString *_videoChannelTitle;
    NSString *_sourceImgUrl;
    NSString *_source;
    NSString *_sourceUrl;
    NSString *_bizUserName;
    long long _sourceJumpType;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_shareImgUrl;
    NSString *_strPlayCount;
    NSString *_expand;
    NSString *_searchId;
    NSString *_openId;
    NSString *_sessionId;
    NSString *_itemExpand;
    NSMutableArray *_extParams;
    NSString *_byPass;
    NSArray *_arrTagInfo;
    double _cacheForTitleHeight;
    NSString *_bigThumbUrl;
    NSString *_smallThumbUrl;
    unsigned long long _ui64PlayStartTime;
    unsigned long long _ui64PlayEndTime;
    NSArray *_arrFeedBack;
    NSDictionary *_mainFeedBack;
    NSArray *_arrLikeFriends;
    NSString *_originVideoId;
    WSVideoModel *_attachVideoModel;
    WSVideoDotInfo *_dotInfo;
}

+ (long long)NetType;
+ (_Bool)IsOnDawangEnv;
+ (id)AttachFlowFreeParamsWithUrlIfNeeded:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)containerFromJSON:(id)arg1;
+ (id)fromXMLString:(id)arg1;
+ (id)fromJSON:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseFromWCVideoFlowInfo:(id)arg1;
+ (id)parseVideoDotInfoList:(id)arg1;
+ (id)ParseFromNewDictionary:(id)arg1;
+ (id)GetValidFeedBackArray:(id)arg1;
+ (id)GetMainFeedBackButtonDic:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasTriggerRecommendInsert; // @synthesize hasTriggerRecommendInsert=_hasTriggerRecommendInsert;
@property(retain, nonatomic) WSVideoDotInfo *dotInfo; // @synthesize dotInfo=_dotInfo;
@property(nonatomic) _Bool hasShowAttachView; // @synthesize hasShowAttachView=_hasShowAttachView;
@property(retain, nonatomic) WSVideoModel *attachVideoModel; // @synthesize attachVideoModel=_attachVideoModel;
@property(nonatomic) unsigned int requestPercent; // @synthesize requestPercent=_requestPercent;
@property(nonatomic) unsigned int requestDuration; // @synthesize requestDuration=_requestDuration;
@property(nonatomic) unsigned int insertPos; // @synthesize insertPos=_insertPos;
@property(retain, nonatomic) NSString *originVideoId; // @synthesize originVideoId=_originVideoId;
@property(nonatomic) unsigned int videoSecondType; // @synthesize videoSecondType=_videoSecondType;
@property(nonatomic) unsigned int switchFlag; // @synthesize switchFlag=_switchFlag;
@property(retain, nonatomic) NSArray *arrLikeFriends; // @synthesize arrLikeFriends=_arrLikeFriends;
@property(nonatomic) _Bool isVideoVoted; // @synthesize isVideoVoted=_isVideoVoted;
@property(nonatomic) unsigned int friendVoteSthreshold; // @synthesize friendVoteSthreshold=_friendVoteSthreshold;
@property(nonatomic) unsigned int videoVoteSthreshold; // @synthesize videoVoteSthreshold=_videoVoteSthreshold;
@property(nonatomic) unsigned int friendVotes; // @synthesize friendVotes=_friendVotes;
@property(nonatomic) unsigned int videoVotes; // @synthesize videoVotes=_videoVotes;
@property(retain, nonatomic) NSDictionary *mainFeedBack; // @synthesize mainFeedBack=_mainFeedBack;
@property(retain, nonatomic) NSArray *arrFeedBack; // @synthesize arrFeedBack=_arrFeedBack;
@property(nonatomic) _Bool bForbidFeedBackBySvr; // @synthesize bForbidFeedBackBySvr=_bForbidFeedBackBySvr;
@property(nonatomic) _Bool bForbidFeedBack; // @synthesize bForbidFeedBack=_bForbidFeedBack;
@property(nonatomic) _Bool bForbidOperate; // @synthesize bForbidOperate=_bForbidOperate;
@property(nonatomic) unsigned int pauseCount; // @synthesize pauseCount=_pauseCount;
@property(nonatomic) unsigned int replayCount; // @synthesize replayCount=_replayCount;
@property(nonatomic) unsigned long long ui64PlayEndTime; // @synthesize ui64PlayEndTime=_ui64PlayEndTime;
@property(nonatomic) unsigned long long ui64PlayStartTime; // @synthesize ui64PlayStartTime=_ui64PlayStartTime;
@property(nonatomic) _Bool startByAutoPlay; // @synthesize startByAutoPlay=_startByAutoPlay;
@property(retain, nonatomic) NSString *smallThumbUrl; // @synthesize smallThumbUrl=_smallThumbUrl;
@property(retain, nonatomic) NSString *bigThumbUrl; // @synthesize bigThumbUrl=_bigThumbUrl;
@property(nonatomic) int eUrlStatus; // @synthesize eUrlStatus=_eUrlStatus;
@property(nonatomic) double cacheForTitleHeight; // @synthesize cacheForTitleHeight=_cacheForTitleHeight;
@property(retain, nonatomic) NSArray *arrTagInfo; // @synthesize arrTagInfo=_arrTagInfo;
@property(nonatomic) unsigned int externalVideo; // @synthesize externalVideo=_externalVideo;
@property(retain, nonatomic) NSString *byPass; // @synthesize byPass=_byPass;
@property(retain, nonatomic) NSMutableArray *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) _Bool hasRetryToUpdateVideoApiOrCdnUrl; // @synthesize hasRetryToUpdateVideoApiOrCdnUrl=_hasRetryToUpdateVideoApiOrCdnUrl;
@property(nonatomic) _Bool videoApiFailHasRetryOnce; // @synthesize videoApiFailHasRetryOnce=_videoApiFailHasRetryOnce;
@property(nonatomic) unsigned int globalColikeCnt; // @synthesize globalColikeCnt=_globalColikeCnt;
@property(nonatomic) _Bool needEducate; // @synthesize needEducate=_needEducate;
@property(nonatomic) _Bool ifExpandCommentView; // @synthesize ifExpandCommentView=_ifExpandCommentView;
@property(nonatomic) _Bool isGoodLook; // @synthesize isGoodLook=_isGoodLook;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemExpand; // @synthesize itemExpand=_itemExpand;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int realShareCategory; // @synthesize realShareCategory=_realShareCategory;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *expand; // @synthesize expand=_expand;
@property(retain, nonatomic) NSString *strPlayCount; // @synthesize strPlayCount=_strPlayCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl=_shareImgUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) long long sourceJumpType; // @synthesize sourceJumpType=_sourceJumpType;
@property(retain, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl=_sourceImgUrl;
@property(retain, nonatomic) NSString *videoChannelTitle; // @synthesize videoChannelTitle=_videoChannelTitle;
@property(retain, nonatomic) NSString *shareString; // @synthesize shareString=_shareString;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int cdnSourceType; // @synthesize cdnSourceType=_cdnSourceType;
@property(nonatomic) unsigned int cdnScene; // @synthesize cdnScene=_cdnScene;
@property(nonatomic) unsigned int bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) unsigned int uiUrlType; // @synthesize uiUrlType=_uiUrlType;
@property(nonatomic) unsigned int pxHeight; // @synthesize pxHeight=_pxHeight;
@property(nonatomic) unsigned int pxWidth; // @synthesize pxWidth=_pxWidth;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSArray *arrVideoUrl; // @synthesize arrVideoUrl=_arrVideoUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) unsigned int videoApiExpireTime; // @synthesize videoApiExpireTime=_videoApiExpireTime;
@property(retain, nonatomic) NSString *videoApi; // @synthesize videoApi=_videoApi;
@property(retain, nonatomic) NSString *videoPlatform; // @synthesize videoPlatform=_videoPlatform;
@property(retain, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(retain, nonatomic) NSString *docUrl; // @synthesize docUrl=_docUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *titleUrl; // @synthesize titleUrl=_titleUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (id)generateJSONForArrTagInfo;
- (id)toXML;
- (id)parseToWCVideoFlowInfo;
- (id)getVoteDisplayFriendUsrList;
- (unsigned int)getVoteDisplayLogType;
- (_Bool)isLikeInfoValid;
- (id)transStringForCount:(unsigned int)arg1;
- (void)onOperateVote:(_Bool)arg1;
- (void)setMiniVideo:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isMiniVideo;
@property(readonly, nonatomic, getter=isVoteSwitchOpen) _Bool isVoteSwitchOpen;
@property(readonly, nonatomic, getter=isGoodLookOpen) _Bool isGoodLookOpen;
- (void)triggeredRecommendInsert;
- (_Bool)shouldRecommendVideoInsert;
- (void)mergeVideoApiAttrFromVideoModel:(id)arg1;
- (id)getWSVideoUrl;
- (_Bool)canAutoPlay;
- (void)compatPagingModel;
- (void)compatShareModel;
- (void)adjustUrlIfNeeded;
- (void)doCopyFromVideoModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

