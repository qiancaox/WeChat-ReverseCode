//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "MMImageLoaderObserver-Protocol.h"

@class MMAnimatedImageDecoder, MMImageLoaderReqContext, NSNumber, NSObject, NSString, NSURL, UIImage, UIView;
@protocol MMWebImageViewDelegate, OS_dispatch_queue;

@interface MMWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    UIImage *_defaultImage;
    NSURL *_url;
    NSURL *_darkModeUrl;
    _Bool _loadCachedImageFileOnMainThread;
    id <MMWebImageViewDelegate> m_loadingDelegate;
    MMAnimatedImageDecoder *m_animatedImageDecoder;
    UIView *m_view;
    UIImage *m_cacheImage;
    NSObject<OS_dispatch_queue> *m_scaleQueue;
    NSNumber *m_latestImageDataSize;
    NSURL *m_latestImageDataUrl;
    _Bool _asyncWaitSubThreadLoadDataIfNotInCacheYet;
    _Bool _isImageStatic;
    _Bool _autoScale;
    _Bool _alwaysTemplateRenderingMode;
    _Bool _forceUpdate;
    unsigned int _uiPlayTimes;
    double _imageScale;
    MMImageLoaderReqContext *_reqContext;
    UIImage *_lastedImageSnapShot;
}

+ (id)getLoadedImageData:(id)arg1;
+ (_Bool)CanLoadImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *lastedImageSnapShot; // @synthesize lastedImageSnapShot=_lastedImageSnapShot;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain, nonatomic) MMImageLoaderReqContext *reqContext; // @synthesize reqContext=_reqContext;
@property(nonatomic) _Bool alwaysTemplateRenderingMode; // @synthesize alwaysTemplateRenderingMode=_alwaysTemplateRenderingMode;
@property(nonatomic) _Bool autoScale; // @synthesize autoScale=_autoScale;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) unsigned int uiPlayTimes; // @synthesize uiPlayTimes=_uiPlayTimes;
@property(nonatomic) _Bool isImageStatic; // @synthesize isImageStatic=_isImageStatic;
@property(nonatomic) _Bool asyncWaitSubThreadLoadDataIfNotInCacheYet; // @synthesize asyncWaitSubThreadLoadDataIfNotInCacheYet=_asyncWaitSubThreadLoadDataIfNotInCacheYet;
@property(nonatomic) _Bool loadCachedImageFileOnMainThread; // @synthesize loadCachedImageFileOnMainThread=_loadCachedImageFileOnMainThread;
@property(nonatomic) __weak id <MMWebImageViewDelegate> m_loadingDelegate; // @synthesize m_loadingDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)setImageFromCacheImage:(id)arg1 dataSize:(id)arg2 url:(id)arg3;
- (void)removeGifView;
- (id)getImageDataSizeFromLatestUrl:(id)arg1;
- (void)updateImageDataSize:(id)arg1 withUrl:(id)arg2;
- (_Bool)setImageFromImageLoaderForUrl:(id)arg1 orAsyncLoadIfNotInCacheYet:(_Bool *)arg2 reqContext:(id)arg3;
- (_Bool)setImageFromImageLoaderForUrl:(id)arg1;
- (_Bool)setImageFromData:(id)arg1 url:(id)arg2;
- (_Bool)setImageFromData:(id)arg1;
- (void)dealloc;
- (void)ImageDidAsyncLoadEndWithImage:(id)arg1 imageDataSize:(id)arg2 data:(id)arg3 Url:(id)arg4 userInfo:(id)arg5;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
@property(readonly, nonatomic) _Bool isSingleFrame;
- (id)getCurrentUrl;
- (id)getDarkModeUrl;
- (id)getUrl;
- (id)syncGetLatestImage;
- (id)getDefaultImage;
- (id)getImage;
- (void)setDefaultImage:(id)arg1;
- (void)callLoadingDelegateOnLoadImageFail;
- (void)callLoadingDelegateOnLoadImageOk:(id)arg1;
- (void)stopImageLoadingAndResetForCurrentUrl;
- (void)reloadImage;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 reqContext:(id)arg3 forceUpdate:(_Bool)arg4;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 reqContext:(id)arg3;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1;
- (void)setEmptyableImageWithUrlStr:(id)arg1;
- (void)setEmptyableImageUrl:(id)arg1 reqContext:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setEmptyableImageUrl:(id)arg1 reqContext:(id)arg2;
- (void)setEmptyableImageUrl:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setEmptyableImageUrl:(id)arg1;
- (void)setEmptyImageURL;
- (void)setFrame:(struct CGRect)arg1;
- (void)privateSetImage:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLoadingDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

