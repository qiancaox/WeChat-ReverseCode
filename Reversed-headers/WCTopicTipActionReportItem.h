//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTopicTipActionReportItem : NSObject
{
    int _scene;
    int _actiontype;
    int _pagetype;
    NSString *_requestid;
    NSString *_message;
    NSString *_appid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) int pagetype; // @synthesize pagetype=_pagetype;
@property(nonatomic) int actiontype; // @synthesize actiontype=_actiontype;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *requestid; // @synthesize requestid=_requestid;
- (void)setReportScene:(long long)arg1;

@end

