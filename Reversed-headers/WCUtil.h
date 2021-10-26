//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCUtil : NSObject
{
}

+ (_Bool)microMerchantCleanSementCheckSectionMinSize;
+ (_Bool)microMerchantFoldSwitchOn;
+ (_Bool)isUploadLargeFileAPISwitchOn;
+ (unsigned int)uploadLargeFileAPIMinSize;
+ (id)getAppIdFromUrl:(id)arg1;
+ (void)writeImageData:(id)arg1 ToFilePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)safeGetPostDraftImagePath:(id)arg1;
+ (id)genPostDraftRelativePath;
+ (_Bool)isBatchDownloadSnsThumb;
+ (id)tryFixUTFCodingErr:(id)arg1;
+ (id)screenShotWithViewController:(id)arg1;
+ (id)getDocSnWithUrl:(id)arg1;
+ (id)rangesOfString:(id)arg1 inString:(id)arg2;
+ (_Bool)isUseC2CUpload;
+ (void)DumpBuffer:(id)arg1 name:(id)arg2;
+ (_Bool)isUseWxamDownload;
+ (_Bool)isUseWxamUpload;
+ (_Bool)isUseWxpcDownload;
+ (_Bool)isUseWxpcUpload;
+ (_Bool)isUseVCodecDownload;
+ (_Bool)isUseVCodecUpload;
+ (_Bool)isUseWebpDownload;
+ (_Bool)isUseWebpUpload;
+ (_Bool)isExistGroupName:(id)arg1 exceptGroup:(id)arg2;
+ (_Bool)saveWCReceivedAdList:(id)arg1;
+ (id)getWCReceivedAdList;
+ (_Bool)saveSnsAdExpInfo:(id)arg1;
+ (id)getSnsAdExpInfo;
+ (_Bool)saveWCSetting:(id)arg1;
+ (id)getWCSetting;
+ (void)endNetworkEvent:(long long)arg1 event:(long long)arg2;
+ (void)beginNetworkEvent:(long long)arg1 event:(long long)arg2;
+ (id)mergeHomePage:(unsigned long long)arg1 minId:(unsigned long long)arg2 Left:(id)arg3 Right:(id)arg4 Added:(id)arg5 Changed:(id)arg6 Deleted:(id)arg7 PageCount:(unsigned long long)arg8;
+ (id)pathForCurUserBGImg;
+ (id)pathForBGImg:(id)arg1;
+ (id)pathForBGImgDir;
+ (long long)serverUrlTypeToLocalType:(long long)arg1;
+ (int)localUrlTypeToServerType:(long long)arg1;
+ (long long)serverActionTypeToLocalType:(long long)arg1;
+ (int)localActionTypeToServerType:(long long)arg1;
+ (long long)serverActionSceneToLocalScene:(long long)arg1;
+ (int)localActionSceneToServerScene:(long long)arg1;
+ (long long)serverContentDescSceneToLocalType:(long long)arg1;
+ (int)localContentDescSceneToServerType:(long long)arg1;
+ (long long)serverContentDescShowTypeToLocalType:(long long)arg1;
+ (int)localContentDescShowTypeToServerType:(long long)arg1;
+ (long long)serverContentTypeToLocalType:(long long)arg1;
+ (long long)localContentTypeToServerType:(long long)arg1;
+ (long long)serverMediaSubTypeToLocalType:(long long)arg1 serverSubType:(long long)arg2;
+ (long long)localMediaSubTypeToServerType:(long long)arg1 localSubType:(long long)arg2;
+ (long long)serverMediaTypeToLocalType:(long long)arg1;
+ (long long)localMediaTypeToServerType:(long long)arg1;
+ (id)getWCReceivedAdListPath;
+ (id)getUserWCAdExpInfoPath;
+ (id)getUserWCSucceedItemPath;
+ (id)getUserSightDraftPostDraftSaveItemDir;
+ (id)getUserWCImagePostDraftSaveItemDir;
+ (id)getUserWCImageFoldedQueuePath;
+ (id)getUserWCSightFoldedQueuePath;
+ (id)getUserWCLikeFailedQueuePath;
+ (id)getUserWCCommentFailedQueuePath;
+ (id)getUserWCFailedQueuePath;
+ (id)uploadPathForUploadMedia:(id)arg1;
+ (id)getUserWCPendingTempResourceDir;
+ (id)getWCDBPath;
+ (id)getUserWCMediaUploadDir;
+ (id)getUserWCMediaDir;
+ (id)getUserWCDBRootDir;
+ (id)getUserWCRootDir;
+ (id)getLocationUrl:(id)arg1 Tid:(id)arg2;
+ (id)getLocationUrl:(id)arg1;
+ (id)tryConvertWCDownloadImageData:(id)arg1 withCdnTaskInfo:(id)arg2 keyVector:(vector_2633e87e *)arg3;

@end

