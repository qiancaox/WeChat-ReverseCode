//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderExtendedReading;

@interface WCFinderExtReadingInfoModel : NSObject
{
    _Bool _isFromDraft;
    _Bool _linkIsFromPasteBoard;
    FinderExtendedReading *_extReading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool linkIsFromPasteBoard; // @synthesize linkIsFromPasteBoard=_linkIsFromPasteBoard;
@property(nonatomic) _Bool isFromDraft; // @synthesize isFromDraft=_isFromDraft;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @synthesize extReading=_extReading;
@property(nonatomic) long long style;
@property(nonatomic) unsigned long long type;
- (id)init;
- (id)initWithPBReadingInfo:(id)arg1;

@end

