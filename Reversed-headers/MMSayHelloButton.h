//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "FriendAsistSessionExt-Protocol.h"

@class CPushContact, NSString;

@interface MMSayHelloButton : UIButton <FriendAsistSessionExt>
{
    CPushContact *m_oLastVerifyContact;
    NSString *m_nsUsrName;
    unsigned int m_uiUnReadCount;
    double m_fHeight;
}

- (void).cxx_destruct;
- (void)onFriendAssistUnreadCountChanged;
- (unsigned int)GetUnReadCount;
- (void)UpdateView;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 Height:(double)arg2;

@end

