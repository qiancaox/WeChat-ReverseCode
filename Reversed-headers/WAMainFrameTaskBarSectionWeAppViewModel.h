//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WAMainFrameTaskBarSectionWeAppViewModel : NSObject
{
    NSMutableArray *_appItems;
    _Bool _isMyWeApp;
    _Bool _showMore;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(nonatomic) _Bool isMyWeApp; // @synthesize isMyWeApp=_isMyWeApp;
- (id)deleteDataForIndex:(long long)arg1;
- (id)itemsDescription;
- (long long)allCount;
- (long long)currentWeAppCount;
- (long long)count;
- (void)updateShowMoreState;
- (id)dataForIndex:(long long)arg1;
- (void)fillWeAppItems:(id)arg1;
- (id)init:(_Bool)arg1;

@end

