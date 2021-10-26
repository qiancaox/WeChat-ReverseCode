//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface YYTextRubyAnnotation : NSObject <NSCopying, NSCoding>
{
    unsigned char _alignment;
    unsigned char _overhang;
    double _sizeFactor;
    NSString *_textBefore;
    NSString *_textAfter;
    NSString *_textInterCharacter;
    NSString *_textInline;
}

+ (id)rubyWithCTRubyRef:(struct __CTRubyAnnotation *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *textInline; // @synthesize textInline=_textInline;
@property(copy, nonatomic) NSString *textInterCharacter; // @synthesize textInterCharacter=_textInterCharacter;
@property(copy, nonatomic) NSString *textAfter; // @synthesize textAfter=_textAfter;
@property(copy, nonatomic) NSString *textBefore; // @synthesize textBefore=_textBefore;
@property(nonatomic) double sizeFactor; // @synthesize sizeFactor=_sizeFactor;
@property(nonatomic) unsigned char overhang; // @synthesize overhang=_overhang;
@property(nonatomic) unsigned char alignment; // @synthesize alignment=_alignment;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const struct __CTRubyAnnotation *)CTRubyAnnotation;
- (id)init;

@end

