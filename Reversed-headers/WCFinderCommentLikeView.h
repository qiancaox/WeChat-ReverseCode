//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIImageView, UILabel;

@interface WCFinderCommentLikeView : MMUIButton
{
    UIImageView *_likeImageView;
    UILabel *_likeNumbLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *likeNumbLabel; // @synthesize likeNumbLabel=_likeNumbLabel;
@property(nonatomic) __weak UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
- (void)updateCommenLikeStaus:(_Bool)arg1 isCommentClose:(_Bool)arg2 likeNumber:(unsigned long long)arg3;
- (void)setUpUI;
- (id)init;

@end

