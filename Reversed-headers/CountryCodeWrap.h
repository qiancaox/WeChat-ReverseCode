//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CountryCodeWrap : NSObject
{
    unsigned int _m_uiCountryNamesChineseStrokesCount;
    NSString *_m_nsCountryName;
    NSString *_m_nsCountryNamePinYin;
    NSString *_m_nsCountryCode;
    NSString *_m_nsISOCountryCodes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiCountryNamesChineseStrokesCount; // @synthesize m_uiCountryNamesChineseStrokesCount=_m_uiCountryNamesChineseStrokesCount;
@property(retain, nonatomic) NSString *m_nsISOCountryCodes; // @synthesize m_nsISOCountryCodes=_m_nsISOCountryCodes;
@property(retain, nonatomic) NSString *m_nsCountryCode; // @synthesize m_nsCountryCode=_m_nsCountryCode;
@property(retain, nonatomic) NSString *m_nsCountryNamePinYin; // @synthesize m_nsCountryNamePinYin=_m_nsCountryNamePinYin;
@property(retain, nonatomic) NSString *m_nsCountryName; // @synthesize m_nsCountryName=_m_nsCountryName;
- (long long)compare:(id)arg1;
- (id)description;

@end

