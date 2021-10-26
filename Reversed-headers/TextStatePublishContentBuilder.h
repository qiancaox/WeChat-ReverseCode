//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImageLoaderObserver-Protocol.h"

@class EmojiInfoObj, NSString, TextStatePublishBlackListItem, TextStatePublishMediaInfo, TextStatePublishSourceInfo, UIImage, WCLocationInfo;
@protocol TextStateIcon;

@interface TextStatePublishContentBuilder : NSObject <MMImageLoaderObserver>
{
    _Bool _refetch3rdPartyBackground;
    unsigned int _editCreateTime;
    id <TextStateIcon> _icon;
    NSString *_desc;
    WCLocationInfo *_positionInfo;
    TextStatePublishBlackListItem *_blackListItem;
    EmojiInfoObj *_emojiInfo;
    NSString *_backgroundId;
    UIImage *_image;
    NSString *_imagePath;
    NSString *_imageURLString;
    NSString *_videoPath;
    UIImage *_videoThumbImage;
    TextStatePublishMediaInfo *_mediaInfo;
    TextStatePublishSourceInfo *_sourceInfo;
    NSString *_editTextStateId;
    NSString *_followUsername;
    NSString *_followTextStateId;
    CDUnknownBlockType _completionBlock;
}

+ (void)setMediaFieldsForBuilder:(id)arg1 withUsername:(id)arg2 textState:(id)arg3;
+ (id)builderFromFollowingTextStateForUsername:(id)arg1;
+ (id)builderFromEditingTextState;
+ (id)builderFromSourceInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool refetch3rdPartyBackground; // @synthesize refetch3rdPartyBackground=_refetch3rdPartyBackground;
@property(retain, nonatomic) NSString *followTextStateId; // @synthesize followTextStateId=_followTextStateId;
@property(retain, nonatomic) NSString *followUsername; // @synthesize followUsername=_followUsername;
@property(retain, nonatomic) NSString *editTextStateId; // @synthesize editTextStateId=_editTextStateId;
@property(nonatomic) unsigned int editCreateTime; // @synthesize editCreateTime=_editCreateTime;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) TextStatePublishMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) UIImage *videoThumbImage; // @synthesize videoThumbImage=_videoThumbImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *backgroundId; // @synthesize backgroundId=_backgroundId;
@property(retain, nonatomic) EmojiInfoObj *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(retain, nonatomic) TextStatePublishBlackListItem *blackListItem; // @synthesize blackListItem=_blackListItem;
@property(retain, nonatomic) WCLocationInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) id <TextStateIcon> icon; // @synthesize icon=_icon;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)generateLocalVideoMediaInfo;
- (void)privateSetImage:(id)arg1;
- (void)clearBackground;
@property(readonly, nonatomic) _Bool needDownloadOrProcessExternMedia;
- (void)prepareContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)useStatic3rdPartyMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

