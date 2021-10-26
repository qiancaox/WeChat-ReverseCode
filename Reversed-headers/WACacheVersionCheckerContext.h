//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAAppTaskExtInfo, WAPackageConfig;

@interface WACacheVersionCheckerContext : NSObject
{
    _Bool _preChecked;
    _Bool _inColdLaunch;
    int _syncType;
    WAPackageConfig *_packageConfig;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_relativeURL;
    NSMutableArray *_needDownloadInfoDatas;
}

- (void).cxx_destruct;
@property(nonatomic) int syncType; // @synthesize syncType=_syncType;
@property(nonatomic) _Bool inColdLaunch; // @synthesize inColdLaunch=_inColdLaunch;
@property(retain, nonatomic) NSMutableArray *needDownloadInfoDatas; // @synthesize needDownloadInfoDatas=_needDownloadInfoDatas;
@property(nonatomic) _Bool preChecked; // @synthesize preChecked=_preChecked;
@property(copy, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) WAPackageConfig *packageConfig; // @synthesize packageConfig=_packageConfig;

@end

