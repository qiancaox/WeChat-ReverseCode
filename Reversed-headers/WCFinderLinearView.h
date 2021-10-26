//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WCFinderLinearView : UIView
{
    _Bool _hasContent;
    _Bool _dirty;
    _Bool _objectReleasing;
    double _contentPadding;
    long long _horizontalAlign;
    long long _verticalAlign;
    struct UIEdgeInsets _contentInsets;
}

+ (id)horizontalLayoutView;
+ (id)verticalLayoutView;
+ (id)linearViewBuilder:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool objectReleasing; // @synthesize objectReleasing=_objectReleasing;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) long long verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(nonatomic) long long horizontalAlign; // @synthesize horizontalAlign=_horizontalAlign;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
- (void)doSizeToFotThenAdjustOrigin:(CDUnknownBlockType)arg1;
- (double)applyAlign:(long long)arg1 anchor:(double)arg2 withWidth:(double)arg3;
- (double)calculateAnchorAlign:(long long)arg1 withStart:(double)arg2 width:(double)arg3;
- (void)sizeToFit;
- (void)delaySizeToFit;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers:(id)arg1;
- (void)addObservers:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void *)observeContext;
- (void)addSubview:(id)arg1;
- (void)doUpdateViewPadding;
- (void)updatePaddingThenSizeToFit;
- (void)updateViewsPadding;
- (struct CGPoint)center;
- (struct CGRect)frame;
@property(nonatomic) double maxWidth;
@property(nonatomic) _Bool layoutVertical;
- (void)dealloc;
- (id)init;
- (id)initWithLayoutVertical:(_Bool)arg1;
- (void)addSpacer;
- (void)addSubVerticalLayout:(CDUnknownBlockType)arg1;
- (void)addSubHorizontalLayout:(CDUnknownBlockType)arg1;

@end

