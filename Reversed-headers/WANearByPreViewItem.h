//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WANearByPreViewItem : MMObject
{
    unsigned int _appVersion;
    unsigned int _debugMode;
    NSString *_userName;
    NSString *_previewNickName;
    NSString *_headImageUrlString;
    NSString *_path;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *headImageUrlString; // @synthesize headImageUrlString=_headImageUrlString;
@property(copy, nonatomic) NSString *previewNickName; // @synthesize previewNickName=_previewNickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

