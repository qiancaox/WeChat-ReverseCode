//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveConnectMicUser, MMFinderLiveTask, MMUIActivityIndicatorView, MMUIButton, UILabel, UIView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicUserCellView : UITableViewCell
{
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _actionDelegate;
    MMFinderLiveConnectMicUser *_connectMicUser;
    UIView *_bottomSeparatorLine;
    UILabel *_nickNameLabel;
    UILabel *_subTitleLabel;
    MMUIButton *_rightButton;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUser; // @synthesize connectMicUser=_connectMicUser;
@property(nonatomic) __weak id <MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onTapRightButton;
- (void)configBottomSeparatorLine;
- (void)configSubTitleLabel;
- (void)configNickNameLabel;
- (void)configRightButton;
- (void)configActivityIndicatorView;
- (void)prepareForReuse;

@end

