//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAVResource.h"

@class CIImage;

@interface TAVImageResource : TAVResource
{
    CIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)tracksForType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;

@end

