//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCommentDetailTextViewContext : NSObject
{
    NSString *_lastReplacementText;
    struct _NSRange _lastReplacementRange;
    struct _NSRange _backupStartRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange backupStartRange; // @synthesize backupStartRange=_backupStartRange;
@property(copy, nonatomic) NSString *lastReplacementText; // @synthesize lastReplacementText=_lastReplacementText;
@property(nonatomic) struct _NSRange lastReplacementRange; // @synthesize lastReplacementRange=_lastReplacementRange;
- (_Bool)isLastChangeValid;
- (void)clearContext;
- (void)checkBackupStatusWithTextView:(id)arg1;
- (void)updateTextViewReplacementRange:(struct _NSRange)arg1 text:(id)arg2;

@end

