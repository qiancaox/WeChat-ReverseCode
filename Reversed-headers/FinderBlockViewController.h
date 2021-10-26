//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSString, OpenApiParameter, WCFinderJumpInfo;
@protocol OpenApiFinderBizDelegate;

@interface FinderBlockViewController : MMUIViewController
{
    id <OpenApiFinderBizDelegate> _delegate;
    OpenApiParameter *_parameter;
    NSString *_openUrl;
    WCFinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
@property(nonatomic) __weak id <OpenApiFinderBizDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didNeedRefreshTokenWithResult:(id)arg1;
- (void)onReturn;
- (void)configJumpInfoWithParameter:(id)arg1;
- (void)doAuthWithUrl:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithInfoData:(id)arg1 andOpenUrl:(id)arg2 jumpInfo:(id)arg3;
- (id)initWithInfoData:(id)arg1 andOpenUrl:(id)arg2;

@end

