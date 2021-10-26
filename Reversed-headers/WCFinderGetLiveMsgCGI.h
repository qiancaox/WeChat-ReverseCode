//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class FinderLiveClientStatus, NSData;

@interface WCFinderGetLiveMsgCGI : WCFinderLiveBaseCgi
{
    _Bool _offline;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _scene;
    NSData *_liveCookies;
    FinderLiveClientStatus *_liveClientStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveClientStatus *liveClientStatus; // @synthesize liveClientStatus=_liveClientStatus;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (id)mergeFromInitCommentArr1:(id)arg1 initCommentArr2:(id)arg2;
- (id)tranferToLiveCommentDataItemsFromFinderLiveAppMsgList:(id)arg1 forTaskId:(id)arg2;
- (id)transferToLiveOnlineContacts:(id)arg1;
- (id)tranferToLiveCommentDataItems:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 offline:(_Bool)arg3 liveClientStatus:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

