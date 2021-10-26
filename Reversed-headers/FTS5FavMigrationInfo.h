//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface FTS5FavMigrationInfo : NSObject <PBCoding>
{
    unsigned int start;
    unsigned int end;
    unsigned int msgCount;
    unsigned int pageCount;
    unsigned int favMsgCount;
    unsigned int sessionCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionCount;
+ (void)PBArrayAdd_favMsgCount;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_start;
@property(nonatomic) unsigned int sessionCount; // @synthesize sessionCount;
@property(nonatomic) unsigned int favMsgCount; // @synthesize favMsgCount;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount;
@property(nonatomic) unsigned int end; // @synthesize end;
@property(nonatomic) unsigned int start; // @synthesize start;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

