//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMSessionInfo, NSString;

@interface MainFrameCellData : NSObject <PBCoding>
{
    MMSessionInfo *m_sessionInfo;
    _Bool m_isNeedUpdateDataForUI;
    NSString *m_nsHeadImgUsrName;
    NSString *m_nsHeadImgUrl;
    _Bool m_timeIsMoreThanAWeek;
    _Bool m_isFirstInitTimeText;
    _Bool m_isHavenInitedWithSessionInfo;
    float m_widthForTimeLabelText;
    float m_widthForNameLabelText;
    _Bool m_bIsSenderFromSelf;
    NSString *m_nsRealUsrName;
    NSString *m_textForNameLabel;
    NSString *m_textForMessageLabel;
    NSString *m_textForGreenLabel;
    NSString *m_textForTimeLabel;
    NSString *m_prefixTextForQuoteMessage;
    float m_widthForMessageLabelText;
    float m_widthForGreenLabelText;
    NSString *m_oldTextForNameLabel;
    int m_widthCacheVersion;
    _Bool m_bIsNeedSaveCellData;
    _Bool m_bIsRoomDisplayEmpty;
    _Bool m_bIsModifyContact;
    long long m_lastUnReadCount;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForMessage;
    _Bool m_isNicknameUnsafe;
    _Bool m_isMessageUnsafe;
    _Bool m_bContainsEmoji;
    unsigned long long m_n64MesSvrID;
}

+ (void)deleteCellDataFromLocal:(id)arg1;
+ (id)dirNameForCurrentEnvironment;
+ (id)dirForCellDataFile;
+ (id)pathForCellData:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_bContainsEmoji;
+ (void)PBArrayAdd_m_n64MesSvrID;
+ (void)PBArrayAdd_m_widthCacheVersion;
+ (void)PBArrayAdd_m_bIsRoomDisplayEmpty;
+ (void)PBArrayAdd_m_widthForGreenLabelText;
+ (void)PBArrayAdd_m_widthForMessageLabelText;
+ (void)PBArrayAdd_m_prefixTextForQuoteMessage;
+ (void)PBArrayAdd_m_textForTimeLabel;
+ (void)PBArrayAdd_m_textForGreenLabel;
+ (void)PBArrayAdd_m_textForMessageLabel;
+ (void)PBArrayAdd_m_textForNameLabel;
+ (void)PBArrayAdd_m_bIsSenderFromSelf;
+ (void)PBArrayAdd_m_widthForNameLabelText;
+ (void)PBArrayAdd_m_widthForTimeLabelText;
+ (void)PBArrayAdd_m_timeIsMoreThanAWeek;
+ (void)PBArrayAdd_m_nsHeadImgUrl;
+ (void)PBArrayAdd_m_nsHeadImgUsrName;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMessageUnsafe; // @synthesize isMessageUnsafe=m_isMessageUnsafe;
@property(nonatomic) _Bool isNicknameUnsafe; // @synthesize isNicknameUnsafe=m_isNicknameUnsafe;
@property(retain, nonatomic) NSString *cpKeyForMessage; // @synthesize cpKeyForMessage=m_cpKeyForMessage;
@property(retain, nonatomic) NSString *cpKeyForNickname; // @synthesize cpKeyForNickname=m_cpKeyForNickname;
@property(nonatomic) _Bool m_bIsNeedSaveCellData; // @synthesize m_bIsNeedSaveCellData;
@property(nonatomic) _Bool m_bIsModifyContact; // @synthesize m_bIsModifyContact;
@property(nonatomic) long long m_lastUnReadCount; // @synthesize m_lastUnReadCount;
@property(retain, nonatomic) NSString *m_nsRealUsrName; // @synthesize m_nsRealUsrName;
@property(retain, nonatomic) NSString *m_oldTextForNameLabel; // @synthesize m_oldTextForNameLabel;
@property(readonly, nonatomic) _Bool m_isHavenInitedWithSessionInfo; // @synthesize m_isHavenInitedWithSessionInfo;
@property(nonatomic) _Bool m_isFirstInitTimeText; // @synthesize m_isFirstInitTimeText;
@property(retain, nonatomic) MMSessionInfo *m_sessionInfo; // @synthesize m_sessionInfo;
@property(nonatomic) _Bool m_bContainsEmoji; // @synthesize m_bContainsEmoji;
@property(nonatomic) unsigned long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(nonatomic) int m_widthCacheVersion; // @synthesize m_widthCacheVersion;
@property(nonatomic) _Bool m_bIsRoomDisplayEmpty; // @synthesize m_bIsRoomDisplayEmpty;
@property(nonatomic) float m_widthForGreenLabelText; // @synthesize m_widthForGreenLabelText;
@property(nonatomic) float m_widthForMessageLabelText; // @synthesize m_widthForMessageLabelText;
@property(retain, nonatomic) NSString *m_prefixTextForQuoteMessage; // @synthesize m_prefixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_textForTimeLabel; // @synthesize m_textForTimeLabel;
@property(retain, nonatomic) NSString *m_textForGreenLabel; // @synthesize m_textForGreenLabel;
@property(retain, nonatomic) NSString *m_textForMessageLabel; // @synthesize m_textForMessageLabel;
@property(retain, nonatomic) NSString *m_textForNameLabel; // @synthesize m_textForNameLabel;
@property(nonatomic) _Bool m_bIsSenderFromSelf; // @synthesize m_bIsSenderFromSelf;
@property(nonatomic) float m_widthForNameLabelText; // @synthesize m_widthForNameLabelText;
@property(nonatomic) float m_widthForTimeLabelText; // @synthesize m_widthForTimeLabelText;
@property(nonatomic) _Bool m_timeIsMoreThanAWeek; // @synthesize m_timeIsMoreThanAWeek;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUsrName; // @synthesize m_nsHeadImgUsrName;
- (void)updateWidthForNameLabel;
- (void)updateTextForTimeLabel;
- (void)updateDataFieldForUI;
- (void)updateData:(id)arg1;
- (void)updateDataAfterPBDecode:(id)arg1;
- (id)initWithSessionInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;
- (void)makeTextForPluginMessage;
- (void)makeTextForQuoteMessage;
- (id)makeEmoticonMessageText:(id)arg1;
- (void)makeTextSession:(id)arg1;
- (id)getGroupName;
- (void)makeTextForMessageLabel;
- (void)makeTextForNameLabel;
- (void)updateExtensionRegister:(id)arg1;
- (void)checkDataIsValid;
- (int)currentVersion;
- (void)updateTimeField:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

