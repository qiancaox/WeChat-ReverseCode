//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBrandPrepayRequestStruct : NSObject
{
    NSString *appId;
    NSString *nonceStr;
    NSString *timestamp;
    NSString *package;
    NSString *paySign;
    NSString *signType;
    NSString *stepInURL;
    NSString *stepInAppUserName;
    unsigned int payChannel;
    NSString *extInfo;
    unsigned int payScene;
    NSString *weappPayCookies;
    unsigned int _payScene;
    unsigned int _weappEnterScene;
    NSString *_weappPayCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weappPayCookies; // @synthesize weappPayCookies=_weappPayCookies;
@property(nonatomic) unsigned int weappEnterScene; // @synthesize weappEnterScene=_weappEnterScene;
@property(nonatomic) unsigned int payScene; // @synthesize payScene=_payScene;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned int payChannel; // @synthesize payChannel;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL;
@property(retain, nonatomic) NSString *stepInAppUserName; // @synthesize stepInAppUserName;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void)dealloc;

@end

