//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact;

@interface WCFinderCommentDetailTextViewMentionEntry : NSObject
{
    _Bool _isValid;
    CContact *_mentionContact;
    struct _NSRange _mentionRange;
}

+ (id)entryWithRange:(struct _NSRange)arg1 contact:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) CContact *mentionContact; // @synthesize mentionContact=_mentionContact;
@property(nonatomic) struct _NSRange mentionRange; // @synthesize mentionRange=_mentionRange;

@end

