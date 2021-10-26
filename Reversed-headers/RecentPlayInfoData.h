//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString, RecentPlayMoreData;

@interface RecentPlayInfoData : MMObject <PBCoding>
{
    NSString *moduleTitle;
    NSString *launchPrivilegeTitle;
    NSString *launchPrivilegeJumpUrl;
    NSArray *gameList;
    RecentPlayMoreData *more;
}

+ (void)initialize;
+ (void)PBArrayAdd_more;
+ (void)PBArrayAdd_gameList;
+ (void)PBArrayAdd_launchPrivilegeJumpUrl;
+ (void)PBArrayAdd_launchPrivilegeTitle;
+ (void)PBArrayAdd_moduleTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) RecentPlayMoreData *more; // @synthesize more;
@property(retain, nonatomic) NSArray *gameList; // @synthesize gameList;
@property(retain, nonatomic) NSString *launchPrivilegeJumpUrl; // @synthesize launchPrivilegeJumpUrl;
@property(retain, nonatomic) NSString *launchPrivilegeTitle; // @synthesize launchPrivilegeTitle;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle;
- (void)parse:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

