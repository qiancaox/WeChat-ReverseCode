//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QTileOverlayInternalPath : NSObject
{
    int _language;
    long long _x;
    long long _y;
    long long _z;
}

@property(nonatomic) int language; // @synthesize language=_language;
@property(nonatomic) long long z; // @synthesize z=_z;
@property(nonatomic) long long y; // @synthesize y=_y;
@property(nonatomic) long long x; // @synthesize x=_x;
- (id)initWithBitmapTileID:(struct MapBitmapTileID *)arg1;

@end

