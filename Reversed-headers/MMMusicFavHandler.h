//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMMusicVideoImageDownloader;
@protocol MMMusicFavHandlerDataSource, MMMusicFavHandlerDelegate;

@interface MMMusicFavHandler : MMObject
{
    id <MMMusicFavHandlerDataSource> _dataSource;
    id <MMMusicFavHandlerDelegate> _delegate;
    MMMusicVideoImageDownloader *_imageDownLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicVideoImageDownloader *imageDownLoader; // @synthesize imageDownLoader=_imageDownLoader;
@property(nonatomic) __weak id <MMMusicFavHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicFavHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)genLogMusicInfo:(id)arg1;
- (void)addToFavouritesWithMusicInfo:(id)arg1 mvModel:(id)arg2;

@end

