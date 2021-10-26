//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfilePageModel.h"

#import "DesignerPortfolioCollectionViewProviderDelegate-Protocol.h"

@class DesignerPortfolioCollectionViewProvider, NSString;
@protocol WCFinderProfileStickerTabPageModelDelegate;

@interface WCFinderProfileStickerTabPageModel : WCFinderStreamProfilePageModel <DesignerPortfolioCollectionViewProviderDelegate>
{
    _Bool _loading;
    _Bool _didLoadFail;
    unsigned int _designUin;
    id <WCFinderProfileStickerTabPageModelDelegate> _delegate;
    DesignerPortfolioCollectionViewProvider *_provider;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLoadFail; // @synthesize didLoadFail=_didLoadFail;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) unsigned int designUin; // @synthesize designUin=_designUin;
@property(retain, nonatomic) DesignerPortfolioCollectionViewProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak id <WCFinderProfileStickerTabPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)report:(long long)arg1 commentScene:(unsigned long long)arg2;
- (void)reportClickTab:(unsigned long long)arg1;
- (void)reportExposeTab:(unsigned long long)arg1;
- (void)onFetchDoneEmoticonData;
- (void)onFetchMoreEmoticonData;
- (unsigned long long)collectionViewDisplayScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (id)getNavController;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (void)onGetEmoticonPacksForDisplay:(_Bool)arg1;
- (void)onFetchEmoticonDataFailed;
- (_Bool)shouldAutoRetryFetchOnFail;
- (_Bool)shouldRemoveExpiredPack;
- (id)viewPageClassName;
- (id)displayName;
- (void)setupDisplayTab:(_Bool)arg1;
- (void)retryReqeustFirstPage;
- (void)onContactModelLoaded;
- (id)initWithDesignUin:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

