//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveCouponViewDelegate-Protocol.h"
#import "MMFinderLiveGoodsBaseCellDelegate-Protocol.h"
#import "MMFinderLiveGoodsCellDelegate-Protocol.h"
#import "MMFinderLiveShopSectionHeaderViewDelegate-Protocol.h"
#import "MMFinderLiveShopShelfBottomEditingDelegate-Protocol.h"
#import "MMFinderLiveShopShelfHeaderViewDelegate-Protocol.h"
#import "MMFinderLiveShopShelfManageHeaderViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"

@class CAShapeLayer, FinderLiveShopCustomerServiceInfo, MMFinderLiveAdsItem, MMFinderLiveGoodsItem, MMFinderLiveShopShelfBottomEditingView, MMFinderLiveShopShelfHeaderView, MMFinderLiveShopShelfManageHeaderView, MMFinderLiveTaskId, MMLoadingView, MMTableView, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, OrderedDictionary, UIButton, UIPanGestureRecognizer, UIVisualEffectView, WCFinderBaseCgi, WCFinderRefreshTableFooterView;
@protocol MMFinderLiveShopShelfViewDelegate;

@interface MMFinderLiveShopShelfView : UIView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveShopShelfHeaderViewDelegate, MMFinderLiveShopShelfManageHeaderViewDelegate, MMFinderLiveShopShelfBottomEditingDelegate, MMFinderLiveGoodsCellDelegate, MMFinderLiveShopSectionHeaderViewDelegate, WCFinderRefreshTableFooterViewDelegate, UIGestureRecognizerDelegate, WCFinderLiveExt, MMFinderLiveCouponViewDelegate, MMFinderLiveGoodsBaseCellDelegate>
{
    _Bool _isOpening;
    _Bool _isInEditingMode;
    _Bool _hasReordered;
    _Bool _hasPromotedAds;
    _Bool _hasMoreCoupon;
    unsigned int _totalCount;
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveShopShelfViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_secondaryPageContainerView;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
    MMFinderLiveShopShelfHeaderView *_headerView;
    MMFinderLiveShopShelfManageHeaderView *_manageHeaderView;
    MMFinderLiveShopShelfBottomEditingView *_bottomEdittingView;
    MMTableView *_goodsListTableView;
    MMTableView *_secondaryListTableView;
    MMLoadingView *_loadingView;
    UIButton *_addGoodsButton;
    WCFinderRefreshTableFooterView *_footerView;
    OrderedDictionary *_goodsViewModelOrderedDict;
    OrderedDictionary *_couponViewModelOrderedDict;
    OrderedDictionary *_goodsShopAssitantViewModelOrderedDict;
    NSMutableArray *_canUseCouponGoodsViewModelArray;
    NSMutableArray *_selectedGoodsViewModelItemIds;
    NSMutableArray *_edittingGoodsViewModelItemIds;
    NSMutableArray *_sendingCouponViewModelItemIds;
    NSMutableArray *_notSendingCouponViewModelItemIds;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
    unsigned long long _secondaryPageMode;
    MMFinderLiveGoodsItem *_currentGoodsItem;
    MMFinderLiveAdsItem *_currentAdsItem;
    MMFinderLiveGoodsItem *_currentPromtingGoodsItem;
    WCFinderBaseCgi *_getLiveShopShelfProductLastCgi;
    NSMutableDictionary *_adItemInfosDict;
    NSMutableArray *_sectionList;
    NSMutableArray *_couponSectionList;
    long long _couponTotalCount;
    NSData *_couponLastBuffer;
    FinderLiveShopCustomerServiceInfo *_shopCustomerServiceInfo;
    NSMutableSet *_exposedProductIdSet;
    NSMutableArray *_addExposedProductIdArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *addExposedProductIdArr; // @synthesize addExposedProductIdArr=_addExposedProductIdArr;
@property(retain, nonatomic) NSMutableSet *exposedProductIdSet; // @synthesize exposedProductIdSet=_exposedProductIdSet;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo *shopCustomerServiceInfo; // @synthesize shopCustomerServiceInfo=_shopCustomerServiceInfo;
@property(retain, nonatomic) NSData *couponLastBuffer; // @synthesize couponLastBuffer=_couponLastBuffer;
@property(nonatomic) long long couponTotalCount; // @synthesize couponTotalCount=_couponTotalCount;
@property(retain, nonatomic) NSMutableArray *couponSectionList; // @synthesize couponSectionList=_couponSectionList;
@property(nonatomic) _Bool hasMoreCoupon; // @synthesize hasMoreCoupon=_hasMoreCoupon;
@property(retain, nonatomic) NSMutableArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) NSMutableDictionary *adItemInfosDict; // @synthesize adItemInfosDict=_adItemInfosDict;
@property(nonatomic) _Bool hasPromotedAds; // @synthesize hasPromotedAds=_hasPromotedAds;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) WCFinderBaseCgi *getLiveShopShelfProductLastCgi; // @synthesize getLiveShopShelfProductLastCgi=_getLiveShopShelfProductLastCgi;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentPromtingGoodsItem; // @synthesize currentPromtingGoodsItem=_currentPromtingGoodsItem;
@property(retain, nonatomic) MMFinderLiveAdsItem *currentAdsItem; // @synthesize currentAdsItem=_currentAdsItem;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentGoodsItem; // @synthesize currentGoodsItem=_currentGoodsItem;
@property(nonatomic) unsigned long long secondaryPageMode; // @synthesize secondaryPageMode=_secondaryPageMode;
@property(nonatomic) _Bool hasReordered; // @synthesize hasReordered=_hasReordered;
@property(nonatomic) _Bool isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *notSendingCouponViewModelItemIds; // @synthesize notSendingCouponViewModelItemIds=_notSendingCouponViewModelItemIds;
@property(retain, nonatomic) NSMutableArray *sendingCouponViewModelItemIds; // @synthesize sendingCouponViewModelItemIds=_sendingCouponViewModelItemIds;
@property(retain, nonatomic) NSMutableArray *edittingGoodsViewModelItemIds; // @synthesize edittingGoodsViewModelItemIds=_edittingGoodsViewModelItemIds;
@property(retain, nonatomic) NSMutableArray *selectedGoodsViewModelItemIds; // @synthesize selectedGoodsViewModelItemIds=_selectedGoodsViewModelItemIds;
@property(retain, nonatomic) NSMutableArray *canUseCouponGoodsViewModelArray; // @synthesize canUseCouponGoodsViewModelArray=_canUseCouponGoodsViewModelArray;
@property(retain, nonatomic) OrderedDictionary *goodsShopAssitantViewModelOrderedDict; // @synthesize goodsShopAssitantViewModelOrderedDict=_goodsShopAssitantViewModelOrderedDict;
@property(retain, nonatomic) OrderedDictionary *couponViewModelOrderedDict; // @synthesize couponViewModelOrderedDict=_couponViewModelOrderedDict;
@property(retain, nonatomic) OrderedDictionary *goodsViewModelOrderedDict; // @synthesize goodsViewModelOrderedDict=_goodsViewModelOrderedDict;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIButton *addGoodsButton; // @synthesize addGoodsButton=_addGoodsButton;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMTableView *secondaryListTableView; // @synthesize secondaryListTableView=_secondaryListTableView;
@property(retain, nonatomic) MMTableView *goodsListTableView; // @synthesize goodsListTableView=_goodsListTableView;
@property(retain, nonatomic) MMFinderLiveShopShelfBottomEditingView *bottomEdittingView; // @synthesize bottomEdittingView=_bottomEdittingView;
@property(retain, nonatomic) MMFinderLiveShopShelfManageHeaderView *manageHeaderView; // @synthesize manageHeaderView=_manageHeaderView;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *secondaryPageContainerView; // @synthesize secondaryPageContainerView=_secondaryPageContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) __weak id <MMFinderLiveShopShelfViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportExposedProductIds;
- (void)collectExposedProductIds;
- (void)edgePanGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)onLiveGoodsCellSelected:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onActionButtonClicked:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (_Bool)isInMultiSelectEditingMode;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)onFinderLiveGoodsDelete;
- (void)onFinderLiveGoodsAllSelected:(_Bool)arg1;
- (void)onHeaderViewDoneBtnClicked;
- (void)onHeaderViewCancelBtnClicked;
- (_Bool)isShopAssistantBtnHidden;
- (_Bool)isManageGoodsBtnHidden;
- (_Bool)isGoodsOrderBtnHidden;
- (_Bool)isShowingCanUseCouponGoodsList;
- (void)onHeaderViewShopAssistantBtnClicked;
- (void)onHeaderViewGoodsOrderBtnClicked;
- (void)onHeaderViewBackBtnClicked;
- (void)onHeaderViewCloseBtnClicked;
- (void)onSectionHeaderManageGoodsClicked;
- (void)onSectionHeaderAddGoodsClicked;
- (void)onSectionHeaderMoreClicked;
- (_Bool)showGoodsAssitant:(_Bool)arg1;
- (void)hideSecondaryPage:(_Bool)arg1;
- (void)animateShowSecondaryPage:(id)arg1 animate:(_Bool)arg2;
- (id)secondaryGoodsListOrderedDic;
- (void)updateGoodAssitantList;
- (void)updateCouponSendingList;
- (void)loadMoreCouponWithItemList:(id)arg1;
- (void)fetchMoreCoupon;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onScrollViewDidEndScroll;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddGoodsButtonClicked;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 productIds:(id)arg2;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 productId:(unsigned long long)arg2;
- (void)onEndPromoteAdResult:(id)arg1;
- (void)onSendPromoteAdResult:(id)arg1;
- (void)onEndPromoteProductResult:(id)arg1;
- (void)onSendPromoteProductResult:(id)arg1;
- (id)displayingLiveGoodsViewModelKeys;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)notifyTableViewRowDidSelectionChanged;
- (void)updatePromotAdStatusWithAdsItem:(id)arg1;
- (void)updatePromotProductStatusWithGoodsItem:(id)arg1;
- (void)updateAdsInfoDictWithItemList:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)updateSectionList;
- (void)loadDataWithCanUseCouponItemList:(id)arg1;
- (void)openWithCanUseCouponItemList:(id)arg1 couponId:(id)arg2;
- (void)loadDataWithItemList:(id)arg1;
- (void)appendCouponItem:(id)arg1;
- (void)appendGoodsItem:(id)arg1;
- (id)liveTask;
- (void)showGoodsItem:(id)arg1;
- (id)getAdsItemForAdId:(unsigned long long)arg1;
- (void)endEditMode:(_Bool)arg1;
- (void)beginEditMode;
- (void)stopLoading;
- (void)stopLoading:(_Bool)arg1;
- (void)startLoading;
- (void)deviceDidRotate:(id)arg1;
- (void)reloadData;
- (void)scrollToFinderShopWindowProduct:(id)arg1 animated:(_Bool)arg2;
- (void)checkShoppingAnchorStatusItem;
- (void)fetchFinderShopWindowProduct:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)cleanOpenWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)manullyCloseWithAnimation:(_Bool)arg1;
- (void)openSecondaryPageWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)closeWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeWithAnimation:(_Bool)arg1;
- (_Bool)isLandScape;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)initView;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

