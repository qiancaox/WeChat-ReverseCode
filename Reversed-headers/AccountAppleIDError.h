//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AccountErrorInfo;

@interface AccountAppleIDError : NSObject
{
    long long _returnCode;
    AccountErrorInfo *_errorInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AccountErrorInfo *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;

@end

