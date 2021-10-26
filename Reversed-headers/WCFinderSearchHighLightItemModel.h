//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"

@class NSMutableArray, NSString, WCFinderDataItem;

@interface WCFinderSearchHighLightItemModel : NSObject <WCFinderDataItemExt>
{
    WCFinderDataItem *_dataItem;
    NSString *_normalNickName;
    NSMutableArray *_nameHightkeywords;
    NSString *_normalText;
    NSMutableArray *_textHightkeywords;
    struct CGSize _heightCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *textHightkeywords; // @synthesize textHightkeywords=_textHightkeywords;
@property(retain, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) NSMutableArray *nameHightkeywords; // @synthesize nameHightkeywords=_nameHightkeywords;
@property(retain, nonatomic) NSString *normalNickName; // @synthesize normalNickName=_normalNickName;
@property(nonatomic) struct CGSize heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)updateDataItem:(id)arg1;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2;
- (void)onFinderDataItemIsLikedFailed:(id)arg1;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)cancelDownloadImage;
- (void)generalStartDownloadImagePriority:(_Bool)arg1 maxCount:(unsigned long long)arg2 onlyThumb:(_Bool)arg3;
- (void)startDownloadStreamImagePriority:(_Bool)arg1;
- (void)startDownloadStreamImageImmediately;
- (_Bool)isFeedContainVideo;
- (_Bool)isFeedContainPhoto;
- (_Bool)existMediaContent;
- (_Bool)isFeedContainText;
- (void)processHeightText;
- (void)processHeightName;
- (void)dealloc;
- (id)initWithSearchDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

