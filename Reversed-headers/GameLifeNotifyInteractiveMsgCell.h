//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterBaseMsg, MMBadgeView, UIImageView, UILabel, UIView;

@interface GameLifeNotifyInteractiveMsgCell : MMTableViewCell
{
    _Bool _addSeperator;
    int _showType;
    UIView *_separator;
    MMBadgeView *_badgeView;
    UILabel *_desc;
    unsigned int _unReadCount;
    GameCenterBaseMsg *_msg;
    UIImageView *_avatarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)updateDescText;
- (void)updateBadgeView;
- (void)layoutBadgeView;
- (_Bool)isInteractCell;
- (void)updateCellDataWithBaseMsg:(id)arg1 unReadCount:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 addSeperator:(_Bool)arg3 msgShowType:(int)arg4;

@end

