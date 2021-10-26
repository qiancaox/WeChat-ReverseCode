//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LZAudioDataDownloader.h"

@class LZDownloadTaskItem;

@interface MMKSBasicMusicDownloader : LZAudioDataDownloader
{
    LZDownloadTaskItem *_taskItem;
    long long _statusCode;
    long long _continuousLengh;
    double _startTime;
    double _downloadSpeed;
    double _downloadCostTime;
    struct _NSRange _downloadRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange downloadRange; // @synthesize downloadRange=_downloadRange;
@property(nonatomic) double downloadCostTime; // @synthesize downloadCostTime=_downloadCostTime;
@property(nonatomic) double downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long continuousLengh; // @synthesize continuousLengh=_continuousLengh;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) LZDownloadTaskItem *taskItem; // @synthesize taskItem=_taskItem;
- (void)reportDownloadCompleteWithSuccess:(_Bool)arg1;
- (void)reportInvalidContantTypeInResponse;
- (void)reportContentLengthNotFoundInResponse;
- (void)reportContentRangeNotFoundInResponse;
- (void)reportDownloadStartWithIsWholeRange:(_Bool)arg1;
- (id)buildHTTPHeaderQQMusicRelatedField;
- (id)buildHTTPHeaderRangeField;
- (void)setupDictionaryIntoTarget:(id)arg1 withSource:(id)arg2;
- (id)buildHTTPHeaderFields;
- (_Bool)isStatusCodeSuccess:(int)arg1;
- (_Bool)isMineTypeErrorWithHeaders:(id)arg1;
- (void)handlerReceiveRespons:(id)arg1 error:(id *)arg2;
- (_Bool)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (_Bool)isErrorCanRetry:(id)arg1;

@end

