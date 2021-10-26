//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonUploadInfoObj : MMObject <PBCoding>
{
    _Bool isUploadWxam;
    _Bool addToTop;
    _Bool isSelfie;
    _Bool needAsyncUpload;
    NSString *uploadImgMd5;
    NSString *attachedText;
    NSMutableArray *attachedEmojiMd5List;
    NSString *followMd5;
    unsigned long long status;
    unsigned long long failReason;
    unsigned long long retryCount;
    unsigned long long selfieEnterTime;
    unsigned long long selfieScene;
    NSString *attachedTextColor;
    NSString *lensId;
    NSString *_tempFilePath;
    NSString *_uploadFilePath;
}

+ (void)initialize;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_selfieScene;
+ (void)PBArrayAdd_selfieEnterTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_needAsyncUpload;
+ (void)PBArrayAdd_failReason;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_isSelfie;
+ (void)PBArrayAdd_addToTop;
+ (void)PBArrayAdd_followMd5;
+ (void)PBArrayAdd_attachedEmojiMd5List;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_isUploadWxam;
+ (void)PBArrayAdd_uploadImgMd5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
@property(retain, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId;
@property(retain, nonatomic) NSString *attachedTextColor; // @synthesize attachedTextColor;
@property(nonatomic) unsigned long long selfieScene; // @synthesize selfieScene;
@property(nonatomic) unsigned long long selfieEnterTime; // @synthesize selfieEnterTime;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount;
@property(nonatomic) _Bool needAsyncUpload; // @synthesize needAsyncUpload;
@property(nonatomic) unsigned long long failReason; // @synthesize failReason;
@property(nonatomic) unsigned long long status; // @synthesize status;
@property(nonatomic) _Bool isSelfie; // @synthesize isSelfie;
@property(nonatomic) _Bool addToTop; // @synthesize addToTop;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5;
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @synthesize attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText;
@property(nonatomic) _Bool isUploadWxam; // @synthesize isUploadWxam;
@property(retain, nonatomic) NSString *uploadImgMd5; // @synthesize uploadImgMd5;
- (unsigned int)totalLenOfData;
- (id)bufferWithOffset:(unsigned int)arg1 maxLen:(unsigned int)arg2;
- (id)dataOfEmoticon;
- (_Bool)saveImgDataToPath:(id)arg1 withImgData:(id)arg2;
- (_Bool)saveImgDataToUploadPathWithImgData:(id)arg1;
- (_Bool)saveImgDataToTempPathWithImgData:(id)arg1;
@property(readonly, nonatomic) unsigned long long emoticonType;
@property(readonly, nonatomic) _Bool isUploadDirectly;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

