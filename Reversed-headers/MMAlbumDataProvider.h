//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MMAlbumDataProvider : MMObject
{
}

+ (void)tryUpdateAlbumChangeObserver;
+ (void)internalInitAlbumChangeObserver;
+ (void)tryInitAlbumChangeObserver;
+ (void)FetchLastMMAssetWith:(CDUnknownBlockType)arg1 inSecond:(double)arg2;
+ (void)FetchMMAlbumWithID:(id)arg1 With:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 shouldIncludeVideo:(_Bool)arg4 isOnlyShowVideo:(_Bool)arg5;
+ (void)FirstMMAlbumWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (_Bool)isPhotoAccessLimited;
+ (void)requestAuthorizeIfNeededWithResultBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isUserAuthorize;
+ (_Bool)isAuthorize;
+ (void)AllMMAlbumsWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4 callbackOnMainThread:(_Bool)arg5;
+ (void)AllMMAlbumsWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;

@end

