//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSValue;

@interface WCSheetComponentViewAttributes : NSObject <NSCopying>
{
    unsigned long long _type;
    NSValue *_insetsValue;
    NSNumber *_fixedWidth;
    unsigned long long _alignment;
}

+ (id)attributes;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSNumber *fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(retain, nonatomic) NSValue *insetsValue; // @synthesize insetsValue=_insetsValue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

