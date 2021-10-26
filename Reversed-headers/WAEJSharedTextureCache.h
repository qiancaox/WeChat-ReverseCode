//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableData, NSMutableDictionary;

@interface WAEJSharedTextureCache : NSObject
{
    NSMutableDictionary *textures;
    NSMutableData *premultiplyTable;
    NSMutableData *unPremultiplyTable;
    _Bool isEnterBackground;
    NSMutableArray *destroyedTextures;
    NSMutableArray *updateTextures;
}

@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground;
@property(readonly, nonatomic) NSMutableDictionary *textures; // @synthesize textures;
- (void)releaseDestroyedTextures;
- (void)addDestroyedTextures:(id)arg1;
@property(readonly, nonatomic) NSData *unPremultiplyTable;
@property(readonly, nonatomic) NSData *premultiplyTable;
- (void)dealloc;
- (void)releaseStoragesOlderThan:(double)arg1;
- (id)init;

@end

