//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface LinkWeAppJumpWrap : MMObject
{
    _Bool _isForbidSSignal;
    unsigned int _appState;
    NSString *_appid;
    NSString *_pagePath;
    NSString *_shareKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(nonatomic) _Bool isForbidSSignal; // @synthesize isForbidSSignal=_isForbidSSignal;
@property(nonatomic) unsigned int appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

