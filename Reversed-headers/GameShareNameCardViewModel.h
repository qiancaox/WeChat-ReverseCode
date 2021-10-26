//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString;

@interface GameShareNameCardViewModel : CommonMessageViewModel
{
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)getReferImageAsync:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2;
- (_Bool)hasReferImage;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)headImageUrl;
- (id)desc;
- (id)name;

@end

