//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTTable;

@interface WCDBTableHolder : NSObject
{
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCTTable *table; // @synthesize table=_table;
- (_Bool)createWithError:(id *)arg1;
- (id)initWithDatabase:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;

@end

