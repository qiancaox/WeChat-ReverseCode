//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

@class NSString, TemplateMsgExposeLogic, TemplateMsgSubViewController, WAContactGetter;

@interface TemplateMsgSubLogicController : BaseMsgContentLogicController
{
    WAContactGetter *m_contactGetter;
    TemplateMsgExposeLogic *m_exposeLogic;
    NSString *_templateSessionId;
    TemplateMsgSubViewController *_templateVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TemplateMsgSubViewController *templateVC; // @synthesize templateVC=_templateVC;
@property(retain, nonatomic) NSString *templateSessionId; // @synthesize templateSessionId=_templateSessionId;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onOpenWeappProfileWithAppid:(id)arg1 appBrandType:(unsigned int)arg2 msgWrap:(id)arg3;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1;
- (void)OpenChatView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetUsrTitle;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)isShowHeadImage:(id)arg1;
- (unsigned int)getMsgCountToLoad;
- (void)dealloc;
- (void)initViewController;
- (void)onWillEnterRoom;

@end

