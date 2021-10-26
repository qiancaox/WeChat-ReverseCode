//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QVisCacheManager : NSObject
{
    NSString *_configPath;
    NSString *_key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
- (void)getLayerCacheDataVerAndSytleVer:(id)arg1 verStruct:(CDStruct_a70f6672 *)arg2;
- (id)getVisLayerFileName:(id)arg1;
- (id)getCachePath:(id)arg1;
- (void)createInfoFolder:(id)arg1;
- (id)createCommonVector:(id)arg1;
- (id)createIdentifier;
- (_Bool)validateCacheConfigVersion:(id)arg1 dataVer:(id)arg2 layer:(id)arg3;
- (id)getLayersDictionaryFromConfigData:(id)arg1;
- (void)saveVisualLayerConfig:(id)arg1;
- (id)getLayerCacheData:(id)arg1;
- (void)writeData:(id)arg1 layer:(id)arg2;
- (void)saveLocalData:(id)arg1 layer:(id)arg2;
- (_Bool)checkIsLayerAuthen:(id)arg1;

@end

