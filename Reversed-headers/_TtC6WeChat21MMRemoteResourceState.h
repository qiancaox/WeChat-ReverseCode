//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface _TtC6WeChat21MMRemoteResourceState : NSObject <PBCoding>
{
    // Error parsing type: , name: localizedMD5
    // Error parsing type: , name: downloadedURL
    // Error parsing type: , name: retryCountOfDownloadedURL
}

+ (void)initialize;
+ (void)PBArrayAdd_retryCountOfDownloadedURL;
+ (void)PBArrayAdd_downloadedURL;
+ (void)PBArrayAdd_localizedMD5;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long retryCountOfDownloadedURL; // @synthesize retryCountOfDownloadedURL;
@property(nonatomic, copy) NSString *downloadedURL;
@property(nonatomic, copy) NSString *localizedMD5;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

