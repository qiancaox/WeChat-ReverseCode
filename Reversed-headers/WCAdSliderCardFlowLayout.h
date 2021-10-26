//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface WCAdSliderCardFlowLayout : UICollectionViewFlowLayout
{
    _Bool _isInitialized;
    long long _align;
    double _minScale;
    struct CGSize _topItemSize;
    struct CGSize _collectionViewContentSize;
}

@property(nonatomic) struct CGSize collectionViewContentSize; // @synthesize collectionViewContentSize=_collectionViewContentSize;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) struct CGSize topItemSize; // @synthesize topItemSize=_topItemSize;
@property(nonatomic) long long align; // @synthesize align=_align;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutBottomAttributesForIndexPath:(id)arg1 currentPage:(long long)arg2 pageOffset:(double)arg3 pageOffsetProgress:(double)arg4;
- (double)parallaxProgressForVisibleIndex:(long long)arg1 offsetProgress:(double)arg2 minScale:(double)arg3;
- (id)layoutCenterAttributesForIndexPath:(id)arg1 currentPage:(long long)arg2 pageOffset:(double)arg3 pageOffsetProgress:(double)arg4;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithAlign:(long long)arg1;

@end

