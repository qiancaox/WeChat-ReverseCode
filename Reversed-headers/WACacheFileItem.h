//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WACacheFileItem : NSObject
{
    unsigned int _modifyTime;
    NSString *_filePath;
    unsigned long long _fileSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;

@end

