//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CEmoticonWrap, NSString;

@interface EmoticonPreviewModel : NSObject
{
    unsigned int _type;
    int _scene;
    CEmoticonWrap *_emoticonWrap;
    NSString *_emoticonDescription;
    NSString *_pageWrapPid;
    NSString *_prevPageWrapPid;
    unsigned long long _index;
    struct CGRect _originFrame;
}

+ (unsigned int)getTypeWithPid:(id)arg1 md5:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *prevPageWrapPid; // @synthesize prevPageWrapPid=_prevPageWrapPid;
@property(retain, nonatomic) NSString *pageWrapPid; // @synthesize pageWrapPid=_pageWrapPid;
@property(retain, nonatomic) NSString *emoticonDescription; // @synthesize emoticonDescription=_emoticonDescription;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
- (void)reportAction:(int)arg1;
- (int)sceneWithType;
@property(readonly, nonatomic) double height;
- (unsigned long long)convetToCustomEmoticonTypeWhenCanMod;
- (_Bool)isEmoticonCanMod;

@end

