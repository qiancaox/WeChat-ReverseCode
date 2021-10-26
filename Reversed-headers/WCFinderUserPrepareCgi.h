//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@protocol WCFinderUserPrepareCgiDelegate;

@interface WCFinderUserPrepareCgi : WCFinderBaseCgi
{
    long long _scene;
    id <WCFinderUserPrepareCgiDelegate> _delegate;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _successfulBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(nonatomic) __weak id <WCFinderUserPrepareCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

