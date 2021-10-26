//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMH5ExtTransferReqParams : NSObject
{
    unsigned int _cmdId;
    unsigned int _jsApiControlBytesIndex;
    NSString *_cgiUri;
    NSString *_reqJson;
    NSString *_h5Url;
    NSString *_scope;
    NSString *_h5AuthToken;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *h5AuthToken; // @synthesize h5AuthToken=_h5AuthToken;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned int jsApiControlBytesIndex; // @synthesize jsApiControlBytesIndex=_jsApiControlBytesIndex;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *reqJson; // @synthesize reqJson=_reqJson;
@property(retain, nonatomic) NSString *cgiUri; // @synthesize cgiUri=_cgiUri;
@property(nonatomic) unsigned int cmdId; // @synthesize cmdId=_cmdId;

@end

