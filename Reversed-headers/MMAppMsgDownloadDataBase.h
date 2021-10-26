//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface MMAppMsgDownloadDataBase : MMObject
{
    WCTDatabase *_database;
    WCTTable *_downloadfileTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *downloadfileTable; // @synthesize downloadfileTable=_downloadfileTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)MMAppMsgDownloadDBPath;
- (id)MMAppMsgDownloadRootDir;
- (id)getAMDItemInDBFromSvrId:(long long)arg1;
- (id)getAMDItemInDB:(id)arg1;
- (_Bool)deleteAMDItemInDB:(id)arg1;
- (_Bool)updateAMDItemInDB:(id)arg1;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)tryCleanData;
- (void)dealloc;
- (void)createTables;
- (void)reloadDatabase;
- (id)init;

@end

