//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSData, NSString;

@interface WWKFContentSendMsgInfo : MMObject
{
    NSString *_imageUrl;
    NSData *_imageData;
    CDUnknownBlockType _sendMsgHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sendMsgHandler; // @synthesize sendMsgHandler=_sendMsgHandler;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;

@end

