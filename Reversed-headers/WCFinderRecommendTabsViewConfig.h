//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderRecommendTabsViewConfig : NSObject
{
    NSString *_title;
    NSString *_accessibilityLabel;
    long long _category;
}

- (void).cxx_destruct;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 accessibilityLabel:(id)arg2 category:(long long)arg3;

@end

