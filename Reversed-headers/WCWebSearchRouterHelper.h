//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCWebSearchRouterHelper : NSObject
{
}

+ (_Bool)FTSWebSearchEntryOn;
+ (_Bool)TopicSearchEntryOn;
+ (_Bool)TextSearchEntryOn;
+ (_Bool)ImageSearchEntryOn;
+ (_Bool)MainSwitchOn;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2;
+ (void)StartImageSearchWithSearchEntity:(id)arg1 curViewController:(id)arg2;
+ (void)StartTextSearch:(id)arg1 curViewController:(id)arg2;
+ (void)PushVideoFlowVCWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 initedParam:(id)arg3 srcSNSItem:(id)arg4 srsMsgWrap:(id)arg5 curNavController:(id)arg6;
+ (void)PushVideoFlowVCWithVideoInfo:(id)arg1 initedParams:(id)arg2 curNavController:(id)arg3;

@end

