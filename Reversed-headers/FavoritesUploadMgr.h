//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "FavoritesUploadProccessorDelegate-Protocol.h"
#import "IFavoritesRepairSvrDataExt-Protocol.h"

@class FavoritesCDNInfoDB, FavoritesItemDB, FavoritesUploadBaseProccessor, FavoritesUploadFileSaver, FavoritesUploadVideoCompressor, NSMutableArray, NSString;
@protocol FavoritesUploadMgrDelegate;

@interface FavoritesUploadMgr : MMObject <IFavoritesRepairSvrDataExt, FavoritesUploadProccessorDelegate>
{
    NSMutableArray *m_failedQueue;
    FavoritesCDNInfoDB *m_favCdnDB;
    FavoritesItemDB *m_favItemDB;
    unsigned long long m_type;
    FavoritesUploadVideoCompressor *m_videoCompressor;
    FavoritesUploadFileSaver *m_fileSaver;
    FavoritesUploadBaseProccessor *m_uploador;
    id <FavoritesUploadMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)preCleanGetCacheSize;
- (unsigned long long)cleanCache;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (_Bool)updateCdnInfo:(id)arg1;
- (void)reUploadFavItem:(id)arg1;
- (void)updateFavoritesItemCDNInfo:(id)arg1 inItem:(id)arg2;
- (_Bool)needUploadData:(id)arg1 ofType:(int)arg2 inItem:(id)arg3;
- (void)updateCdnInfoInItem:(id)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)saveCdnInfoInData:(id)arg1 forItem:(id)arg2 isThumb:(_Bool)arg3 withState:(int)arg4;
- (void)clearCdnInfo:(id)arg1;
- (void)onProccessItem:(id)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
- (void)stopUploadAllFavItem;
- (_Bool)isUploading:(id)arg1;
- (void)delUploadItem:(id)arg1;
- (void)removeItemInFailQueue:(id)arg1;
- (void)updateTagForItem:(id)arg1;
- (void)realStopUploadItem:(id)arg1;
- (_Bool)tryFixUrlThumbPath:(id)arg1;
- (void)realAddUploadItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)stopUploadItem:(id)arg1;
- (void)addUploadItem:(id)arg1 isPrior:(_Bool)arg2;
- (id)getUploadingItemList;
- (id)getUploadFailedItemList;
- (void)loadFailedQueue;
- (void)loadUploadingItems;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

