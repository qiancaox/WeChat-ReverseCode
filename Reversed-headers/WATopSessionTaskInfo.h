//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WATopSessionTaskInfo : NSObject <PBCoding>
{
    unsigned int debugType;
    NSString *appid;
    NSString *username;
    NSString *path;
    NSString *displayName;
    NSMutableArray *arrPageStackPaths;
}

+ (void)initialize;
+ (void)PBArrayAdd_debugType;
+ (void)PBArrayAdd_arrPageStackPaths;
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int debugType; // @synthesize debugType;
@property(retain, nonatomic) NSMutableArray *arrPageStackPaths; // @synthesize arrPageStackPaths;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName;
@property(copy, nonatomic) NSString *path; // @synthesize path;
@property(copy, nonatomic) NSString *username; // @synthesize username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

