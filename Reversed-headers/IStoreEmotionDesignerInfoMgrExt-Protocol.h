//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EmotionActivity, EmotionLink, NSString, PersonalDesigner;

@protocol IStoreEmotionDesignerInfoMgrExt <NSObject>

@optional
- (void)onGetEmotionActivityForActivityId:(NSString *)arg1 md5:(NSString *)arg2 linkId:(NSString *)arg3 activity:(EmotionActivity *)arg4 link:(EmotionLink *)arg5;
- (void)onDesignerInfoUpdated:(PersonalDesigner *)arg1;
- (void)onGetDesignerForDesignerId:(NSString *)arg1 AndDesigner:(PersonalDesigner *)arg2;
@end

