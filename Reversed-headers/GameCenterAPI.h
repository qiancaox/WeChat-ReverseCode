//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GameCenterAPI : NSObject
{
}

+ (int)openGameMsgCenter:(id)arg1 extInfo:(id)arg2;
+ (int)openGameDetail:(id)arg1 extInfo:(id)arg2 retErrorMsg:(id *)arg3;
+ (int)openGameLibrary:(id)arg1;
+ (int)openMainPage:(id)arg1;
+ (_Bool)openGameCenterView:(id)arg1 openType:(int)arg2 extInfo:(id)arg3 retErrorMsg:(id *)arg4;
+ (_Bool)openGameTabHome:(id)arg1 withExtra:(id)arg2 withVC:(id)arg3 retErrorMsg:(id *)arg4;

@end

