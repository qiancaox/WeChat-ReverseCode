//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface FTSMsgIndexState : NSObject
{
    int _taskId;
    _Bool _hasDeleteTask;
    _Bool _hasMigrationTask;
    NSMutableSet *_nextMsgIndexSessions;
    NSMutableSet *_preMsgIndexSessions;
    NSMutableDictionary *_dicSessionMaxId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMigrationTask; // @synthesize hasMigrationTask=_hasMigrationTask;
@property(nonatomic) _Bool hasDeleteTask; // @synthesize hasDeleteTask=_hasDeleteTask;
@property(retain, nonatomic) NSMutableDictionary *dicSessionMaxId; // @synthesize dicSessionMaxId=_dicSessionMaxId;
@property(retain, nonatomic) NSMutableSet *preMsgIndexSessions; // @synthesize preMsgIndexSessions=_preMsgIndexSessions;
@property(retain, nonatomic) NSMutableSet *nextMsgIndexSessions; // @synthesize nextMsgIndexSessions=_nextMsgIndexSessions;
- (id)description;
- (_Bool)hasFinishAllTask;
- (id)init;

@end

