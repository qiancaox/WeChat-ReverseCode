//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTopicReportBaseItem.h"

@interface WCTopicReportSessionInputItem : WCTopicReportBaseItem
{
    unsigned int _actionType;
    unsigned int _content;
}

@property(nonatomic) unsigned int content; // @synthesize content=_content;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (unsigned int)enterScene;
- (void)clearMembersAfterReport;
- (void)resetRequestId;

@end

