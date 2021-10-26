//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCFinderFluencyReportManager : NSObject
{
    NSMutableArray *_infoBuffer;
    NSMutableDictionary *_infoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *infoDict; // @synthesize infoDict=_infoDict;
@property(retain, nonatomic) NSMutableArray *infoBuffer; // @synthesize infoBuffer=_infoBuffer;
- (id)getFluencyReportInfoWithReportScene:(unsigned long long)arg1;
- (void)reportIfOkWithReportScene:(unsigned long long)arg1;
- (void)setFirstVideoWithMediaId:(id)arg1 startPlayTimeIfCan:(unsigned long long)arg2 reportScene:(unsigned long long)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadFinishTimeIfCan:(unsigned long long)arg2 reportScene:(unsigned long long)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadStartTimeIfCan:(unsigned long long)arg2 reportScene:(unsigned long long)arg3;
- (void)setFirstVideoMediaIdIfCan:(id)arg1 reportScene:(unsigned long long)arg2;
- (void)setShowUIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setLocalOperationFinishTimeIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setDebugMessageIfCan:(id)arg1 reportScene:(unsigned long long)arg2;
- (void)setPullCGIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setPullHistoryCGITimeIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setPullStreamCGITimeIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setEnterTimestampIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setFinishSceneIfCan:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)setStartSceneIfCan:(long long)arg1 reportScene:(unsigned long long)arg2;

@end

