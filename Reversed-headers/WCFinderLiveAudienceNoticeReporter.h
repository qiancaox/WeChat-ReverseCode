//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderLiveAudienceNoticeReporter : NSObject
{
    _Bool m_isAlreadyShowNotice;
}

+ (void)reportNoticeOperation:(id)arg1 withNoticeInfo:(id)arg2 withCommentScene:(id)arg3 actionType:(unsigned long long)arg4;
+ (void)reportNoticeOperation:(id)arg1 withNoticeInfo:(id)arg2 withCommentScene:(id)arg3;
+ (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 withLiveId:(unsigned long long)arg3 withLiveStatus:(unsigned int)arg4 withCommentScene:(id)arg5 withForceNoticeInfo:(id)arg6 withNoticeContent:(id)arg7;
- (id)replaceCommaToSemicolon:(id)arg1;
- (void)reportNoticeNoticeOperation:(long long)arg1 username:(id)arg2 withNoticeInfo:(id)arg3 withCommentScene:(unsigned long long)arg4 feedID:(id)arg5;
- (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 sceneNote:(id)arg3 noticeInfo:(id)arg4 commentScene:(id)arg5;
- (void)reportNoticeOperation:(long long)arg1 withUsername:(id)arg2 noticeInfo:(id)arg3 commentScene:(id)arg4;

@end

