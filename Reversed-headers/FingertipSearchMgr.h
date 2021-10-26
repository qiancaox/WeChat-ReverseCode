//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IFunctionMsgExt-Protocol.h"
#import "KeywordMatherDelegate-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class ExpressMatcher, MMFSMather, NSString, RegexMatcher;

@interface FingertipSearchMgr : MMUserService <MMResourceMgrExt, IFunctionMsgExt, KeywordMatherDelegate, MMServiceProtocol>
{
    _Bool _bForbidByteSearchMode;
    _Bool _isNeedrebuildModel;
    MMFSMather *_matcher;
    ExpressMatcher *_expressMatcher;
    RegexMatcher *_regexMatcher;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedrebuildModel; // @synthesize isNeedrebuildModel=_isNeedrebuildModel;
@property(nonatomic) _Bool bForbidByteSearchMode; // @synthesize bForbidByteSearchMode=_bForbidByteSearchMode;
@property(retain, nonatomic) RegexMatcher *regexMatcher; // @synthesize regexMatcher=_regexMatcher;
@property(retain, nonatomic) ExpressMatcher *expressMatcher; // @synthesize expressMatcher=_expressMatcher;
@property(retain, nonatomic) MMFSMather *matcher; // @synthesize matcher=_matcher;
- (void)onMatchModelErrorHappend;
- (void)onMatchModelBuidSuccess;
- (void)onFunctionMsgResponse:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)rebuildMatchModel;
- (id)getKeywordsResult:(id)arg1;
- (id)getRegexSearchResult:(id)arg1;
- (id)getExpressResult:(id)arg1;
- (id)extractKeywordsWithContent:(id)arg1 version:(id *)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

