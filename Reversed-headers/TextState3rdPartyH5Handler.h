//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextState3rdPartyBaseHandler.h"

@class NSString;

@interface TextState3rdPartyH5Handler : TextState3rdPartyBaseHandler
{
    _Bool _confidence;
    NSString *_URLString;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (_Bool)doSourceActionWithViewController:(id)arg1;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomMedia;

@end

