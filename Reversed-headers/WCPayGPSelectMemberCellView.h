//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact;

@interface WCPayGPSelectMemberCellView : MMUIView
{
    CContact *_contact;
    CContact *_chatroomContact;
}

+ (double)calcHeightForCellWithContact:(id)arg1 chatroomContact:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2 chatroomContact:(id)arg3;
- (void)dealloc;

@end

