//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveUserStateItem : NSObject
{
    _Bool _isCommentDisable;
    NSString *_userName;
    NSString *_displayName;
    NSString *_headImageUrl;
    unsigned long long _rewardAmountInHeat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long rewardAmountInHeat; // @synthesize rewardAmountInHeat=_rewardAmountInHeat;
@property(readonly, nonatomic) _Bool isCommentDisable; // @synthesize isCommentDisable=_isCommentDisable;
@property(readonly, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

