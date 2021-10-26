//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TLProfileMediaViewProvider-Protocol.h"

@class NSString, UIImage, WCDataItem;

@interface TLProfileVideoMediaViewProvider : NSObject <TLProfileMediaViewProvider>
{
    unsigned int type;
    WCDataItem *_dataItem;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) unsigned int type; // @synthesize type;
- (_Bool)isInvalid;
- (id)reportSourceFeedId;
- (id)mediaDescription;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)generateConfig;
- (id)mediaItem;
- (id)mediaContentView;
- (id)defaultImage;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1;
@property(readonly, nonatomic) _Bool useCoverForContent;
- (id)customView;
@property(readonly, nonatomic) _Bool preferCustomView;
- (id)headImageView;
@property(readonly, nonatomic) NSString *expandableHeaderAccessibilityLabel;
- (id)title;
- (id)initWithDataItem:(id)arg1 image:(id)arg2;
- (_Bool)supportCustomMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidesBlurForShortHeightMedias;
@property(readonly) Class superclass;

@end

