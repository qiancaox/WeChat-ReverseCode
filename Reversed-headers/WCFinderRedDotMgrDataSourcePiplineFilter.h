//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderRedDotMgrDataSourcePiplineFilter : NSObject
{
    NSString *_name;
    CDUnknownBlockType _filterBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;

@end

