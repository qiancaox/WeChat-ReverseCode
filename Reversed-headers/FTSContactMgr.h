//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSTopHitDelegate-Protocol.h"
#import "IFTSContactDataProviderExt-Protocol.h"

@class FTSTopHitMgr, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FTSContactMgr : NSObject <FTSTopHitDelegate, IFTSContactDataProviderExt>
{
    _Bool _hasInited;
    NSMutableArray *_arrFilterContact;
    NSMutableArray *_arrFilterAddressBookFriend;
    NSMutableArray *_arrNormalContact;
    NSMutableArray *_arrGroupContact;
    NSMutableArray *_arrBrandContact;
    NSString *_lastQueryText;
    NSString *_newestQueryText;
    NSMutableArray *_arrLastQueryKeywords;
    NSMutableDictionary *_dicSearchMatchTip;
    NSMutableArray *_arrGroupContactForDetailPage;
    NSMutableArray *_arrSourceGroupContact;
    NSString *_lastQueryTextForDetailPage;
    NSString *_newestQueryTextForDetailPage;
    NSMutableArray *_arrLastQueryKeywordsForDetailPage;
    NSMutableDictionary *_dicSearchMatchTipForDetailPage;
    NSMutableDictionary *_dicMatchWeChatID;
    NSMutableDictionary *_dicCacheFilterContact;
    NSMutableDictionary *_dicCacheFilterAddressBookFriend;
    NSMutableArray *_arrSourceSingleContact;
    NSMutableArray *_arrSingleContactForDetailPage;
    NSMutableArray *_arrAddressBookFriendForDetailPage;
    NSMutableArray *_arrSourceBrandContact;
    NSMutableArray *_arrBrandContactForDetailPage;
    _Bool _needMonitorReport;
    _Bool _needSaveRUContact;
    NSMutableDictionary *_dicRUContact;
    _Bool _bMultiKeywordMatchForHomepage;
    _Bool _bMultiKeywordMatchForDetailPage;
    _Bool _isHomePageFastSearching;
    _Bool _isUseTrainSort;
    unsigned long long _mgrScene;
    FTSTopHitMgr *_ftsTopHitMgr;
    unsigned long long _eDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSearchMatchTipForDetailPage; // @synthesize dicSearchMatchTipForDetailPage=_dicSearchMatchTipForDetailPage;
@property(retain, nonatomic) NSMutableDictionary *dicSearchMatchTip; // @synthesize dicSearchMatchTip=_dicSearchMatchTip;
@property(nonatomic) unsigned long long eDataSource; // @synthesize eDataSource=_eDataSource;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(nonatomic) unsigned long long mgrScene; // @synthesize mgrScene=_mgrScene;
@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
@property(retain, nonatomic) NSMutableArray *arrLastQueryKeywordsForDetailPage; // @synthesize arrLastQueryKeywordsForDetailPage=_arrLastQueryKeywordsForDetailPage;
@property(retain, nonatomic) NSString *newestQueryTextForDetailPage; // @synthesize newestQueryTextForDetailPage=_newestQueryTextForDetailPage;
@property(retain, nonatomic) NSString *lastQueryTextForDetailPage; // @synthesize lastQueryTextForDetailPage=_lastQueryTextForDetailPage;
@property(retain, nonatomic) NSArray *arrLastQueryKeywords; // @synthesize arrLastQueryKeywords=_arrLastQueryKeywords;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
- (void)checkNewSortTipsFor:(id)arg1;
- (void)checkNewSortTips:(id)arg1;
- (void)newSortGroupContacts:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3;
- (_Bool)mainThreadHandleContactSearchResult:(id)arg1 helpDataItem:(id)arg2 arrFilterContact:(id)arg3 arrFilterAddressFriend:(id)arg4 dicCheckList:(id)arg5 dicSearchMatchTip:(id)arg6 needStatTopHit:(_Bool)arg7 needHandleAddressBookFriend:(_Bool)arg8;
- (id)filterGroupMemberContact:(id)arg1;
- (void)onContactDeleted:(id)arg1;
- (void)onContactReplaced:(id)arg1;
- (void)onAddressBookReload;
- (void)onContactReload;
- (void)onClearData;
- (void)onAppTerminate;
- (void)onEnterBackground;
- (void)asyncDetailSearch:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)syncSearchTextForSingleContact:(id)arg1 limitCount:(unsigned int)arg2;
- (_Bool)isTopHitContactActive:(id)arg1;
- (_Bool)isTopHitAddressBookReady;
- (_Bool)isTopHitContactReady;
- (id)getNickNameToFriendsDictionary;
- (id)getAddressBookDictionary;
- (id)getContactDictionary;
- (id)getChinesePinyin;
- (unsigned int)getCreateTimeForUser:(id)arg1;
- (id)getBrandContactsForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPageOfBrandContact:(id)arg1;
- (void)cancelSearchForDetailPageOfBrandContact;
- (void)asyncSearchTextForDetailPageOfBrandContact:(id)arg1;
- (void)doSearchForDetailPageOfBrandContact:(id)arg1;
- (id)getSourceBrandContactForDetailPage;
- (id)getAddressBookFriendForDetailPage:(id)arg1;
- (id)getSingleContactsForDetailPage:(id)arg1;
- (id)getNormalContactsForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPageOfSingleContact:(id)arg1;
- (void)cancelSearchForDetailPageOfSingleContact;
- (void)asyncSearchTextForDetailPageOfSingleContact:(id)arg1;
- (void)doSearchForDetailPageOfSingleContact:(id)arg1;
- (id)getSourceSingleContactContactForDetailPage;
- (id)getGroupContactsForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (void)cancelSearchForDetailPage;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (void)doSearchForDetailPage:(id)arg1;
- (id)getSourceGroupContactForDetailPage;
- (_Bool)isMultiMatchKeywordForDetailPage;
- (_Bool)isMultiMatchKeywordForHomePage;
- (_Bool)checkMultiKeywordMatchInfo:(id)arg1;
- (_Bool)hasMatchWechatID:(id)arg1;
- (id)getDetailMatchTipForUserName:(id)arg1;
- (id)getMatchTipForUserName:(id)arg1;
- (void)resetHomepageSearchResult;
- (void)cancelSearch;
- (void)asyncSearchText:(id)arg1;
- (void)monitorReport;
- (void)doSearch:(id)arg1;
- (void)searchCompletely:(id)arg1;
- (void)searchTextCompletely:(id)arg1;
- (void)searchTextAndNotNotify:(id)arg1;
- (void)invalidateDetailCache;
- (void)invalidAllAddressBookCache;
- (void)invalidAllContactCache;
- (id)getSourceAddressBook;
- (id)getSourceFilterAddressFriend:(id)arg1;
- (id)getSourceFilterContact:(id)arg1;
- (id)getCacheFilterAddressFriend:(id)arg1;
- (_Bool)hasCacheFilterAddressFriend:(id)arg1;
- (id)getCacheFilterContact:(id)arg1;
- (_Bool)hasCacheFilterContact:(id)arg1;
- (void)cacheSearchResult;
- (unsigned int)getBrandContactsCount;
- (id)getBrandContacts;
- (_Bool)hasBrandContacts;
- (unsigned int)getGroupContactsCount;
- (id)getGroupContacts;
- (_Bool)hasGroupContacts;
- (unsigned int)getAddressBookFriendsCount;
- (id)getAddressBookFriendsByNickName:(id)arg1;
- (id)getAddressBookFriends;
- (_Bool)hasAddressBookeFriends;
- (unsigned int)getNormalContactsCount;
- (id)getNormalContacts;
- (_Bool)hasNormalContacts;
- (void)selectAddressFriend:(id)arg1;
- (void)selectContact:(id)arg1 isHomePage:(_Bool)arg2;
- (void)selectContact:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (unsigned int)getTotalCount;
- (_Bool)hasSearchResult;
- (void)sortAddressBookFriends:(id)arg1 matchTips:(id)arg2;
- (void)sortContacts:(id)arg1 matchTips:(id)arg2;
- (id)getDicSourceContact;
- (id)getArrSourceContact;
- (void)logGroupMatchTipForDetailSearch;
- (void)logGroupMatchTip;
- (void)logInfo;
- (void)doInitWorker;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

