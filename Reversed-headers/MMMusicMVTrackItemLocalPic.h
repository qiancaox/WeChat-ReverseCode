//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface MMMusicMVTrackItemLocalPic : NSObject <PBCoding, NSCopying>
{
    NSString *localId;
    NSString *localPicPath;
    NSString *picVideoPath;
    NSString *picVideoThumbPath;
}

+ (void)initialize;
+ (void)PBArrayAdd_picVideoThumbPath;
+ (void)PBArrayAdd_picVideoPath;
+ (void)PBArrayAdd_localPicPath;
+ (void)PBArrayAdd_localId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *picVideoThumbPath; // @synthesize picVideoThumbPath;
@property(retain, nonatomic) NSString *picVideoPath; // @synthesize picVideoPath;
@property(retain, nonatomic) NSString *localPicPath; // @synthesize localPicPath;
@property(retain, nonatomic) NSString *localId; // @synthesize localId;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

