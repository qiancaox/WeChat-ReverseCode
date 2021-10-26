//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VideoRingFileManager : NSObject
{
}

+ (void)CopyRingFile:(id)arg1 toEffectPathForRing:(id)arg2;
+ (_Bool)SetExclusiveRingForFriend:(id)arg1 FromPath:(id)arg2;
+ (_Bool)HasExclusiveRingFileForFriend:(id)arg1;
+ (void)RemoveExclusiveRingFileIfExistForFriend:(id)arg1 reason:(id)arg2;
+ (_Bool)RemoveExclusiveRingFileForFriend:(id)arg1;
+ (id)GetExclusiveRingFilePathForFriend:(id)arg1;
+ (id)GetExclusiveRingFileNameForFriend:(id)arg1;
+ (_Bool)SetGlobalRingFromPath:(id)arg1;
+ (_Bool)HasGlobalRingFile;
+ (void)RemoveGlobalRingFileIfExistForReason:(id)arg1;
+ (_Bool)RemoveGlobalRingFile;
+ (id)GetGlobalRingFilePath;
+ (id)GetGlobalRingFileName;
+ (id)RingToneFilePathForCaller:(id)arg1;
+ (id)GlobalRingToneSoundName;
+ (id)RingToneSoundNameForCaller:(id)arg1;
+ (id)GetFilePathForRingFile:(id)arg1;
+ (id)GetDownloadRingPathWithClientId:(id)arg1;
+ (id)GetDownloadRingCropedAudioFileDir;
+ (id)GetDownloadRingMediaDir;
+ (id)GetRingMediaDir;

@end

