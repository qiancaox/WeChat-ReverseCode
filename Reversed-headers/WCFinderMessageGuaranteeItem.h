//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCFinderMessageGuaranteeItem : MMObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_relativePath;
    NSString *_appid;
    NSString *_scene;
}

+ (id)xmlNodeName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;

@end

