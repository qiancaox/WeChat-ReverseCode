//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBaseFile, NSString;

@interface WePkgParser : NSObject
{
    unsigned int _resourceOffset;
    NSString *_filePath;
    CBaseFile *_file;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int resourceOffset; // @synthesize resourceOffset=_resourceOffset;
@property(retain, nonatomic) CBaseFile *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)getLiteAppPkgInfo;
- (_Bool)openFile;
- (id)getResourceContent:(unsigned int)arg1 Len:(unsigned int)arg2;
- (id)getMetaInfo;
- (id)initWithPkgPath:(id)arg1;

@end

