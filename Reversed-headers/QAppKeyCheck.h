//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QAppKeyCheck : NSObject
{
    NSString *_miniProgramID;
    NSString *_businessKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(copy, nonatomic) NSString *miniProgramID; // @synthesize miniProgramID=_miniProgramID;
- (id)initWithMiniProgramID:(id)arg1 businessKey:(id)arg2;
- (id)appendParameterString;
- (void)onURLFinishLoading:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startAppKeyCheck:(CDUnknownBlockType)arg1;

@end

