//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayJumpInfo;

@interface WCPayExposureInfo : NSObject
{
    unsigned int _is_show_btn;
    NSString *_icon;
    NSString *_name;
    NSString *_wording;
    NSString *_btn_wording;
    WCPayJumpInfo *_jump_info;
}

- (void).cxx_destruct;
@property(retain) WCPayJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property(retain) NSString *btn_wording; // @synthesize btn_wording=_btn_wording;
@property unsigned int is_show_btn; // @synthesize is_show_btn=_is_show_btn;
@property(retain) NSString *wording; // @synthesize wording=_wording;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *icon; // @synthesize icon=_icon;

@end

