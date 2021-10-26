//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageDB, CMessageWrap, ImageInfo, NSData, NSString, UIImage;
@protocol MessageWrapImgDelegate;

@protocol IMsgExtendOperation <NSObject>
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap;
- (id)copy;

@optional
- (NSString *)msgReferSummaryAndReplace:(_Bool)arg1;
- (NSString *)msgReferSummary;
- (_Bool)msgCanBeRefered;
- (NSString *)messageFTSText;
- (NSString *)GetDisplaySessionContent;
- (NSString *)GetDisplayContent;
- (void)UpdateMassSendContent:(NSString *)arg1;
- (_Bool)genImageFromMMAssetAndNotify:(id <MessageWrapImgDelegate>)arg1;
- (_Bool)IsHDImg;
- (void)setImage:(UIImage *)arg1 withImageInfo:(ImageInfo *)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(UIImage *)arg1 withData:(NSData *)arg2 withImageInfo:(ImageInfo *)arg3 isLongOriginImage:(_Bool)arg4;
- (void)setImage:(UIImage *)arg1 withData:(NSData *)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(UIImage *)arg1 isLongOriginImage:(_Bool)arg2;
- (void)SetOriginal:(_Bool)arg1;
- (unsigned int)GetContentAttributeBitSetFlag;
- (_Bool)GetDownloadThumbStatus:(unsigned int *)arg1;
- (_Bool)isShowAppMessageBlockButton;
- (_Bool)isShowAppBottomButton;
- (unsigned int)GetPreviewType;
- (NSString *)getFileExt;
- (void)UpdateVideoStatus:(CMessageDB *)arg1;
- (void)SetPlaySounded:(_Bool)arg1;
- (_Bool)IsPlaySounded;
- (_Bool)IsRecording;
- (void)SetPlayed;
- (_Bool)IsDownloadEnded;
- (_Bool)IsUnPlayed;
- (_Bool)SaveMesVoice:(NSString *)arg1;
- (NSString *)GetBufferUploadContent;
- (NSString *)GetDownloadThumbPath;
- (NSString *)GetThumbPath;
- (void)UpdateMsgSource;
- (void)ChangeForMsgSource;
- (void)ChangeForSimpleMsgInfo;
- (void)ChangeForBackup;
- (void)UpdateGameInfo:(NSString *)arg1;
- (NSString *)GetGameStatReportString;
- (NSString *)GetContent;
- (void)UpdateContent:(NSString *)arg1;
- (void)ChangeForDisplayAnyhow;
- (void)ChangeForDisplay;
@end

