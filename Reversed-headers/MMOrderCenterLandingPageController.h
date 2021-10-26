//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCSearchDelegate-Protocol.h"

@class MMOrderCenterPivotViewController, NSArray, NSString, WCSearcher;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterLandingPageController : MMUIViewController <WCSearchDelegate>
{
    id <MMOrderCenterReporter> _reporter;
    NSArray *_pivotTabControllers;
    WCSearcher *_searcher;
    MMOrderCenterPivotViewController *_pivotViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOrderCenterPivotViewController *pivotViewController; // @synthesize pivotViewController=_pivotViewController;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) NSArray *pivotTabControllers; // @synthesize pivotTabControllers=_pivotTabControllers;
@property(retain, nonatomic) id <MMOrderCenterReporter> reporter; // @synthesize reporter=_reporter;
- (void)reportEntry;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

