//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPoiInfo.h"

@class NSString;

@interface QIndoorPoiInfo : QPoiInfo
{
    NSString *_levelName;
    NSString *_buildingGUID;
    NSString *_buildingName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buildingName; // @synthesize buildingName=_buildingName;
@property(copy, nonatomic) NSString *buildingGUID; // @synthesize buildingGUID=_buildingGUID;
@property(copy, nonatomic) NSString *levelName; // @synthesize levelName=_levelName;

@end

