//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextState3rdPartyBaseHandler.h"

@class TextStatusJumpInfoFinderProfile;

@interface TextState3rdPartyFinderProfileHandler : TextState3rdPartyBaseHandler
{
    TextStatusJumpInfoFinderProfile *_finderProfile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStatusJumpInfoFinderProfile *finderProfile; // @synthesize finderProfile=_finderProfile;
- (_Bool)doSourceActionWithViewController:(id)arg1;
- (id)customView;
- (_Bool)preferCustomView;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;

@end

