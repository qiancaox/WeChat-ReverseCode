//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCLabelDynamicLayout : NSObject
{
    double _labelFontSize;
    double _labelHeight;
}

@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double labelFontSize; // @synthesize labelFontSize=_labelFontSize;
- (id)labelFont;
- (void)configBtn:(id)arg1;
- (void)configLabel:(id)arg1;
- (id)initWithBasicFontSize:(double)arg1 lineHeight:(double)arg2;

@end

