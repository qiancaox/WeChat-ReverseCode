//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface QIndoorMapData : NSObject
{
    _Bool _indoorMapEnabled;
    long long _keyType;
    NSArray *_buildingList;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *buildingList; // @synthesize buildingList=_buildingList;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) _Bool indoorMapEnabled; // @synthesize indoorMapEnabled=_indoorMapEnabled;
- (id)toJSON;
- (id)initWithJSON:(id)arg1;

@end

