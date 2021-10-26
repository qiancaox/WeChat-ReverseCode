//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderOpenAPI : NSObject
{
}

+ (void)getFinderContactWithUsername:(id)arg1 successfulBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 requestScene:(long long)arg6 functionalParams:(id)arg7 reportExtraInfo:(id)arg8;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderFeedWithFeedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderProfileWithUserName:(id)arg1 currentNavController:(id)arg2 cardType:(unsigned long long)arg3 enterScene:(unsigned long long)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderProfileWithExportUserName:(id)arg1 currentNavController:(id)arg2 cardType:(unsigned long long)arg3 enterScene:(unsigned long long)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (void)getFinderLiveMicInfoWithEncryptedId:(id)arg1 nonceId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)getTemplateLiveUrlWithEncryptedID:(id)arg1 nonceID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(int)arg3 feedNonceId:(id)arg4 fromVC:(id)arg5 verifyInfo:(id)arg6 scenenote:(id)arg7 timeout:(double)arg8 customParam:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failBlock:(CDUnknownBlockType)arg11;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportId:(id)arg2 feedNonceId:(id)arg3 fromVC:(id)arg4 verifyInfo:(id)arg5 scenenote:(id)arg6 timeout:(double)arg7 customParam:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(int)arg3 feedNonceId:(id)arg4 fromVC:(id)arg5 timeout:(double)arg6 customParam:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportId:(id)arg2 feedNonceId:(id)arg3 fromVC:(id)arg4 timeout:(double)arg5 customParam:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;
+ (void)getLiveStatusWithUserName:(id)arg1 liveID:(id)arg2 successfulBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
+ (void)openReservePageSheetWithNoticeId:(id)arg1 verifyInfo:(id)arg2 commentScene:(id)arg3 entryScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 sceneNote:(id)arg6 fromVC:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)reserveLiveNoticeWithAnchorUsername:(id)arg1 noticeId:(id)arg2 reserveOperation:(_Bool)arg3 timeout:(double)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
+ (void)getLiveNoticeStateWithAnchorUserName:(id)arg1 noticeId:(id)arg2 successfulBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;

@end

