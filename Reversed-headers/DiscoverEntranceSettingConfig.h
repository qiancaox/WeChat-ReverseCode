//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface DiscoverEntranceSettingConfig : NSObject
{
    NSString *_title;
    UIImage *_iconImage;
    NSMutableArray *_switchInfos;
    NSMutableArray *_extSwitchInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *extSwitchInfos; // @synthesize extSwitchInfos=_extSwitchInfos;
@property(retain, nonatomic) NSMutableArray *switchInfos; // @synthesize switchInfos=_switchInfos;
@property(copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

