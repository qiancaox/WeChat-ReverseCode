//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCPayFetchChargeShowInfoContent;

@interface WCPayFetchChargeShowInfo : NSObject
{
    unsigned int _m_id;
    WCPayFetchChargeShowInfoContent *_show_info;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayFetchChargeShowInfoContent *show_info; // @synthesize show_info=_show_info;
@property(nonatomic) unsigned int m_id; // @synthesize m_id=_m_id;
- (void)genFromDic:(id)arg1;

@end

