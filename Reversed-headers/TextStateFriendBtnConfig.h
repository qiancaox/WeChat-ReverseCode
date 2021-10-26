//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IExptServiceExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"

@class NSMutableArray, NSString;

@interface TextStateFriendBtnConfig : NSObject <MMConfigMgrExt, IExptServiceExt>
{
    long long _style;
    NSMutableArray *_activeRanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *activeRanges; // @synthesize activeRanges=_activeRanges;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)onExptItemListChange;
- (void)onMMDynamicConfigUpdated;
- (id)currentActiveId;
- (_Bool)isInActiveTimeRange;
- (id)configString;
- (void)loadConfig;
- (void)onFriendStateButtonClick;
- (long long)currentStyle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

