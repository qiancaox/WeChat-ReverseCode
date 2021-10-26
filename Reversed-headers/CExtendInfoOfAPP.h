//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class AppMMScheduleItem, AppMsgShareItem, AppProductItem, AppTVItem, BrandMpVideoItem, CMessageWrap, CardTicketItem, EmoticonAppMsgItem, EmoticonSharedItem, EmotionDesignerSharedItem, EmotionPageSharedItem, FavoritesItem, GameLifeItem, GameShareNameCard, GiftCardItem, HardWareItem, LiteAppSharedItem, MMLiveAppMsgInnerItem, MMMusicShareItem, MMTemplateMsg3rdAppShowItem, MallProductItem, MessageExpItem, NSArray, NSMutableDictionary, NSString, NotifyMsgItem, OpenSDKAppBrandItem, PatMessageWrap, ScanCodeHistoryItem, WAAppMsgItem, WCCanvasPageItem, WCFinderContentColumnSharedItem, WCFinderLiveProductShareItem, WCFinderLiveShareItem, WCFinderMessageGuaranteeItem, WCFinderMessageShareNameCard, WCFinderMessageVerifyItem, WCFinderShareItemContainer, WCFinderShareToMomentsItem, WCFinderTopicShareItem, WCMegaVideoShareItem, WCPayExtensionInfo, WCPayInfoItem, WCPayThirdInfo, WSVideoModel, WXSecretMsgItem, iWatchAppMsgItem;

@interface CExtendInfoOfAPP : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    NSString *m_nsAppID;
    unsigned int m_uiApiSDKVersion;
    NSString *m_nsTitle;
    NSString *m_nsDesc;
    NSString *m_nsAppAction;
    unsigned int m_uiAppMsgInnerType;
    unsigned int m_uiShowType;
    unsigned int m_uiSoundType;
    NSString *m_nsAppContent;
    unsigned int m_uiAppContentAttributeBitSetFlag;
    NSString *m_nsAppMediaUrl;
    NSString *m_nsAppMediaLowUrl;
    NSString *m_nsAppMediaDataUrl;
    NSString *m_nsAppMediaLowBandDataUrl;
    unsigned int m_uiAppDataSize;
    NSString *m_nsAppAttachID;
    unsigned int m_fullXmlLength;
    unsigned int m_realInnerType;
    NSString *m_mediaId;
    NSString *m_clientAppDataId;
    NSString *m_nsAppFileExt;
    NSString *m_nsMsgAttachUrl;
    unsigned int m_uiAppVersion;
    unsigned int m_uiAppExtShowType;
    NSString *m_nsAppExtInfo;
    NSString *m_nsSourceUsername;
    NSString *m_nsSourceDisplayname;
    NSString *m_nsMsgFileUploadToken;
    long long m_overwriteNewMsgId;
    unsigned int m_uiRemindTime;
    unsigned int m_uiRemindId;
    NSString *m_nsRemindAttachId;
    unsigned int m_uiRemindAttachTotalLen;
    unsigned int m_uiRemindFormat;
    unsigned int m_uiOriginFormat;
    unsigned int m_uiOriginMsgSvrId;
    NSString *m_nsThumbUrl;
    NSString *m_nsAppName;
    NSArray *m_arrReaderWaps;
    unsigned int m_mmreaderSubType;
    unsigned int m_uiEncryVer;
    NSString *m_nsImgSrc;
    NSString *m_nsAppMediaTagName;
    NSString *m_nsTemplateId;
    unsigned int m_uiTemplateType;
    MMTemplateMsg3rdAppShowItem *m_oTemplateMsg3rdAppShowItem;
    _Bool m_bForbidJumpProfileWhenClickAvatar;
    AppProductItem *m_oAppProductItem;
    MallProductItem *m_oMallProductItem;
    CardTicketItem *m_oCardTicketItem;
    GiftCardItem *m_oGiftCardItem;
    EmoticonSharedItem *m_oEmoticonSharedItem;
    EmotionDesignerSharedItem *m_oEmotionDesignerSharedItem;
    EmotionPageSharedItem *m_oEmotionPageShareItem;
    AppTVItem *m_oAppTVItem;
    FavoritesItem *m_oRecordItem;
    HardWareItem *m_oHardWareItem;
    WCPayInfoItem *m_oWCPayInfoItem;
    EmoticonAppMsgItem *m_oEmoticonAppMsgItem;
    iWatchAppMsgItem *m_oiWatchMsgItem;
    WCCanvasPageItem *m_oCanvasPageItem;
    OpenSDKAppBrandItem *m_openSDKAppBrandItem;
    WAAppMsgItem *m_oWAAppItem;
    NSString *m_nsAppMessageExt;
    NSString *m_nsAppMessageAction;
    NSString *m_nsStreamVideoUrl;
    unsigned int m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbMd5;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsEmoticonMD5;
    NSString *m_nsAesKey;
    _Bool m_bIsForceUpdate;
    NSString *m_nsStatExtStr;
    MessageExpItem *m_oMsgExpItem;
    NSString *m_authkey;
    int m_nDownloadLimit;
    unsigned int m_uiDownloadPercent;
    WSVideoModel *m_videoFlowInfo;
    NSString *m_nsAttachFileKey;
    unsigned int m_uiContinueUploadCount;
    AppMsgShareItem *m_nsShareItem;
    unsigned int m_subscrMsgScopeType;
    BrandMpVideoItem *m_brandMpVideoItem;
    NSString *m_nsSongAlbumUrl;
    NSString *m_nsSongLyric;
    NSString *m_nsSolitaireXml;
    NSString *m_nsOriginTitle;
    WCFinderMessageShareNameCard *m_finderShareNameCard;
    MMLiveAppMsgInnerItem *liveAppMsgInnerItem;
    PatMessageWrap *patMessageWrap;
    GameShareNameCard *m_gameShareNameCard;
    GameLifeItem *m_gameLifeItem;
    LiteAppSharedItem *m_liteAppSharedItem;
    _Bool m_isDirectSend;
    _Bool m_bAppAttachExistInSvr;
    _Bool m_isReaderForbidForward;
    _Bool m_isHideHead;
    _Bool roomToolsFlag;
    _Bool bAppMsgCompleteFlag;
    unsigned int m_uiWeAppState;
    unsigned int m_uiWeAppVersion;
    unsigned int m_isAudioTemplate;
    unsigned int m_uiDirectShare;
    unsigned int m_forwardFlag;
    CMessageWrap *m_refMessageWrap;
    EmotionPageSharedItem *m_oEmotionPageSharedItem;
    NSString *m_nsShareOriginUrl;
    NSString *m_nsShareOpenUrl;
    NSString *m_nsJsAppId;
    NSMutableDictionary *m_dicStatParas;
    NSString *m_nsMsgMd5;
    NSString *m_audioTemplateUrl;
    WCPayExtensionInfo *m_payExtensionInfo;
    AppMMScheduleItem *m_scheduleItem;
    ScanCodeHistoryItem *m_scanHistoryItem;
    WCPayThirdInfo *m_thirdC2CInfo;
    CMessageWrap *referingMessageWrap;
    NSString *referMessageSenderUsrname;
    NSString *referMessageSenderDisplayName;
    WCFinderContentColumnSharedItem *finderContentColumnSharedItem;
    NSString *lanTransferInfo;
    NSString *syncRecordCtx;
    WXSecretMsgItem *m_secretMsgItem;
    GiftCardItem *_m_oGiftCardItem;
    NSString *_m_nsOverwriteNewmsgid;
    WCFinderMessageVerifyItem *_finderVerifyItem;
    WCFinderShareToMomentsItem *_finderShareItem;
    WCMegaVideoShareItem *_finderLongVideoShareItem;
    WCFinderTopicShareItem *_finderTopicShareItem;
    WCFinderShareItemContainer *_finderShareItemContainer;
    WCFinderLiveShareItem *_finderLiveShareItem;
    WCFinderMessageGuaranteeItem *_finderGuarantee;
    WCFinderLiveProductShareItem *_finderLiveProductShareItem;
    MMMusicShareItem *_m_musicShareItem;
    NotifyMsgItem *_m_notifyMsgItem;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NotifyMsgItem *m_notifyMsgItem; // @synthesize m_notifyMsgItem=_m_notifyMsgItem;
@property(retain, nonatomic) MMMusicShareItem *m_musicShareItem; // @synthesize m_musicShareItem=_m_musicShareItem;
@property(retain, nonatomic) WCFinderLiveProductShareItem *finderLiveProductShareItem; // @synthesize finderLiveProductShareItem=_finderLiveProductShareItem;
@property(retain, nonatomic) WCFinderMessageGuaranteeItem *finderGuarantee; // @synthesize finderGuarantee=_finderGuarantee;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @synthesize finderLiveShareItem=_finderLiveShareItem;
@property(retain, nonatomic) WCFinderShareItemContainer *finderShareItemContainer; // @synthesize finderShareItemContainer=_finderShareItemContainer;
@property(retain, nonatomic) WCFinderTopicShareItem *finderTopicShareItem; // @synthesize finderTopicShareItem=_finderTopicShareItem;
@property(retain, nonatomic) WCMegaVideoShareItem *finderLongVideoShareItem; // @synthesize finderLongVideoShareItem=_finderLongVideoShareItem;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareItem; // @synthesize finderShareItem=_finderShareItem;
@property(retain, nonatomic) WCFinderMessageVerifyItem *finderVerifyItem; // @synthesize finderVerifyItem=_finderVerifyItem;
@property(retain, nonatomic) NSString *m_nsOverwriteNewmsgid; // @synthesize m_nsOverwriteNewmsgid=_m_nsOverwriteNewmsgid;
@property(retain, nonatomic) GiftCardItem *m_oGiftCardItem; // @synthesize m_oGiftCardItem=_m_oGiftCardItem;
@property(retain, nonatomic) WXSecretMsgItem *m_secretMsgItem; // @synthesize m_secretMsgItem;
@property(nonatomic) unsigned int m_forwardFlag; // @synthesize m_forwardFlag;
@property(copy, nonatomic) NSString *syncRecordCtx; // @synthesize syncRecordCtx;
@property(copy, nonatomic) NSString *lanTransferInfo; // @synthesize lanTransferInfo;
@property(nonatomic) long long m_overwriteNewMsgId; // @synthesize m_overwriteNewMsgId;
@property(retain, nonatomic) NSString *m_nsMsgFileUploadToken; // @synthesize m_nsMsgFileUploadToken;
@property(nonatomic) _Bool bAppMsgCompleteFlag; // @synthesize bAppMsgCompleteFlag;
@property(retain, nonatomic) LiteAppSharedItem *m_liteAppSharedItem; // @synthesize m_liteAppSharedItem;
@property(retain, nonatomic) WCFinderContentColumnSharedItem *finderContentColumnSharedItem; // @synthesize finderContentColumnSharedItem;
@property(retain, nonatomic) GameLifeItem *m_gameLifeItem; // @synthesize m_gameLifeItem;
@property(retain, nonatomic) GameShareNameCard *m_gameShareNameCard; // @synthesize m_gameShareNameCard;
@property(nonatomic) _Bool roomToolsFlag; // @synthesize roomToolsFlag;
@property(retain, nonatomic) NSString *referMessageSenderDisplayName; // @synthesize referMessageSenderDisplayName;
@property(retain, nonatomic) NSString *referMessageSenderUsrname; // @synthesize referMessageSenderUsrname;
@property(retain, nonatomic) CMessageWrap *referingMessageWrap; // @synthesize referingMessageWrap;
@property(retain, nonatomic) PatMessageWrap *patMessageWrap; // @synthesize patMessageWrap;
@property(retain, nonatomic) MMLiveAppMsgInnerItem *liveAppMsgInnerItem; // @synthesize liveAppMsgInnerItem;
@property(retain, nonatomic) WCFinderMessageShareNameCard *m_finderShareNameCard; // @synthesize m_finderShareNameCard;
@property(nonatomic) unsigned int m_uiDirectShare; // @synthesize m_uiDirectShare;
@property(retain, nonatomic) NSString *m_nsOriginTitle; // @synthesize m_nsOriginTitle;
@property(retain, nonatomic) NSString *m_nsSolitaireXml; // @synthesize m_nsSolitaireXml;
@property(copy, nonatomic) NSString *m_nsSongLyric; // @synthesize m_nsSongLyric;
@property(copy, nonatomic) NSString *m_nsSongAlbumUrl; // @synthesize m_nsSongAlbumUrl;
@property(retain, nonatomic) EmoticonAppMsgItem *m_oEmoticonAppMsgItem; // @synthesize m_oEmoticonAppMsgItem;
@property(retain, nonatomic) BrandMpVideoItem *m_brandMpVideoItem; // @synthesize m_brandMpVideoItem;
@property(nonatomic) unsigned int m_subscrMsgScopeType; // @synthesize m_subscrMsgScopeType;
@property(retain, nonatomic) AppMsgShareItem *m_nsShareItem; // @synthesize m_nsShareItem;
@property(retain, nonatomic) NSString *m_authkey; // @synthesize m_authkey;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @synthesize m_uiContinueUploadCount;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @synthesize m_nsAttachFileKey;
@property(retain, nonatomic) WCPayThirdInfo *m_thirdC2CInfo; // @synthesize m_thirdC2CInfo;
@property(retain, nonatomic) ScanCodeHistoryItem *m_scanHistoryItem; // @synthesize m_scanHistoryItem;
@property(retain, nonatomic) AppMMScheduleItem *m_scheduleItem; // @synthesize m_scheduleItem;
@property(retain, nonatomic) WSVideoModel *m_videoFlowInfo; // @synthesize m_videoFlowInfo;
@property(nonatomic) _Bool m_bForbidJumpProfileWhenClickAvatar; // @synthesize m_bForbidJumpProfileWhenClickAvatar;
@property(retain, nonatomic) MMTemplateMsg3rdAppShowItem *m_oTemplateMsg3rdAppShowItem; // @synthesize m_oTemplateMsg3rdAppShowItem;
@property(nonatomic) unsigned int m_uiTemplateType; // @synthesize m_uiTemplateType;
@property(retain, nonatomic) WCPayExtensionInfo *m_payExtensionInfo; // @synthesize m_payExtensionInfo;
@property(nonatomic) unsigned int m_isAudioTemplate; // @synthesize m_isAudioTemplate;
@property(retain, nonatomic) NSString *m_audioTemplateUrl; // @synthesize m_audioTemplateUrl;
@property(nonatomic) unsigned int m_uiWeAppVersion; // @synthesize m_uiWeAppVersion;
@property(nonatomic) unsigned int m_uiWeAppState; // @synthesize m_uiWeAppState;
@property(retain, nonatomic) WAAppMsgItem *m_oWAAppItem; // @synthesize m_oWAAppItem;
@property(nonatomic) unsigned int m_uiDownloadPercent; // @synthesize m_uiDownloadPercent;
@property(retain, nonatomic) WCCanvasPageItem *m_oCanvasPageItem; // @synthesize m_oCanvasPageItem;
@property(retain, nonatomic) OpenSDKAppBrandItem *m_openSDKAppBrandItem; // @synthesize m_openSDKAppBrandItem;
@property(nonatomic) int m_nDownloadLimit; // @synthesize m_nDownloadLimit;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(nonatomic) _Bool m_isHideHead; // @synthesize m_isHideHead;
@property(nonatomic) _Bool m_isReaderForbidForward; // @synthesize m_isReaderForbidForward;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(nonatomic) _Bool m_bAppAttachExistInSvr; // @synthesize m_bAppAttachExistInSvr;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @synthesize m_dicStatParas;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @synthesize m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @synthesize m_nsShareOriginUrl;
@property(retain, nonatomic) NSString *m_nsTemplateId; // @synthesize m_nsTemplateId;
@property(nonatomic) _Bool m_isDirectSend; // @synthesize m_isDirectSend;
@property(nonatomic) _Bool m_bIsForceUpdate; // @synthesize m_bIsForceUpdate;
@property(retain, nonatomic) NSString *m_nsAppMessageAction; // @synthesize m_nsAppMessageAction;
@property(retain, nonatomic) NSString *m_nsAppMessageExt; // @synthesize m_nsAppMessageExt;
@property(retain, nonatomic) iWatchAppMsgItem *m_oiWatchMsgItem; // @synthesize m_oiWatchMsgItem;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; // @synthesize m_oWCPayInfoItem;
@property(retain, nonatomic) HardWareItem *m_oHardWareItem; // @synthesize m_oHardWareItem;
@property(retain, nonatomic) FavoritesItem *m_oRecordItem; // @synthesize m_oRecordItem;
@property(retain, nonatomic) AppTVItem *m_oAppTVItem; // @synthesize m_oAppTVItem;
@property(retain, nonatomic) EmotionPageSharedItem *m_oEmotionPageSharedItem; // @synthesize m_oEmotionPageSharedItem;
@property(retain, nonatomic) EmotionDesignerSharedItem *m_oEmotionDesignerSharedItem; // @synthesize m_oEmotionDesignerSharedItem;
@property(retain, nonatomic) EmoticonSharedItem *m_oEmoticonSharedItem; // @synthesize m_oEmoticonSharedItem;
@property(retain, nonatomic) CardTicketItem *m_oCardTicketItem; // @synthesize m_oCardTicketItem;
@property(retain, nonatomic) AppProductItem *m_oAppProductItem; // @synthesize m_oAppProductItem;
@property(retain, nonatomic) MallProductItem *m_oMallProductItem; // @synthesize m_oMallProductItem;
@property(retain, nonatomic) NSString *m_nsAppMediaTagName; // @synthesize m_nsAppMediaTagName;
@property(retain, nonatomic) NSString *m_nsImgSrc; // @synthesize m_nsImgSrc;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_mmreaderSubType; // @synthesize m_mmreaderSubType;
@property(retain, nonatomic) NSArray *m_arrReaderWaps; // @synthesize m_arrReaderWaps;
@property(nonatomic) unsigned int m_uiSoundType; // @synthesize m_uiSoundType;
@property(nonatomic) unsigned int m_uiShowType; // @synthesize m_uiShowType;
@property(nonatomic) unsigned int m_uiRemindTime; // @synthesize m_uiRemindTime;
@property(nonatomic) unsigned int m_uiRemindId; // @synthesize m_uiRemindId;
@property(nonatomic) unsigned int m_uiRemindFormat; // @synthesize m_uiRemindFormat;
@property(nonatomic) unsigned int m_uiRemindAttachTotalLen; // @synthesize m_uiRemindAttachTotalLen;
@property(nonatomic) unsigned int m_uiOriginMsgSvrId; // @synthesize m_uiOriginMsgSvrId;
@property(nonatomic) unsigned int m_uiOriginFormat; // @synthesize m_uiOriginFormat;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
@property(nonatomic) unsigned int m_uiEncryVer; // @synthesize m_uiEncryVer;
@property(nonatomic) unsigned int m_uiAppVersion; // @synthesize m_uiAppVersion;
@property(nonatomic) unsigned int m_uiAppMsgInnerType; // @synthesize m_uiAppMsgInnerType;
@property(nonatomic) unsigned int m_uiAppExtShowType; // @synthesize m_uiAppExtShowType;
@property(nonatomic) unsigned int m_uiAppDataSize; // @synthesize m_uiAppDataSize;
@property(retain, nonatomic) NSString *m_clientAppDataId; // @synthesize m_clientAppDataId;
@property(retain, nonatomic) NSString *m_mediaId; // @synthesize m_mediaId;
@property(nonatomic) unsigned int m_realInnerType; // @synthesize m_realInnerType;
@property(nonatomic) unsigned int m_fullXmlLength; // @synthesize m_fullXmlLength;
@property(nonatomic) unsigned int m_uiApiSDKVersion; // @synthesize m_uiApiSDKVersion;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsSourceUsername; // @synthesize m_nsSourceUsername;
@property(retain, nonatomic) NSString *m_nsSourceDisplayname; // @synthesize m_nsSourceDisplayname;
@property(retain, nonatomic) NSString *m_nsRemindAttachId; // @synthesize m_nsRemindAttachId;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @synthesize m_oMsgExpItem;
@property(retain, nonatomic) NSString *m_nsMsgThumbMd5; // @synthesize m_nsMsgThumbMd5;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgAttachUrl; // @synthesize m_nsMsgAttachUrl;
@property(retain, nonatomic) NSString *m_nsEmoticonMD5; // @synthesize m_nsEmoticonMD5;
@property(retain, nonatomic) NSString *m_nsDesc; // @synthesize m_nsDesc;
@property(retain, nonatomic) NSString *m_nsAppName; // @synthesize m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAppMediaUrl; // @synthesize m_nsAppMediaUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowUrl; // @synthesize m_nsAppMediaLowUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowBandDataUrl; // @synthesize m_nsAppMediaLowBandDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaDataUrl; // @synthesize m_nsAppMediaDataUrl;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID;
@property(retain, nonatomic) NSString *m_nsAppFileExt; // @synthesize m_nsAppFileExt;
@property(retain, nonatomic) NSString *m_nsAppExtInfo; // @synthesize m_nsAppExtInfo;
@property(nonatomic) unsigned int m_uiAppContentAttributeBitSetFlag; // @synthesize m_uiAppContentAttributeBitSetFlag;
@property(retain, nonatomic) NSString *m_nsAppContent; // @synthesize m_nsAppContent;
@property(retain, nonatomic) NSString *m_nsAppAttachID; // @synthesize m_nsAppAttachID;
@property(retain, nonatomic) NSString *m_nsAppAction; // @synthesize m_nsAppAction;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
- (id)genReferIconWithName:(id)arg1 useCustomBkg:(_Bool)arg2;
- (id)msgReferSummaryAndReplace:(_Bool)arg1;
- (id)msgReferSummary;
- (_Bool)msgCanBeRefered;
- (void)parseFavWeAppPushMessage:(id)arg1;
- (void)parseFromReferMsgXMLNode:(struct XmlReaderNode_t *)arg1;
- (id)messageFTSText;
@property(readonly, nonatomic) _Bool m_isContentOriginal;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (_Bool)GetDownloadThumbStatus:(unsigned int *)arg1;
- (_Bool)isShowAppMessageBlockButton;
- (_Bool)isShowAppBottomButton;
- (void)SetOriginal:(_Bool)arg1;
- (unsigned int)GetContentAttributeBitSetFlag;
- (unsigned int)GetPreviewType;
- (id)getFileExt;
- (void)UpdateContent:(id)arg1;
- (id)GetBufferUploadContent;
- (id)GetContent;
- (id)xmlOfStreamVideo;
- (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1;
- (void)ChangeForSolitaireNode:(struct XmlReaderNode_t *)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)GetAppMsgAttachContent;
- (void)ChangeForAppMsgState;
- (void)ChangeForReader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

