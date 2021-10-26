//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseRecommendMsgCellViewModel.h"

@class BTRecommendAccountData, BTRecommendAppMsg;

@interface BTBaseRecommendAppMsgCellViewModel : BTBaseRecommendMsgCellViewModel
{
    unsigned int _accountIndex;
    unsigned int _appMsgIndex;
}

+ (id)classNameArr;
+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
+ (id)createModelWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
@property(readonly, nonatomic) unsigned int appMsgIndex; // @synthesize appMsgIndex=_appMsgIndex;
@property(readonly, nonatomic) unsigned int accountIndex; // @synthesize accountIndex=_accountIndex;
@property(readonly, nonatomic) BTRecommendAppMsg *appMsg;
@property(readonly, nonatomic) BTRecommendAccountData *accountData;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;

@end

