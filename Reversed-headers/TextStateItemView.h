//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TextStateMgrExt-Protocol.h"
#import "WCTextStateDBExt-Protocol.h"

@class CContact, MMWebImageView, NSString;

@interface TextStateItemView : UIView <TextStateMgrExt, WCTextStateDBExt>
{
    CContact *_contact;
    MMWebImageView *_stateEmojiImageView;
    struct CGSize _stateEmojiSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize stateEmojiSize; // @synthesize stateEmojiSize=_stateEmojiSize;
@property(retain, nonatomic) MMWebImageView *stateEmojiImageView; // @synthesize stateEmojiImageView=_stateEmojiImageView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onTextStateRead:(id)arg1;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)updateWithContact:(id)arg1;
- (void)sizeToFit;
- (void)setupUI;
- (id)initWithContact:(id)arg1 stateEmojiSize:(struct CGSize)arg2;
- (id)initWithContact:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

