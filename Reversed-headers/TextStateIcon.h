//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "TextStateIcon-Protocol.h"

@class NSMutableArray, NSString;

@interface TextStateIcon : NSObject <TextStateIcon, PBCoding>
{
    unsigned int showType;
    NSString *iconId;
    NSMutableArray *candidateAppearances;
    NSString *_customIconDescription;
}

+ (void)initialize;
+ (void)PBArrayAdd_candidateAppearances;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_iconId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) NSMutableArray *candidateAppearances; // @synthesize candidateAppearances;
@property(nonatomic) unsigned int showType; // @synthesize showType;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId;
- (_Bool)isCustom;
- (id)imageURLString;
- (_Bool)useOriginImage;
- (id)clusterDescription;
- (id)iconDescription;
- (_Bool)isValidForPublish;
- (_Bool)isValidForShow;
- (void)clearCachedDescription;
- (id)appearance;
- (id)winnerAppearance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)actions;
- (id)initWithIconId:(id)arg1 showType:(unsigned int)arg2 actions:(id)arg3;
- (id)initWithIconId:(id)arg1 actions:(id)arg2;
- (id)initWithIcon:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

