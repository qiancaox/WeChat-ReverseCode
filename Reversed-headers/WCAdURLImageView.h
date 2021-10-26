//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "WCCanvasImageLoaderObserver-Protocol.h"

@class NSString;
@protocol WCAdURLImageViewDelegate;

@interface WCAdURLImageView : UIImageView <WCCanvasImageLoaderObserver>
{
    _Bool _useCdn;
    unsigned int _downloadScene;
    id <WCAdURLImageViewDelegate> _delegate;
    NSString *_url;
    NSString *_urlDark;
}

+ (id)fetchImageFromCacheWithUrl:(id)arg1;
+ (_Bool)isImageForUrlExistInCache:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool useCdn; // @synthesize useCdn=_useCdn;
@property(nonatomic) unsigned int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(retain, nonatomic) NSString *urlDark; // @synthesize urlDark=_urlDark;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <WCAdURLImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateImageContent;
- (id)fetchImageForUrl:(id)arg1;
- (void)setImageWithUrl:(id)arg1 darkUrl:(id)arg2 scene:(unsigned int)arg3 useCdn:(_Bool)arg4;
- (void)setImageWithUrl:(id)arg1 darkUrl:(id)arg2;
- (void)setImageWithUrl:(id)arg1 scene:(unsigned int)arg2 useCdn:(_Bool)arg3;
- (void)setImageWithUrl:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

