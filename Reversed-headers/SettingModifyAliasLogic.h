//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol SettingModifyAliasLogicDelegate;

@interface SettingModifyAliasLogic : MMObject <PBMessageObserverDelegate>
{
    id <SettingModifyAliasLogicDelegate> _m_delegate;
}

+ (void)reportSettingModifyAliasBackOrCancelWithSessionid:(id)arg1 andModifyAliasPageScene:(unsigned int)arg2;
+ (void)reportSettingModifyAliasWithSessionid:(id)arg1 andModifyAliasActionCode:(unsigned int)arg2 andModifyAliasErrortype:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyAliasLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)OnModifyAlias:(id)arg1;
- (_Bool)modifyAlias:(id)arg1 checkCanSetAliasTicket:(id)arg2 setAliasPwdTicket:(id)arg3 setAliasHumanFaceTicket:(id)arg4;
- (void)OnCheckAliasValid:(id)arg1;
- (_Bool)checkAliasValid:(id)arg1;
- (void)OnCheckCanSetAlias:(id)arg1;
- (_Bool)checkCanSetAlias;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;

@end

